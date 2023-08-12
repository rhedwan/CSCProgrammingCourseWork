package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_6 {
    public static void main(String[] args) {
        System.out.print("Enter a number between 0 and 1000: ");
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        int sum = 0;
        int remainder;
        while (number > 0){
            remainder = number % 10;
            sum += remainder;
            number /= 10;
        }
        System.out.println("The sum of the digits is " + sum);
    }
}
