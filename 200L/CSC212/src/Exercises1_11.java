public class Exercises1_11 {
    public static void main(String[] args) {
        double totalSecondsInAYear = 365 * 24 * 3600;
        double birthsPerSecond = 1.0 /7;
        double deathsPerSecond = 1.0/ 13;
        double immigrantPerSecond = 1.0/ 45;
        double feasibleGrowthRate = birthsPerSecond -deathsPerSecond+ immigrantPerSecond;

        double currentPopulation = 312032486;
        currentPopulation = currentPopulation +  (totalSecondsInAYear * feasibleGrowthRate);
        System.out.println(currentPopulation);

    }
}
