/**
 * Created by alanmartinez on 2/16/16.
 */

import java.util.Scanner;

public class hw_2016_02_17_q19 {

    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);
        String helloTo;

        for (int greeting=0; greeting<10; greeting++){

            System.out.print("Please enter a name:  ");
            helloTo = scan.nextLine();

            System.out.println("Hello " + helloTo + "\n\n");
        }

    }

}
