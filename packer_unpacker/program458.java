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

           byte Arr[] = new byte[20];

           iRet = fiobj.read(Arr);
           String str = new String(Arr);
           System.out.println("Data form file is : "+str);
           System.out.println("Return value of read : "+iRet);
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