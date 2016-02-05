/**
 * Created by alanmartinez on 2/4/16.
 */

public class hw_2016_02_01_q23 {
    final static double quarters = 0.25;
    final static double dimes = 0.10;
    final static double nickels = 0.05;
    final static double pennies = 0.01;

    public static void main(String[] args) {
        int numQuarters, numDimes, numNickels, numPennies;
        double totalValue;

        numQuarters = 3;
        numDimes = 4;
        numNickels = 2;
        numPennies = 7;

        System.out.println("This program totals the value of the number of coins.");

        System.out.println("\nThe total number of quarters are " + numQuarters + " for $" + (numQuarters * quarters));

        System.out.println("The total number of dimes are " + numDimes + " for $" + (numDimes * dimes));

        System.out.println("The total number of nickels are " + numNickels + " for $" + (numNickels * nickels));

        System.out.println("The total number of pennies are " + numPennies + " for $" + (numPennies * pennies));

        System.out.println("The total value of all coins together is $" + ((numQuarters * quarters) + (numDimes * dimes)
                + (numNickels * nickels) + (numPennies * pennies)));


    }
}
