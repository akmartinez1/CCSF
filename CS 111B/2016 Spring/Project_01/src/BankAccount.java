/**
 * Created by alanmartinez on 3/3/16.
 */

import java.util.Scanner;

public class BankAccount {

    //Instance Variables
    private String accountHolder;
    private String accountNumber;
    private double accountBalance;
    private double interestPercentage;

    //Constructors
    public BankAccount(String theAccountHolder, String theAccountNumber, double
            theOpeningDeposit){

        if(theAccountHolder.isEmpty()){
            accountHolder="Default Account Holder";
        }
        else{accountHolder=theAccountHolder;}

        if(theAccountNumber.isEmpty()){
            accountNumber="Default Account Number";
        }
        else{accountNumber=theAccountNumber;}

        if(theOpeningDeposit<0){
            accountBalance=0;
        }
        else{accountBalance=theOpeningDeposit;}

        interestPercentage=0;

    }

    //Modifiers
    public void setAccountHolder(String newAccountHolder){accountHolder=newAccountHolder;}

    public void setAccountNumber(String newAccountNumber){
        accountNumber=newAccountNumber;
    }

    public void setAccountBalance(double openingDeposit){
        accountBalance=openingDeposit;
    }

    public void setInterestPercent(double newInterestPercentage){
        if(newInterestPercentage<0){
            interestPercentage=0;
        }
        else{interestPercentage=newInterestPercentage;}
    }

    //Accessors
    public String getAccountHolder(){return accountHolder;}

    public String getAccountNumber(){return accountNumber;}

    public double getAccountBalance(){return accountBalance;}

    public double getInaterestPercent(){return interestPercentage;}

    //toString
    public String toString(){
        String s="\nAccount Holder:\t\t" + accountHolder + "\n" +
                "Account Number:\t\t" + accountNumber + "\n" +
                "Account Balance:\t" + accountBalance + "\n" +
                "Interest Rate:\t\t" + interestPercentage + "\n\n";

        return s;
    }
}
