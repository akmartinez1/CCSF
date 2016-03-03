/**
 * Created by alanmartinez on 3/3/16.
 */
public class BankAccount {

    //Instance Variables
    private String accountHolder;
    private String accountNumber;
    private float accountBalance;


    //Constructors
    public BankAccount(String theAccountHolder, String theAccountNumber, float theOpeningDeposit){

        if(theOpeningDeposit<0){
            System.out.println("Opening deposit must be a positive amount");
        }
        else{
            accountHolder=theAccountHolder;
            accountNumber=theAccountNumber;
            accountBalance=theOpeningDeposit;
        }
    }

    //Modifiers
    public void setAccountHolder(String newAccountHolder){
        accountHolder=newAccountHolder;
    }

    public void setAccountNumber(String newAccountNumber){
        accountNumber=newAccountNumber;
    }

    public void setAccountBalance(float openingDeposit){
        accountBalance=openingDeposit;
    }


    //Accessors

    //toString
}
