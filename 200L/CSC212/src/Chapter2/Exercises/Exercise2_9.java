package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_9 {
    public static void main(String[] args) {
        System.out.print("Enter v0, v1, and t: ");
        Scanner input = new Scanner(System.in);
        double initialVelocity = input.nextDouble();
        double finalVelocity = input.nextDouble();
        double timeTaken = input.nextDouble();
        double acceleration = (finalVelocity - initialVelocity) /timeTaken;
        System.out.println("The average acceleration is " + acceleration);

    }
}
