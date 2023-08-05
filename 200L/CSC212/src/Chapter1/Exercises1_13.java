package Chapter1;

import java.util.Scanner;

public class Exercises1_13 {
    public static void main(String[] args) {
        double x, y, a, b, c, d, e, f;
        System.out.print("Enter the values in this order 'a, b, c, d, e, f': ");
        Scanner input = new Scanner(System.in);
        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();
        d = input.nextDouble();
        e = input.nextDouble();
        f = input.nextDouble();
        x = (e*d - b*f) /(a*d - b*c);
        y = (a*f - e*c) /(a*d - b*c);
        System.out.println("The value of x and y is " + x + " and " + y);
    }
}
