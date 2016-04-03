/**
 * Created by alanmartinez on 3/9/16.
 */

import java.util.*;

public class cp_2016_03_09_01 {

    public static void main(String[] args){

        ArrayList<String> words = new ArrayList<String>();
        Scanner scan = new Scanner(System.in);
        String uiWord="";

        System.out.println(words.size());
        System.out.println("Enter a word to add to the Array List.");
        System.out.println("Enter 'stop' to end.");

        do{
            uiWord=scan.nextLine();

            if(!words.contains(uiWord)){
                words.add(uiWord);
            }
            else;

            System.out.println(words);

        }while(!words.contains("stop"));

        System.out.println(words);

    }



}
