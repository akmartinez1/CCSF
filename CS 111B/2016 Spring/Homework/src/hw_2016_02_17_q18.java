/**
 * Created by alanmartinez on 2/16/16.
 */

import java.util.Scanner;

public class hw_2016_02_17_q18 {

    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);
        int userInput=0;

        while(userInput>=0) {
            System.out.print("Please enter a number:  ");
            userInput = scan.nextInt();
        }

        System.out.println("\n" + userInput);
    }
}
