package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_12 {
    public static void main(String[] args) {
        System.out.print("Enter speed and acceleration: ");
        Scanner input = new Scanner(System.in);
        double speed = input.nextDouble();
        double acceleration = input.nextDouble();
        double length = Math.pow(speed,2) / (2 * acceleration);
        System.out.println("The minimum runway length for this airplane is " + length);
    }
}
