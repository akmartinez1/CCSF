//********************************************************************
//  LabelDemo.java       Author: Alan K. Martinez
//
//  Demonstrates the use of image icons in labels.
//********************************************************************

/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 111B Java Programming Fundamentals
Tuesday and Thursday 1:10pm to 3:00pm
C. Conner
Batmale Hall, Room 413

Home Work Assignment 2
February 10, 2015

LabelDemo2.java

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-
*/


import java.awt.*;
import javax.swing.*;

public class LabelDemo2
{
   //-----------------------------------------------------------------
   //  Creates and displays the primary application frame.
   //-----------------------------------------------------------------
   public static void main (String[] args)
   {
      JFrame frame = new JFrame ("Label Demo 2");
      frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);

      ImageIcon icon = new ImageIcon ("Alan.jpg");

      JLabel label1, label2, label3, label4;

      label1 = new JLabel ("Alan Left", icon, SwingConstants.CENTER);
      label1.setHorizontalTextPosition (SwingConstants.RIGHT);
      label1.setVerticalTextPosition (SwingConstants.BOTTOM);

      label2 = new JLabel ("Alan Right", icon, SwingConstants.CENTER);
      label2.setHorizontalTextPosition (SwingConstants.LEFT);
      label2.setVerticalTextPosition (SwingConstants.BOTTOM);
      
      label3 = new JLabel ("Alan Above", icon, SwingConstants.CENTER);
      label3.setHorizontalTextPosition (SwingConstants.CENTER);
      label3.setVerticalTextPosition (SwingConstants.BOTTOM);
      
      label4 = new JLabel ("Alan Below", icon, SwingConstants.CENTER);
      label4.setHorizontalTextPosition (SwingConstants.CENTER);
      label4.setVerticalTextPosition (SwingConstants.TOP);
      
      JPanel panel = new JPanel();
      panel.setBackground (Color.cyan);
      panel.setPreferredSize (new Dimension (200, 250));
      panel.add (label1);
      panel.add (label3);
      panel.add (label2);
      panel.add (label4);

      frame.getContentPane().add(panel);
      frame.pack();
      frame.setVisible(true);
   }
}
