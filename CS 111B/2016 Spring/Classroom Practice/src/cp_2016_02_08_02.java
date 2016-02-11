/**
 * Created by alanmartinez on 2/8/16.
 */

import java.util.Scanner;

public class cp_2016_02_08_02
{
    public static void main (String[] args)
    {
        System.out.println("This program counts the number of Odd, Even, and 0's in the digits.\n\n");

        String userInput;

        int numberOfDigits=0;

        int digitLoop=numberOfDigits;

        Scanner scan = new Scanner(System.in);

        System.out.print("Please enter a number to evaluate: ");

        userInput = scan.nextLine();

        numberOfDigits = userInput.length();

        while(digitLoop>0)
        {
            if(numberOfDigits==0)
            {
                System.out.println("You did not enter a number.");
            }
            else if (userInput.charAt(digitLoop)%2==0)
            {

            }
        }




    }
}
