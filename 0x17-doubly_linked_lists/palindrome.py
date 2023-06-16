#!/usr/bin/python3
largest_palindrome = 0

# Loop through all possible pairs of 3-digit numbers
for i in range(100, 1000):
    for j in range(100, 1000):
        # Calculate the product of the two numbers
        product = i * j
        # Convert the product to a string and check if it's a palindrome
        if str(product) == str(product)[::-1]:
            # If it's a palindrome, check if it's larger than the current largest palindrome
            if product > largest_palindrome:
                largest_palindrome = product

# Save the result to a file
with open('102-result', 'w') as f:
    f.write(str(largest_palindrome))

