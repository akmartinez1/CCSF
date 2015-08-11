/**
 * Created by Alan on 2/26/2015.
 */

import javax.swing.*;
import java.awt.*;

public class SkylinePanel extends JPanel
{
    private Building building1, building2, building3, building4, building5;

    //-----------------------------------------------------------------
    //  Constructor: Creates five Building objects.
    //-----------------------------------------------------------------
    public SkylinePanel()
    {
        building1 = new Building (30, Color.black, 70, 35);
        building2 = new Building (50, Color.black, 30, 20);
        building3 = new Building (100, Color.black, 60, 85);
        building4 = new Building (45, Color.black, 170, 30);
        building5 = new Building (60, Color.black, 200, 60);

        setPreferredSize (new Dimension(300, 200));
        setBackground (Color.orange);
    }

    //-----------------------------------------------------------------
    //  Draws this panel by requesting that each Building draw itself.
    //-----------------------------------------------------------------
    public void paintComponent (Graphics page)
    {
        super.paintComponent(page);

        building1.draw(page);
        building2.draw(page);
        building3.draw(page);
        building4.draw(page);
        building5.draw(page);
    }
}
