/**
 * Created by alanmartinez on 2/4/16.
 */

import java.util.Scanner;

public class cp_2016_01_27_01
{
    public static final int SECONDS_IN_A_MINUTE = 60;
    public static final int SECONDS_IN_AN_HOUR = 3600;
    public static final int SECONDS_IN_A_DAY =  86400;
    public static final int MINUTES_IN_AN_HOUR = 60;
    public static final int MINUTES_IN_A_DAY = 1440;
    public static final int HOURS_IN_A_DAY = 24;

    public static void main (String[] args)
    {
        Scanner scan = new Scanner (System.in);

        int hours;
        int minutes;
        int seconds;
        int totalSeconds;

        System.out.println ("Welcme to the time converter program.");

        System.out.println();

        System.out.print ("Please enter the number of hours:  ");
        hours = scan.nextInt();

        System.out.println();

        System.out.print ("Please enter the number of minutes:  ");
        minutes = scan.nextInt();

        System.out.println();

        System.out.print ("Please enter the number of seconds:  ");
        seconds = scan.nextInt();

        System.out.println();

        totalSeconds = seconds+(minutes*60)+(hours*60*60);

        System.out.println ("The total number of seconds are " + totalSeconds +".");

    }

}
