package Chapter2;

public class Literals {
    public static void main(String[] args) {
        int value = 0B111;
        int valueOctal = 0111;
        int valueHex = 0x111;
        System.out.println(value);
        System.out.println(valueOctal);
        System.out.println(valueHex);

        System.out.println("1.0 / 3.0 is " + 1.0 / 3.0);
        System.out.println("1.0 / 3.0 is " + 1.0D / 3.0D);
        System.out.println("1.0F / 3.0F is " + 1.0F / 3.0F);
        System.out.println("1.0F / 3.0D is " + 1.0F / 3.0D);
        System.out.println(5.2534e+0);
    }
//    01 => 1
//    02 => 2
}
