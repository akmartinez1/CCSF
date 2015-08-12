/**
 * Created by Alan on 3/2/2015.
 */

import java.awt.*;

public class Building
{
    private int x, y, width, height;
    private Color color;

    //-----------------------------------------------------------------
    //  Constructor: Sets up this circle with the specified values.
    //-----------------------------------------------------------------
    public Building (Color shade, int upperX, int upperY, int windows)
    {
        color = shade;
        x = upperX;
        y = upperY;
        // numWindows = windows;
    }

    //-----------------------------------------------------------------
    //  Draws this circle in the specified graphics context.
    //-----------------------------------------------------------------
    public void draw (Graphics page)
    {
        page.setColor (color);
        page.fillRect (x, y, width, height);
        page.setColor (Color.black);
        //for.....
        //page.fillRect(....)
    }

    //-----------------------------------------------------------------
    //  Diameter mutator.
    //-----------------------------------------------------------------
    public void setDiameter (int size)
    {
        //diameter = size;
    }

    //-----------------------------------------------------------------
    //  Color mutator.
    //-----------------------------------------------------------------
    public void setColor (Color shade)
    {
        color = shade;
    }

    //-----------------------------------------------------------------
    //  X mutator.
    //-----------------------------------------------------------------
    public void setX (int upperX)
    {
        x = upperX;
    }


    //-----------------------------------------------------------------
    //  Y mutator.
    //-----------------------------------------------------------------
    public void setY (int upperY)
    {
        y = upperY;
    }

    //-----------------------------------------------------------------
    //  Diameter accessor.
    //-----------------------------------------------------------------
    public int getDiameter ()
    {
        return;
        //return diameter;
    }

    //-----------------------------------------------------------------
    //  Color accessor.
    //-----------------------------------------------------------------
    public Color getColor ()
    {
        return color;
    }

    //-----------------------------------------------------------------
    //  X accessor.
    //-----------------------------------------------------------------
    public int getX ()
    {
        return x;
    }

    //-----------------------------------------------------------------
    //  Y accessor.
    //-----------------------------------------------------------------
    public int getY ()
    {
        return y;
    }
}
