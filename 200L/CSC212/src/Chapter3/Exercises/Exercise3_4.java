package Chapter3.Exercises;

public class Exercise3_4 {
    public static void main(String[] args) {
        int randomMonth = (int)(1 +Math.random() * 12);
//        System.out.println(randomMonth);
        if (randomMonth == 1){
            System.out.println("January");
        }else if (randomMonth == 2){
            System.out.println("February");
        }else if (randomMonth == 3){
            System.out.println("March");
        }else if (randomMonth == 4){
            System.out.println("April");
        }else if (randomMonth == 5){
            System.out.println("May");
        }else if (randomMonth == 6){
            System.out.println("June");
        }else if (randomMonth == 7){
            System.out.println("July");
        }else if (randomMonth == 8){
            System.out.println("August");
        }else if (randomMonth == 9){
            System.out.println("September");
        }else if (randomMonth == 10){
            System.out.println("October");
        }else if (randomMonth == 11){
            System.out.println("November");
        }else if (randomMonth == 12){
            System.out.println("December");
        }else{
            System.out.println("Invalid Month");
        }
    }
}
