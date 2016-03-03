/**
 * Created by alanmartinez on 3/2/16.
 */
public class Book {

    //Instance Variables
    private String title;
    private String author;
    private String publisher;
    private int copyrightYear;

    //Constructors
    public Book(String theTitle, String theAuthor, String thePublisher, int theCopyrightYear){
        title=theTitle;
        author=theAuthor;
        publisher=thePublisher;
        copyrightYear=theCopyrightYear;
    }

    //Modifiers
    public void setTitle(String newTitle){title=newTitle;}

    public void setAuthor(String newAuthor){author=newAuthor;}

    public void setPublisher(String newPublisher){publisher=newPublisher;}

    public void setCopyrightYear(int newCopyrightYear){copyrightYear=newCopyrightYear;}

    //Accessors
    public String getTitle(){return title;}

    public String getAuthor(){return author;}

    public String getPublisher(){return publisher;}

    public int getCopyrightYear(){return copyrightYear;}

    //toString

    public String toString(){
        String s="Title:\t" + title +
                "\nAuthor:\t" + author +
                "\nPublisher\t" + publisher +
                "\nCopyright\t" + copyrightYear;
        return s;
    }
}
