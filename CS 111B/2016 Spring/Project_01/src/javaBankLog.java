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
        int uiMenuEntry;
        boolean exitProgram=false;

        System.out.println("Project 01 Bank Account Objects\n");
        System.out.println("This program creates a simple bank acount object and processes deposits and withdrawals.\n");

        Scanner scan = new Scanner(System.in);

        System.out.println("Account Creation\n\n");

        System.out.println("Please enter the Account Holder's Name");
        uiAccountHolder=scan.nextLine();

        System.out.println("\n\nPlease enter an Account Number");
        uiAccountNumber=scan.nextLine();

        System.out.println("\n\nPlease enter an Opening Deposit");

        //uiTransactionAmount = scan.nextDouble();
        uiTransactionAmount = Double.parseDouble(scan.nextLine());

        BankAccount account1 = new BankAccount(uiAccountHolder, uiAccountNumber, uiTransactionAmount);

        //Remove this line after project completion
        System.out.println(account1);


        System.out.println("\nThank you for creating an account.");

        do{
            System.out.println("Please select a transaction from the following menu:");

            System.out.println("Enter 1 for Deposit");
            System.out.println("Enter 2 for Withdrawal");
            System.out.println("Enter 3 for Interest");
            System.out.println("Enter 4 for Account Details Menu");
            System.out.println("\nEnter 9 to Exit Program");

            uiMenuEntry=scan.nextInt();

            account1.

            if(uiMenuEntry==1){
                enterDeposit();
            }
            else if(uiMenuEntry==2){
                enterWithdrawal();
            }
            else if(uiMenuEntry==3){
                enterInterest();
            }
            else if(uiMenuEntry==4){
                accountDetailsMenu();
            }
            else if(uiMenuEntry==9){
                exitProgram=true;
            }
            else{exitProgram=false;}

        }while(exitProgram==false);
    }

    public static void enterDeposit(){
        double deposit;
        Scanner scan=new Scanner(System.in);

        System.out.println("Deposit Transaction\n");
        System.out.println("\nPlease enter the amunt you would like to deposit");
        deposit=scan.nextDouble();

        account1

    }

    public static void enterWithdrawal(){}

    public static void enterInterest(){}

    public static void accountDetailsMenu(){}



}
