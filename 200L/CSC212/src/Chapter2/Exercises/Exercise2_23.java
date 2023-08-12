package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_23 {
    public static void main(String[] args) {
        System.out.print("Enter the driving distance: ");
        Scanner input = new Scanner(System.in);
        double distance = input.nextDouble();

        System.out.print("Enter miles per gallon: ");
        double gallon = input.nextDouble();

        System.out.print("Enter price per gallon:");
        double price = input.nextDouble();

        double cost = (distance/gallon) * price;

        System.out.println("The cost of driving is " + cost);
    }
}
