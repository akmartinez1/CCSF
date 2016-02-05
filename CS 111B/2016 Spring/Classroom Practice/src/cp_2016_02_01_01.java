import java.util.Scanner;

/**
 * Created by alanmartinez on 2/4/16.
 */

import java.util.Scanner;

public class cp_2016_02_01_01 {

    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        int userIncome;
        int lengthAtEmployer;
        boolean coSignerRequired = false;

        System.out.println("This is a simple program using conditionals.");
        System.out.println("This program determins a loan eligibility based on income conditions.\n");

        System.out.print("What is your annual income:  ");
        userIncome = scan.nextInt();

        System.out.print("\n\nHow many years have you been with your current employer:  ");
        lengthAtEmployer = scan.nextInt();

        System.out.println("\n\n");

        if (userIncome>=100000)
        {
            System.out.println("Your loan has been approved without a co-signer.");
        }
        else if (userIncome>=50000 && lengthAtEmployer>=2)
        {
            System.out.println("Your loan has been approved without a co-signer.");
        }
        else
        {
            System.out.println("Your loan will require a co-signer.");
        }
    }
}
