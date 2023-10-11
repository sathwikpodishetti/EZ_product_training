def generate_odd_order_magic_square(n):
    if n % 2 == 0:
        raise ValueError("Only odd-order magic squares are supported.")
    
    # Create an empty square filled with zeros
    magic_square = [[0] * n for _ in range(n)]
    j=n-1
    i= n // 2  # Initial position for number 1 (top row, middle column)
    for num in range(1,n*n+1):
        magic_square[i][j]=num
        i=i-1
        j=j+1
        if(i==-1 and j==n):
            i=0
            j=n-2
        else:
            if(i==-1):
                i=n-1
            if(j==n):
                j=0

        # If the next position is already filled, adjust the position
        if magic_square[i][j] != 0:
            i=i+1  # Move up and right
            j=j-2

    return magic_square

def print_magic_square(magic_square):
    for row in magic_square:
        # Print each row as a space-separated string
        print(" ".join(map(str, row)))

# Example usage:
n = int(input("enter the order:")) # Specify the order of the magic square (e.g., 3 for a 3x3 square)
magic_square = generate_odd_order_magic_square(n)
print("Magic Square of Order", n)
print_magic_square(magic_square)