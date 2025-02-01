import java.io.*;
import java.util.*;
class program449
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
            System.out.println("file is already existing in the folder");
        }
        else
        {

        bret = fobj.createNewFile();

        if(bret == true)
        {
            System.out.println("File succesfully created");

        }
        else
        {
            System.out.println("unable to create File");

        }
    }
    }
        catch(Exception eobj)
        {
            System.out.println("Exception occuured .."+eobj);
        }
        
    }
}