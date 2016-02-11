/**
 * Created by alanmartinez on 2/8/16.
 */

import java.util.Scanner;

public class cp_2016_02_08_01
{
    public static void main(String[] args)
    {
        System.out.println("Enter as many number as o like to find the sum.  Enter 0 to quit.");

        int userInput=-1;
        int runningTotal=0;

        Scanner scan = new Scanner(System.in);

        while (userInput!=0)
        {
            System.out.println("Your current total is " + runningTotal);

            userInput=scan.nextInt();
            runningTotal +=userInput;

            System.out.println("Your new total is " + runningTotal);

        }

        System.out.println("You entered 0 to end the program");
        System.out.println("Your current total is " + runningTotal);

    }


}
