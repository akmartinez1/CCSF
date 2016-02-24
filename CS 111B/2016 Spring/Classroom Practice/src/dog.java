import sun.reflect.generics.scope.ConstructorScope;

/**
 * Created by alanmartinez on 2/22/16.
 */
public class dog {

    // Instance Variables
    private String name;
    private String breed;
    private int age;
    private boolean fourLegged;

    // ConstructorScope
    public dog(String theName, String theBreed, int theAge, boolean theFourLegged){
        name=theName;
        breed=theBreed;
        age=theAge;
        fourLegged=theFourLegged;
    }

    // Getters
    public String getName(){
        return name;
    }

    public String getBreed(){
        return breed;
    }

    public int getAge(){
        return age;
    }

    public boolean isFourLegged(){
        return fourLegged;
    }

    //Setters
    public void setName(String theNewName){
        name = theNewName;
    }

    public void setBreed(String theNewBreed){
        breed=theNewBreed;
    }

    public void setAge(int theNewAge){
        if(theNewAge>0){
            age=theNewAge;
        }
    }

    public void setIsFourLegged(boolean )



    // toString
    public String toString(){
        String s = name +
                "\n\tBreed: "+breed+
                "\n\tAge: "+age+
                "\n\tFour Limbs: "+fourLegged;
    }
}
