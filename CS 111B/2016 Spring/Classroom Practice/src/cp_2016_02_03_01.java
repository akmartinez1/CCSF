/**
 * Created by alanmartinez on 2/3/16.
 */

import java.util.Scanner;

public class cp_2016_02_03_01
{
    public static void main(String[] args)
    {
        int userInput;
        Scanner scan = new Scanner(System.in);

        System.out.println ("This is a program that checks if a number is odd or even.\n\n");

        System.out.print ("Please enter an integer number:  ");
        userInput = scan.nextInt();

        System.out.println ("\n\nThe number " + userInput + " is " + (userInput%2>0?"odd.":"even."));
    }
}
