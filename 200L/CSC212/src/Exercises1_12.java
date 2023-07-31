public class Exercises1_12{
    public static void main(String[] arg){
        double miles = 24;
        double kilometers = miles * 1.6;
        double timeInHours = 1;
        double timeInMinutes = 40.0;
        double totalHours = timeInHours + timeInMinutes / 60;
        double kilometersPerHour = kilometers / totalHours;

        System.out.println(kilometersPerHour + " kilometers/hour");
    }
}