/**
 * Created by alanmartinez on 2/16/16.
 */

import java.util.Random;

public class hw_2016_02_17_q17 {


    public static void main(String[] args){

        Random coin = new Random();

        for (int coinToss=0; coinToss<50; coinToss++){
            int coinLand = coin.nextInt(2);

            if(coinLand==0){
                System.out.println("No");
            }
            else{
                System.out.println("Yes");
            }

        }
    }
}
