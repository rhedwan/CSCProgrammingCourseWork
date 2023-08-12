package Chapter2.Exercises;

import java.util.Scanner;

public class Exercise2_17 {
    public static void main(String[] args) {
        System.out.print("Enter the temperature in Fahrenheit between -58°F and 41°F: ");
        Scanner input  = new Scanner(System.in);
        double outsideTemperature = input.nextDouble();

        System.out.print("Enter the wind speed (>=2) in miles per hour: ");
        double windSpeed = input.nextDouble();


        double windChillTemperature = 35.74 + 0.6215*outsideTemperature - 35.75*Math.pow(windSpeed, 0.16) +
                0.4275*outsideTemperature * Math.pow(windSpeed, 0.16)  ;

        System.out.println("The wind chill index is " + windChillTemperature);
    }
}
