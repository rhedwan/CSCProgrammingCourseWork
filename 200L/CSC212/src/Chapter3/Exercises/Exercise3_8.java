package Chapter3.Exercises;

public class Exercise3_8 {
    public static void main(String[] args) {
        int number1 = 2;
        int number2 = 3;
        int number3 = 2;
        int temp;
        if(number2 < number1 || number3 < number1){
            if (number2 < number1){
                temp = number1;
                number1 = number2;
                number2 = temp;
            }
            if (number3 < number1){
                temp = number1;
                number1 = number3;
                number3 = temp;
            }
        }
        if (number3 < number2){
            temp = number2;
            number2 = number3;
            number3 = temp;
        }
        System.out.println(number1 + " " + number2 + " " + number3);
    }
}
