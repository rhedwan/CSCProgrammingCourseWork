"""
Ask the user for a temperature. Then ask them what units, Celsius or Fahrenheit,
the temperature is in. Your program should convert the temperature to the other unit.
The conversions are F = 5 C+ 32 and C = 59 (F- 32).
"""

type = input("Enter Celsius (C) or Fahrenheit(F): ").lower()
temperature = float(input("Enter your temperature value: "))
if type == "c":
    output =  round((temperature * 5/9) + 32)
    print(f"The conversion of {temperature }degrees Celsius is {output} degrees Fahrenheit")

elif type == "f":
    output =  round((temperature - 32) * 5/9)
    print(f"The conversion of {temperature} degrees Fahrenheit is {output} degrees Celsius")

else:
    print("Invalid unit of measurement. Please enter Celsius or Fahrenheit.")
