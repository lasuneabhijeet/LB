import java.io.*;
import java.util.*;
class program455
{
    public static void main(String Arg[])
    {
        try
        {
            boolean bret = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the file name that you want to creat : ");
            String name  = sobj.nextLine();

        
        File fobj = new File(name);
        if(fobj.exists())
        {
           System.out.println("File name is : "+fobj.getName());
           System.out.println("File size is : " + fobj.length());
        }
        else
        {
            System.out.println("there is no File");

        
        }
    }
        catch(Exception eobj)
        {
            System.out.println("Exception occuured .."+eobj);
        }
        
    }
}