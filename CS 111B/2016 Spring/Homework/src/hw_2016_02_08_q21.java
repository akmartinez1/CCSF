/**
 * Created by alanmartinez on 2/7/16.
 */
public class hw_2016_02_08_q21 {
    public static void main(String[] args) {
        int x = 5;

        switch (x) {
            case 3 : x += 1;
            case 4 : x += 2;
            case 5 : x += 3;
            case 6 : x++;
                break;
            case 7 : x += 2;
            case 8 : x--;
            case 9 : x++;
        }
        System.out.println (x);

    }
}
