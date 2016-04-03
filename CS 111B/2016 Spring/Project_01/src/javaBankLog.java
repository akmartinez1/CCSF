/**
 * Created by alanmartinez on 3/3/16.
 */

import java.util.Scanner;

public class javaBankLog {

    public static void main(String[] args) {

        // "ui" User Input variables
        String uiAccountHolder = "New Account";
        String uiAccountNumber = "New Account";
        String transactionDescription = "New Account";
        double uiTransactionAmount = 0;
        int uiMenuEntry;
        boolean exitProgram = false;
        boolean veriedTransaction;


        System.out.println("Project 01 Bank Account Objects\n");
        System.out.println("This program creates a simple bank acount object and processes deposits and withdrawals.\n");

        Scanner scan = new Scanner(System.in);

        System.out.println("Account Creation\n");

        System.out.println("Please enter the Account Holder's Name");
        uiAccountHolder = scan.nextLine();

        System.out.println("\nPlease enter an Account Number");
        uiAccountNumber = scan.nextLine();

        System.out.println("\nPlease enter an Opening Deposit");

        //uiTransactionAmount = scan.nextDouble();
        uiTransactionAmount = Double.parseDouble(scan.nextLine());

        BankAccount account1 = new BankAccount(uiAccountHolder, uiAccountNumber, uiTransactionAmount);

        //Remove this line after project completion
        System.out.println(account1);


        System.out.println("Thank you for creating an account.");

        do{
            System.out.println(account1);
            exitProgram=mainMenu(account1);
        }while(exitProgram==false);

    }

    public static boolean mainMenu(BankAccount account1){
        int uiMenuEntry;
        boolean exitProgram=false;
        Scanner scan=new Scanner(System.in);

        System.out.println("Please select a transaction from the following menu:");

        System.out.println("Enter 1 for Deposit");
        System.out.println("Enter 2 for Withdrawal");
        System.out.println("Enter 3 for Interest");
        System.out.println("Enter 4 for Account Owner");
        System.out.println("Enter 5 for Account Number");
        System.out.println("\nEnter 9 to Exit Program");

        uiMenuEntry = scan.nextInt();

        if(uiMenuEntry==1){
            depositTransaction(account1);
        } else if (uiMenuEntry == 2) {
            withdrawalTransaction(account1);
        } else if (uiMenuEntry == 3) {
            interestAccrued(account1);
        }
        else if(uiMenuEntry==4){
            changeAccountHolder(account1);
        }
        else if(uiMenuEntry==5){
            changeAccountNumber(account1);
        }
        else if(uiMenuEntry==9){
            exitProgram=true;
        }
        else{exitProgram=false;}

        return exitProgram;
    }

    public static void depositTransaction(BankAccount account1){
        System.out.println("\nDeposit Transaction\n");

        Scanner scan = new Scanner(System.in);
        Double uiTransactionAmount;
        int uiTransactionMenu;
        boolean isTransactionCorrect;

        System.out.println("Your current balance is:\t\t" + account1.getAccountBalance());
        System.out.println("\nPlease enter the amount you would like to deposit:");
        uiTransactionAmount=Double.parseDouble(scan.nextLine());


        System.out.println("\n\nYour current balance is:\t\t" + account1.getAccountBalance());
        System.out.println("Your Deposit is:\t\t\t\t" + uiTransactionAmount);
        System.out.println("Your new balance will be:\t\t" + (account1.getAccountBalance()+uiTransactionAmount));

        isTransactionCorrect=verifyTransaction();

        if (isTransactionCorrect == true) {
            account1.setAccountBalance(account1.getAccountBalance()+uiTransactionAmount);
        }
        else;


    }

    public static void withdrawalTransaction(BankAccount account1){
        System.out.println("Withdrawal Transaction\n");

        Scanner scan = new Scanner(System.in);
        Double uiTransactionAmount;
        int uiTransactionMenu;
        boolean isTransactionCorrect;

        System.out.println("Your current balance is:\t\t" + account1.getAccountBalance());
        System.out.println("\nPlease enter the amount you would like to withdraw:");
        uiTransactionAmount=Double.parseDouble(scan.nextLine());


        System.out.println("\n\nYour current balance is:\t\t" + account1.getAccountBalance());
        System.out.println("Your Withdrawal is:\t\t\t\t" + uiTransactionAmount);
        System.out.println("Your new balance will be:\t\t" + (account1.getAccountBalance()-uiTransactionAmount));

        isTransactionCorrect=verifyTransaction();

        if (isTransactionCorrect == true) {
            account1.setAccountBalance(account1.getAccountBalance()-uiTransactionAmount);
        }
        else;


    }

    public static void interestAccrued(BankAccount account1){
        System.out.println("\nInterest Accrued Transaction\n");

        Scanner scan = new Scanner(System.in);
        Double uiTransactionAmount;
        int uiTransactionMenu;
        boolean isTransactionCorrect;

        System.out.println("Your current balance is:\t\t" + account1.getAccountBalance());
        System.out.println("\nPlease enter the Interest Rate Accrued you would like to enter:");
        uiTransactionAmount=Double.parseDouble(scan.nextLine());


        System.out.println("\n\nYour current balance is:\t\t" + account1.getAccountBalance());
        System.out.println("The Interest Rate entered is:\t" + uiTransactionAmount + " Percent (" +
                (uiTransactionAmount*.01) + ")");
        System.out.println("Interest Accured Amount is:\t\t" + (account1.getAccountBalance()*
                        (uiTransactionAmount*0.01)));
        System.out.println("Your new balance will be:\t\t" + (account1.getAccountBalance()+(account1.getAccountBalance()*
                (uiTransactionAmount*0.01))));

        isTransactionCorrect=verifyTransaction();

        if (isTransactionCorrect == true) {
            account1.setAccountBalance(account1.getAccountBalance()+uiTransactionAmount);
            account1.setInterestPercent(uiTransactionAmount);
        }
        else;


    }

    public static void changeAccountHolder(BankAccount account1){
        System.out.println("\nChangae Account Holder\n");

        Scanner scan = new Scanner(System.in);
        String newAccountHolder;
        int uiTransactionMenu;
        boolean isTransactionCorrect;

        System.out.println("The current account owner is:\t\t" + account1.getAccountHolder());
        System.out.println("\nPlease enter the new account owner:");
        newAccountHolder=scan.nextLine();


        System.out.println("\n\nThe current account owner is:\t\t" + account1.getAccountHolder());
        System.out.println("The new account owner is:\t\t\t" + newAccountHolder);

        isTransactionCorrect=verifyTransaction();

        if (isTransactionCorrect == true) {
            account1.setAccountHolder(newAccountHolder);
        }
        else;
    }

    public static void changeAccountNumber(BankAccount account1){
        System.out.println("\nChangae Account Number\n");

        Scanner scan = new Scanner(System.in);
        String newAccountNumber;
        int uiTransactionMenu;
        boolean isTransactionCorrect;

        System.out.println("The current account number is:\t\t" + account1.getAccountNumber());
        System.out.println("\nPlease enter the new account number:");
        newAccountNumber=scan.nextLine();


        System.out.println("\n\nThe current account number is:\t\t" + account1.getAccountNumber());
        System.out.println("The new account number is:\t\t\t" + newAccountNumber);

        isTransactionCorrect=verifyTransaction();

        if (isTransactionCorrect == true) {
            account1.setAccountNumber(newAccountNumber);
        }
        else;
    }

    public static boolean verifyTransaction(){
        boolean transActionStatus=false;
        int uiMenuEntry;
        Scanner scan = new Scanner(System.in);

        do {
            System.out.println("\n\nIs this transaction correct?");
            System.out.println("Enter 1 for Yes, 9 for No and to return to the Main Menu");
            uiMenuEntry = scan.nextInt();

            if (uiMenuEntry == 1) {transActionStatus=true;}
            else if(uiMenuEntry==9){transActionStatus=false;}
            else;

        }while(uiMenuEntry>1&&uiMenuEntry<9);

        return transActionStatus;
    }

}


