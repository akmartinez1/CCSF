/**
 * Created by Alan K. Martinez on 2/26/2015.
 */

import javax.swing.*;
import java.awt.*;


public class Skyline
{
    //-----------------------------------------------------------------
    //  Presents a collection of rectangles for buildings in a city skyline.
    //  A rectangle is just a square with two parallel sides that are longer than its perpendicular sides.
    //-----------------------------------------------------------------
    public static void main (String[] args)
    {
        JFrame frame = new JFrame ("Skyline");
        frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);

        frame.getContentPane().add(new SkylinePanel());

        frame.pack();
        frame.setVisible(true);
    }
}
