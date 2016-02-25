/**
 * Created by alanmartinez on 2/24/16.
 */


public class AudioProducts {

    //Instance Variables
    private String title;
    private double price;
    private int duration;

    //Constructors
    public AudioProducts (String theTitle, double thePrice, int theDuration){
        title=theTitle;
        price=thePrice;
        duration=theDuration;
    }

    //Getters
    public String getTitle(){
        return title;
    }

    public double getPrice(){
        return price;
    }

    public int getDuration(){
        return duration;
    }

    //Setters
    public void setTitle(String newTitle){
        title=newTitle;
    }

    public void setPrice(double newPrice){
        if(newPrice>0) {
            price = newPrice;
        }
        else{
            System.out.println("Products cannot be set with a negative value.");

            //setPrice method check will not prompt for correction and will disregard invalid entry.
        }
    }

    public void setDuration(int newDuration){
        if(newDuration>0){
            duration=newDuration;
        }
        else{
            System.out.println("Audio duration cannot be set with a negative value");

            //setDuration method check will not prompt for correction and will disregard invalid entry.
        }
    }

    //toString
    public String toString(){
        String s="Title:\t\t" + title +
                "Price:\n\t\t" + price +
                "Duration:\n\t\t" + duration;
        return s;

    }
}
