package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_3 {
    public static void main(String[] args){
        System.out.print("Enter a value for feet: ");
        Scanner input = new Scanner(System.in);
        double feet = input.nextDouble();
        double meters = feet * 0.305;
        System.out.println(feet + " feet is " + meters + " meters");
    }
}
