public class ConditionalFun
{
    public static void main(String[] args) {
        int age = 15;

        if (age <= 16) {
            System.out.println("You are a minor.");

            if (age >= 13) {
                System.out.println("Teenage years are tough!");
            }

            System.out.println("Ah, youth!");
        } else {
            System.out.println("You can drive.");

            if (age < 18) {
                System.out.println("You cannot vote.");
            } else {
                System.out.println("You can vote.");
            }

            System.out.println("You should learn about current events so you can prepare to vote!");

            if (age >= 21) {
                System.out.println("You can legally consume alcohol.");
            }
            if(age >= 25) {
                System.out.println("You can rent a car.");
            }

            if (age >= 30 && age < 40) {
                System.out.println("Welcome to your 30s!");
            } else if (age >= 40 && age < 50) {
                System.out.println("Ah the fab forties");
            } else if (age >= 50 && age < 60) {
                System.out.println("50 is the new 20!");
            } else if (age >=60){
                System.out.println("Sizzing 60s.. and beyond!");
            }
            System.out.println("We're all young at heart!");
        }
    }
}
