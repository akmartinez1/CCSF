import java.util.Random;

/**
 * Created by Alan K. Martinez on 3/26/2015.
 */

import java.util.*;

public class e20150326_2dArray
{
    public static void main(String[] args)
    {
        int[][] table = {{1, 2, 3, 4}, {5, 6, 7, 8}};
        //int[][] table = new int[2][4];
        int row_sum = 0;
        int col_sum = 0;

        initArray(table);
    }

    public static void initArray(int [][] x)
    {
        int row_sum = 0;
        int col_sum = 0;

        Random element=new Random();

        for (int row = 0; row < x.length; row++) {
            for (int col = 0; col < x[row].length; col++) {
                x[row][col] = element.nextInt(10);
            }
        }

        for (int row = 0; row < x.length; row++)
        {
            for (int col = 0; col < x[row].length; col++)
            {
                System.out.print(x[row][col] + "\t");
            }

            System.out.println();
        }

        for (int row = 0; row < x.length; row++)
        {
            for (int col = 0; col < x[row].length; col++) {
                row_sum = row_sum + x[row][col];
                //row_sum+=table[row][col];

            }
            System.out.println("row " + row + ": " + row_sum);
            row_sum = 0;
        }

        for (int col = 0; col < x[0].length; col++) {
            for (int row = 0; row < x.length; row++) {
                col_sum += x[row][col];
            }

            System.out.println("col: " + col + ": " + col_sum);
            col_sum = 0;
        }

    }
}

