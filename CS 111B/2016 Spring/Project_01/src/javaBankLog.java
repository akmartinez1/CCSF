/**
 * Created by alanmartinez on 3/3/16.
 */

import java.util.Scanner;

public class javaBankLog {

    public static void main(String[] args){

        // "ui" Usser Input variables
        String uiAccountHolder;
        String uiAccountNumber;
        double uiTransactionAmount;

        System.out.println("Project 01 Bank Account Objects\n");
        System.out.println("This program creates a simple bank acount object and processes deposits and withdrawals.\n");

        Scanner scan = new Scanner(System.in);

        System.out.println("Account Creation\n\n");

        System.out.println("Please enter the Account Holder's Name");
        uiAccountHolder=scan.nextLine();

        System.out.println("\n\nPlease enter an Account Number");
        uiAccountNumber=scan.nextLine();

        System.out.println("\n\nPlease enter an Opening Deposit");
        uiTransactionAmount = Double.parseDouble(scan.nextLine());

        BankAccount account1 = new BankAccount(uiAccountHolder, uiAccountNumber, uiTransactionAmount);

        System.out.println(account1);

    }

}
