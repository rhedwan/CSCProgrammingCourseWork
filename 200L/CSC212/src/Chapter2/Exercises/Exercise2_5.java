package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_5 {
    public static void main(String[] arg){
        System.out.print("Enter the subtotal and a gratuity rate: ");
        Scanner input = new Scanner(System.in);
        double subTotal = input.nextDouble();
        double gratuityRate = input.nextDouble();
        double gratuity = gratuityRate / subTotal;
        double total = gratuity + subTotal;
        System.out.println("The gratuity is $" + gratuity + " and total is $" + total);
    }
}
