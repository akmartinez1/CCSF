/**
 * Created by alanmartinez on 2/4/16.
 */

public class hw_2016_02_01_q24 {
    final static int TWENTIES = 20;
    final static int TENS = 10;
    final static int FIVES = 5;
    final static int ONES = 1;

    public static void main(String[] args) {
        int numTwenties, numTens, numFives, numOnes, remainingValue;
        int numDollars = 54, billCount = 0;
        String denomination[] = {"Twenties", "Tens", "Fives", "Ones"};
        int billValue[] = {20, 10, 5, 1};

        System.out.println("This program calculates the least number of bills that make up the total Dollar amount.");

        System.out.println("\nThe total dollar amount is $" + numDollars);

        remainingValue = numDollars;

        for (int loop = 0; loop < 4; loop++) {
            if (remainingValue < billValue[loop]) {
                System.out.println("There no " + denomination[loop] + " in " + numDollars);

            } else {
                System.out.println("There are " + (remainingValue / billValue[loop]) + " " + denomination[loop] + " in " + numDollars);
                billCount = billCount + (remainingValue / billValue[loop]);
                remainingValue = remainingValue - (billValue[loop] * (remainingValue / billValue[loop]));
            }
        }

        System.out.println("There are " + billCount + " bills in " + numDollars);

    }
}
