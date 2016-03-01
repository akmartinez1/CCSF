/**
 * Created by alanmartinez on 2/29/16.
 */
public class Address {

    //Instance Variables
    private String street;
    private String city;
    private String state;
    private String zipCode;

    //Constructors
    public Address(String theStreet, String theCity, String theState, String theZipCode){
        street=theStreet;
        city=theCity;
        state=theState;
        zipCode=theZipCode;
    }

    //Accessors
    public String getStreet(){return street;}

    public String getCity(){return city;}

    public String getState(){return state;}

    public String getZipCode(){return zipCode;}

    //Modifiers
    public void setStreet(String newStreet){
        street=newStreet;
    }

    public void setCity(String newCity){
        city=newCity;
    }

    public void setState(String newState){
        state=newState;
    }

    public void setZipCode(String newZipCode){
        zipCode=newZipCode;
    }


    //toString
    public String toString(){
        String s="Street:\t\t" + street + "\n" +
                "City:\t\t" + city + "\n" +
                "State:\t\t" + state + "\n" +
                "Zip Code:\t" + zipCode + "\n";
        return s;

    }
}
