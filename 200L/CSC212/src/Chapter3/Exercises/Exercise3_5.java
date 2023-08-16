package Chapter3.Exercises;

import java.util.Scanner;

public class Exercise3_5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter today's day: ");
        int today = input.nextInt();
        System.out.print("Enter the number of days elapsed since today: ");
        int futureDay = input.nextInt();

        int exactFutureDay = (futureDay + today) % 7;

        if (today == 0){
            System.out.print("Today is Sunday");
        }else if (today == 1){
            System.out.print("Today is Monday");
        }else if (today == 2){
            System.out.print("Today is Tuesday");
        }else if (today == 3){
            System.out.print("Today is Wednesday");
        }else if (today == 4){
            System.out.print("Today is Thursday");
        }else if (today == 5){
            System.out.print("Today is Friday");
        }else if (today == 6){
            System.out.print("Today is Saturday");
        }
        if (exactFutureDay == 0){
            System.out.print(" and the future day is Sunday");
        }else if (exactFutureDay == 1){
            System.out.print(" and the future day is Monday");
        }else if (exactFutureDay == 2){
            System.out.print(" and the future day is Tuesday");
        }else if (exactFutureDay == 3){
            System.out.print(" and the future day is Wednesday");
        }else if (exactFutureDay == 4){
            System.out.print(" and the future day is Thursday");
        }else if (exactFutureDay == 5){
            System.out.print(" and the future day is Friday");
        }else if (exactFutureDay == 6){
            System.out.print(" and the future day is Saturday");
        }
    }
}
