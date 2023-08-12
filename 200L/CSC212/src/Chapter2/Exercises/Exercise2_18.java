package Chapter2.Exercises;

public class Exercise2_18 {
    public static void main(String[] args){
        System.out.println("a\tb\t\tpow(a, b)");
        for (int i = 1; i < 6; i++) {
            int b = i + 1;
            System.out.println(i + "\t" + b + "\t \t" + (int)Math.pow(i, b));
        }
    }
}
