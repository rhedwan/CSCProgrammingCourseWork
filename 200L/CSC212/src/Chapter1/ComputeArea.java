package Chapter1;

import java.util.Scanner;

public class ComputeArea {
    public static void main(String[] arg){
        System.out.print("What is the radius of the circle: ");
        Scanner input = new Scanner(System.in);
        double radius = input.nextDouble();
        double area = radius * radius * 22/7;
        System.out.println("The area is: " + area);
        System.out.println("Introduction to Java Programming," +
                "by Y. Daniel Liang");
    }
}
