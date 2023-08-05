package Chapter2;

import java.util.Scanner;

public class NamedConstants {
    public static void main(String[] args) {
        final double PI = 3.14159;
        System.out.print("What is the radius of the circle: ");
        Scanner input = new Scanner(System.in);
        double radius = input.nextDouble();
        double area = radius * radius * PI;
        System.out.println("The area is: " + area);

    }
}



