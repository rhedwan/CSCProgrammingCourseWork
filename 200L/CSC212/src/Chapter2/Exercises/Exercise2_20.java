package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_20 {
    public static void main(String[] args){
        System.out.print("Enter balance and interest rate (e.g., 3 for 3%): ");
        Scanner input = new Scanner(System.in);
        double balance = input.nextDouble();
        double annualInterestRate = input.nextDouble();
        double interest = balance * (annualInterestRate/1200) ;
        System.out.println("The interest is " + interest);
    }
}
