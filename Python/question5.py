# Ask the user to enter a number. Print out the square of the number, but use the
# sep optional argument to print it out in a full sentence that ends in a period.

number = int(input("Enter a number: "))
square = number ** 2
print("The square of", number, "is", square, ".", sep=" ")
