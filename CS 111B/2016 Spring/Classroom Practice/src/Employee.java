/**
 * Created by alanmartinez on 2/29/16.
 */
public class Employee {

    //Instance Variables
    private String name;
    private String identification;
    private Address employeeAddress;
    private String phoneNumber;

    //Constructors
    public Employee(String theName, String theIdentification, Address theEmployeeAddress, String thePhoneNumber){
        name=theName;
        identification=theIdentification;
        employeeAddress=theEmployeeAddress;
        phoneNumber=thePhoneNumber;
    }

    //Accessors
    public String getName(){return name;}

    public String getIdentification(){return identification;}

    public Address getEmployeeAddress(){return employeeAddress;}

    public String getPhoneNumber(){return phoneNumber;}
    

    //Modifiers

    //toString
}
