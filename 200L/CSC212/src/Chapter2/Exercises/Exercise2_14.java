package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_14 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter weight in pounds: ");
        double weight = input.nextDouble();

        System.out.print("Enter height in inches: ");
        double height = input.nextDouble();

        double BMI = (weight * 0.45359237) / Math.pow(height * 0.0254, 2);

        System.out.println("BMI is " + BMI);

    }
}
