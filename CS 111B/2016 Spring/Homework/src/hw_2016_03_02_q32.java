/**
 * Created by alanmartinez on 3/2/16.
 */
public class hw_2016_03_02_q32 {

    public static void main(String[] args){

        Book book1=new Book("The Hunt for Red October", "Tom Clancy", "Naval Institute Press", 1984);

        Book book2=new Book("Rainbow Six","Tom Clancy","G.P. Putnam Sons", 1998);

        System.out.println(book1);

        System.out.println(book2);

        System.out.println(book1.getTitle() + "Copyright Year " + book1.getCopyrightYear());

        System.out.println(book2.getTitle() + "Publisher " + book2.getPublisher());

        book1.setCopyrightYear(1983);

        book2.setPublisher("Ubisoft");

        System.out.println(book1.getTitle() + "Copyright Year " + book1.getCopyrightYear());

        System.out.println(book2.getTitle() + "Publisher " + book2.getPublisher());
    }
}
