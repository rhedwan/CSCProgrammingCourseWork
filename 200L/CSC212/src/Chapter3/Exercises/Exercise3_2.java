package Chapter3.Exercises;
import java.util.Scanner;
public class Exercise3_2 {
    public static void main(String[] args) {
        int number1 = (int)(Math.random() * 10);
        int number2 = (int)(Math.random() * 10);
        int number3 = (int)(Math.random() * 10);
        int sum = number1 + number2 + number3;

        Scanner input = new Scanner(System.in);
        System.out.print("What is " + number1 + " + " + number2 + " + " + number3 + "? ");

        int answer = input.nextInt();
        if (answer == sum) {
            System.out.println("Correct 🥳");
        }else{
            System.out.println("Incorrect 🌚");
        }

    }
}
