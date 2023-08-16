package Chapter3.Exercises;

import java.util.Scanner;

public class Exercise3_9 {
    public static void main(String[] args) {
        System.out.print("Enter the first 9 digits of an ISBN as integer: ");
        Scanner input = new Scanner(System.in);
        int ISBN = input.nextInt();
        int d1, d2, d3, d4, d5, d6, d7, d8, d9, remainDigits;
        d1 = ISBN /100000000;
        remainDigits = ISBN % 100000000;
        d2 = remainDigits / 10000000;
        remainDigits %= 10000000;
        d3 = remainDigits /1000000;
        remainDigits %= 1000000;
        d4 = remainDigits /100000;
        remainDigits %= 100000;
        d5 = remainDigits /10000;
        remainDigits %= 10000;
        d6 = remainDigits /1000;
        remainDigits %= 1000;
        d7 = remainDigits /100;
        remainDigits %= 100;
        d8 = remainDigits /10;
        remainDigits %= 10;
        d9  = remainDigits;
        int lastDigit = (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 +
                d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11;
        if (lastDigit == 10){
            System.out.print("The ISBN-10 number is " + d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + + d9 + "X");
        }else{
            System.out.print("The ISBN-10 number is " + d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + + d9 + lastDigit);
        }
    }
}
