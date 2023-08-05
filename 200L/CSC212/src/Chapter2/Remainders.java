package Chapter2;

public class Remainders {
    public static void main(String[] args) {
        System.out.println(56 % 6); //2
        System.out.println(78 % -4); // 2
        System.out.println(-34 % 5); // -4
        System.out.println(-34 % -5); // -4
        System.out.println(5 % 1); // 0
        System.out.println(1 % 5); // 1

        // 2.12   If today is Tuesday, what will be the day in 100 days?
        System.out.println(102 % 7);

        /*
        2.13 What is the result of 25 / 4? How would you rewrite the expression if you wished
        the result to be a floating-point number?
        */

        System.out.println(25 /4);

        // 2.14 Show the result of the following code:
        System.out.println(2 * (5 / 2 + 5 / 2));
        System.out.println(2 * 5 / 2 + 2 * 5 / 2);
        System.out.println(2 * (5 / 2));
        System.out.println(2 * 5 / 2);

        // 2.16 Write a statement to display the result of 23.5.
        System.out.println(Math.pow(2, 3.5));

        System.out.println(0B1111); // Displays 15
        System.out.println(0B100);
        System.out.println(07777); // Displays 4095
        System.out.println(0XFFFF); // Displays 65535

        System.out.println(5_2534e+1);
        System.out.println(34D);

    }
}
