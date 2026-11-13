# Take two numbers in a single line separated by space
one, two = input().split() # You need to separate the inputs by spaces

# Convert inputs to integers
one = int(one)
two = int(two)

print(one // two)      # Expected output for input "5 5" is 1
