package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_7 {
    public static void main(String[] args) {
        System.out.print("Enter the number of minutes: ");
        Scanner input = new Scanner(System.in);
        long totalMinutes = input.nextLong();
        int years = 0;
        int totalDays = 0;
        totalDays = (int) totalMinutes / (24 * 60);
        years = totalDays / 365;
        int remainingDays =  totalDays % 365;
        System.out.println(totalMinutes + " minutes is approximately " + years + " years and "+ remainingDays +" days");
    }
}
