/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 111B Java Programming Fundamentals
Tuesday and Thursday 1:10pm to 3:00pm
C. Conner
Batmale Hall, Room 413

Home Work Assignment 1
January 27, 2015

Extended to January 29, 2015

Fish.java

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

//********************************************************************
// Fish.java Author: Alan K. Martinez
//
// Demonstrates basic drawing methods and the use of color.
//********************************************************************

import javax.swing.JApplet;
import java.awt.*;

public class Fish extends JApplet {
 //-----------------------------------------------------------------
    // Draws a .
    //-----------------------------------------------------------------

    public void paint(Graphics page) {
                
        //Sets background color to Cyan.  Using fillRect because
        //of current brownser incompatibility with javax.swing.
        page.setColor(Color.cyan);
        page.fillRect(0, 0, 600,600);
        
        //Draw Top Arc of Fish
        page.setColor(Color.black);
        page.drawArc(100,200,300,200,0,150);
        
        //Draw Bottom Arc of Fish
        page.drawArc(100,100,300,200,210,150);
        
        //Draw vertical line to finish tail
        page.drawLine(400,210,400,290);
        
        //Draw eyes
        page.setColor(Color.blue);
        page.fillOval(160,230,15,15);
        
               
        //Write my name in the bottom left corner
        page.setColor(Color.magenta);
        page.drawString("Alan K. Martinez", 5,275);
        
    }
}
