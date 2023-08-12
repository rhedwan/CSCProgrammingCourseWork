package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_19 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter three points for a triangle: ");
        double x1 = input.nextDouble();
        double y1 = input.nextDouble();
        double x2 = input.nextDouble();
        double y2 = input.nextDouble();
        double x3 = input.nextDouble();
        double y3 = input.nextDouble();

        double xCoordinateAB = Math.pow(x2 - x1, 2);
        double yCoordinateAB = Math.pow(y2 - y1, 2);
        double sideA  = Math.pow(xCoordinateAB + yCoordinateAB, 0.5);

        double xCoordinateAC = Math.pow(x3 - x1, 2);
        double yCoordinateAC = Math.pow(y3 - y1, 2);
        double sideB  = Math.pow(xCoordinateAC + yCoordinateAC, 0.5);

        double xCoordinateBC = Math.pow(x3 - x2, 2);
        double yCoordinateBC = Math.pow(y3 - y2, 2);
        double sideC  = Math.pow(xCoordinateBC + yCoordinateBC, 0.5);

        double semiPerimeter = (sideA + sideB + sideC)/2;

        double area = Math.pow( semiPerimeter * (semiPerimeter -sideA) * (semiPerimeter -sideB)
                * (semiPerimeter -sideC),0.5);

        System.out.print("The area of the triangle is " + area);
    }
}
