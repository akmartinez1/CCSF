/**
 * Created by alanmartinez on 2/8/16.
 */
public class hw_2016_02_08_q28
{
    public static void main(String[] args)
    {
        int triSidesArray[]={5, 5, 10, 5, 10, 5, 10, 5, 5, 5, 5, 5, 3, 4, 5};
        int side1=0, side2=0, side3=0;
        boolean isoceles = false;



        System.out.println("This program has a method that determins if a triangle is an Isoceles or not.");

        System.out.println("\n");

        for(int triangle=1; triangle<6; triangle++)
        {
            side1=triSidesArray[1*triangle];
            side2=triSidesArray[2*triangle];
            side3=triSidesArray[3*triangle];

            isoceles = isIsoceles (side1, side2, side3);

            System.out.print("Triangle " + triangle + " ");


        }
    }

    static boolean isIsoceles (int side1, int side2, int side3)
    {

    }
}
