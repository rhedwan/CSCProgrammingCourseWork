package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_13 {
    public  static void main(String[] args){
        System.out.print("Enter the monthly saving amount: ");
        Scanner input  = new Scanner(System.in);
        double amount = input.nextDouble();
        double afterFirstMonth = amount * (1 + 0.00417);
        double afterSecondMonth = (amount + afterFirstMonth) * (1 + 0.00417);
        double afterThirdMonth = (amount + afterSecondMonth) * (1 + 0.00417);
        double afterFourthMonth = (amount + afterThirdMonth) * (1 + 0.00417);
        double afterFifthMonth = (amount + afterFourthMonth) * (1 + 0.00417);
        double afterSixthMonth = (amount + afterFifthMonth) * (1 + 0.00417);
        System.out.println("After the sixth month, the account value is $" + afterSixthMonth);

//        Using for loop
        double accumulatedAmount = 0;
        for (int i = 0; i < 5; i++) {
            accumulatedAmount = (accumulatedAmount + amount) +  (1 + 0.00417);
        }
        System.out.println("After the sixth month, the account value is $" + afterSixthMonth);

    }
}
