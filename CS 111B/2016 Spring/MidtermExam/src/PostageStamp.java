/**
 * Created by alanmartinez on 3/23/16.
 */
public class PostageStamp {

    private double cost;
    private String description;


    public PostageStamp(double theCost, String theDescription){


        cost = theCost;
        description = theDescription;
    }

    public void setCost(double newCost){
        if(newCost<=0){
            cost=0;
        }
        else{
            cost=newCost;
        }
    }

    public void setDescription(String newDescription){
        if(newDescription.isEmpty()){
            description=description; //No Change in Description
        }
        else{
            description=newDescription;
        }
    }

    public void getCollectorStatus(){
        System.out.println("Reserved for Collector and Circulation Status");
    }

    public double getCost(){
        return cost;
    }

    public String getDescription(){
        return description;
    }

    public String toString(){
        String s="\nStamp Price:\t\t\t" + cost + "\n" +
                "Stamp Description:\t\t\t" + description + "\n";

        return s;
    }

}



