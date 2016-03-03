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
    public void setName(String newName){name=newName;}

    public void setIdentification(String newIdentification){identification=newIdentification;}

    public void setEmployeeAddress(Address newEmployeeAddress){employeeAddress=newEmployeeAddress;}

    public void setPhoneNumber(String newPhoneNumber){phoneNumber=newPhoneNumber;}

    //toString
    public String toString(){
        String s="Employee:\t\t" + name + "\n" +
                "ID Number:\t\t" + identification + "\n" +
                "Address:\t\t" + employeeAddress + "\n" +
                "Phone:\t\t" + phoneNumber + "\n";

        return s;
    }
}
