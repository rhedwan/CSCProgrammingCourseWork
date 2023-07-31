public class Exercises1_10{
    public static void main(String[] arg){
        double kilometers = 14;
        double mile = kilometers / 1.6;
        double timeInMinutes = 45;
        double timeInSeconds = 30;
        double timeInHours = timeInMinutes / 60.0 + timeInSeconds / 3600;
        double milesPerHour = mile / timeInHours;
//        System.out.println(timeInHours);
        System.out.println(milesPerHour + " miles/hour");
    }
}