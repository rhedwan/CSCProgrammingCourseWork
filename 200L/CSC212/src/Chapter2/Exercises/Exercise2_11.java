package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_11 {
    public static void main(String[] args){
        System.out.print("Enter the number of years: ");
        Scanner input = new Scanner(System.in);
        int year = input.nextInt();

        double totalSecondsInAYear = 365 * 24 * 3600 ;
        double birthsPerSecond = 1.0 /7;
        double deathsPerSecond = 1.0/ 13;
        double immigrantPerSecond = 1.0/ 45;
        double feasibleGrowthRate = birthsPerSecond -deathsPerSecond+ immigrantPerSecond;

        double currentPopulation = 312032486;
        currentPopulation = currentPopulation +  year *(totalSecondsInAYear * feasibleGrowthRate);
        System.out.println(currentPopulation);
    }
}
