Programming Exercise A

Implement a static double for Rectangle class, called yardsAvail, as discussed 
in class, which indicates how many yards of perimeter are available for new 
rectangles. 

Make sure your constructors decrease this variable when they create new 
rectangles.

Create a static member function Rectangle::setYards(double y) which sets 
yardsAvail. Call this function to initialize yardsAvail before you create any 
Rectangle objects.

Create a new class TestRect which is a friend class of Rectangle.  Implement a 
member function called TestRect::tester, as discussed in class, which makes 
sure that both length and width are > 0.

Implement another member function in TestRect called 
TestRect::enoughYards(double w, double l) which checks to see if there are 
enough yards left to implement a new rectangle of width w and length l and 
returns a bool to indicate. It should not create the rectangle, just check to 
see if there are enough yards available.