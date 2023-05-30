def leap_year(year):
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                print(year,"Is a leap year, becasue it's  divisible by 4, 100, 400")
        else:
            print(year,"Is a leap year, becasue it's  divisible by 4 and doesn't need to be a century year")
    else:
        print(year,"Is not a leap year, becasue it's not divisible by 4")



leap_year(2000)
leap_year(2024)
leap_year(2016)
leap_year(2016)
leap_year(1997)
leap_year(1991)
leap_year(2010)
