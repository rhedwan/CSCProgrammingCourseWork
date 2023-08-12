package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_21 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter investment amount: ");
        double investmentAmount = input.nextDouble();

        System.out.print("Enter annual interest rate in percentage: ");
        double monthlyInterestRate = input.nextDouble();

        System.out.print("Enter number of years: ");
        double numberOfYears = input.nextDouble();

       double futureInvestmentValue = investmentAmount * Math.pow(1 + monthlyInterestRate/1200, numberOfYears *12);
       System.out.println("Accumulated value is "+ futureInvestmentValue);
    }
}
