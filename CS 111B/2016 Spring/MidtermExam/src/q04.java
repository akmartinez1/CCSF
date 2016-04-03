/**
 * Created by alanmartinez on 3/23/16.
 */
public class q04 {

    public static void main(String[] args){
        int numA = 23, numB = 4;

        int iResult = numA % numB;

        System.out.println(iResult);

        //String text = "I love this class.";

        //String result = text.substring(2, 9);

        //System.out.println(result);

        String text = "I love this class.";

        text.toUpperCase();

        System.out.println(text);

        int x = 10;

        do {

            System.out.println("in here");

            x--;

        } while (x > 0);

        int v = 0;

        for(int i=0; i<5; i++) {

            v += i;

            System.out.println(v);

        }


    }
}
