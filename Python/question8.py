"""
Write a program that asks the user to enter a length in centimeters.
If the user enters a negative length, the program should tell the user that the entry is invalid.
Otherwise, the program should convert the length to inches and print out the result.
There are 2.54 centimeters in an inch.

"""

length = float(input("Enter your length (in centimeters): "))
if length < 0:
    print("Invalid entry. Length must be non-negative.")
else:
    print(f"There are {length} centimeters in {round(length/2.54, 2)} inch")