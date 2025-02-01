import java.io.*;
class program447
{
    public static void main(String Arg[])
    {
        try
        {
            boolean bret = false;

        
        File fobj = new File("Demo.txt");

        fobj.createNewFile();

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
        catch(Exception eobj)
        {
            System.out.println("Exception occuured .."+eobj);
        }
        
    }
}