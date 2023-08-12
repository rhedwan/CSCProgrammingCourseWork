package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_16 {
    public static void main(String[] args) {
        System.out.print("Enter the side: ");
        Scanner input = new Scanner(System.in);
        double side = input.nextDouble();
        double area = 3 * Math.pow(3, 0.5) /2 * side *side;
        System.out.print("The area of the hexagon is " + area);
    }

}
