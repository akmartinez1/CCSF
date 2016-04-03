/**
 * Created by alanmartinez on 3/23/16.
 */

import java.util.*;

public class isPositiveAndEven {



    public static void main(String[] args){

        Scanner scan =  new Scanner(System.in);

        int uiInteger;
        boolean passedPositiveEvenTest=false;

        System.out.println("Please enter a number to test if it is a Positive and Even Integer:  ");
        uiInteger=scan.nextInt();

        if(uiInteger>0&&(uiInteger%2)==0){
            System.out.println("\n\nThe number " + uiInteger + " IS a Positive and Even Integer");
        }
        else {
            System.out.println("\n\nThe number " + uiInteger + " IS NOT a Positive and Even Integer");
        }

    }
}
