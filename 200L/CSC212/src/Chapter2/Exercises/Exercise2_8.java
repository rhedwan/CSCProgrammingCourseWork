package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_8 {
    public static void main(String[] args) {
        System.out.print("Enter the time zone offset to GMT: ");
        int zoneOffset = new Scanner(System.in).nextInt();
        long totalMilliseconds = System.currentTimeMillis();
        long totalSeconds = totalMilliseconds / 1000;
        long currentSecond = totalSeconds % 60;
        long totalMinutes = totalSeconds / 60;
        long currentMinute = totalMinutes % 60;
        long totalHour = totalMinutes / 60;
        totalHour += zoneOffset;
        long currentHour = totalHour % 24;
        System.out.println("Current time is " + currentHour + ":"
                + currentMinute + ":" + currentSecond + " GMT");
    }
}
