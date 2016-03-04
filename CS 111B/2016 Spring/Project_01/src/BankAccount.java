/**
 * Created by alanmartinez on 3/3/16.
 */

import java.util.Scanner;

public class BankAccount {

    //Instance Variables
    private String accountHolder;
    private String accountNumber;
    private double accountBalance;


    //Constructors
    public BankAccount(String theAccountHolder, String theAccountNumber, double
            theOpeningDeposit){

        Scanner scan = new Scanner(System.in);

        //Error checking for blank or empty Account Holder
        while(theAccountHolder.isEmpty()){
            //Unsure how to prevent any number of blank spaces for error correction.
            System.out.println("\n\nThe Account Holder name cannot be blank.");
            System.out.println("Please re-enter the Account Holders name:");

            theAccountHolder=scan.nextLine();
        }

        //Error checking for blank or empty Account Number
        while(theAccountNumber.isEmpty()){
            //Unsure how to prevent any number of blank spaces for error correction.
            System.out.println("\n\nThe Account Number cannot be blank.");
            System.out.println("Please re-enter the Account Holders name:");

            theAccountNumber=scan.nextLine();
        }

        //Error checking and resolving if a negative number is entered for an Opening Balance.
        while(theOpeningDeposit<0){

            System.out.println("\n\nThe opening deposit must be $0.00 or greater.");
            System.out.println("Please re-enter an amount for the opening deposit:  ");

            theOpeningDeposit = Double.parseDouble(scan.nextLine());
        }

        accountHolder=theAccountHolder;
        accountNumber=theAccountNumber;
        accountBalance=theOpeningDeposit;

    }


    //Modifiers
    public void setAccountHolder(String newAccountHolder){accountHolder=newAccountHolder;}

    public void setAccountNumber(String newAccountNumber){
        accountNumber=newAccountNumber;
    }

    public void setAccountBalance(double openingDeposit){
        accountBalance=openingDeposit;
    }


    //Accessors
    public String getAccountHolder(){return accountHolder;}

    public String getAccountNumber(){return accountNumber;}

    public double getAccountBalance(){return accountBalance;}

    //toString
    public String toString(){
        String s="Account Holder:\t\t" + accountHolder + "\n" +
                "Account Number:\t\t" + accountNumber + "\n" +
                "Account Balance:\t" + accountBalance + "\n";

        return s;
    }
}
