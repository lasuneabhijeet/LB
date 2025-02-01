import java.io.*;
import java.util.*;
class program456
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
            int iRet = 0;

           FileInputStream fiobj = new FileInputStream(fobj);

           byte arr[] = new byte[1024];

           while((iRet = fiobj.read(arr)) != -1)
           {
            String str = new String(arr);
            System.out.println(str);
           }

           
        }
        else
        {
            System.out.println("there is no such  File");

        
        }
    }
        catch(Exception eobj)
        {
            System.out.println("Exception occuured .."+eobj);
        }
        
    }
}