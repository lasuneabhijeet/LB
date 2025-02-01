import java.io.*;
import java.util.*;
class program463
{
    public static void main(String Arg[])  throws Exception
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the name of directory that you want to open :");
       String DirName = sobj.nextLine();

       File fobj = new File(DirName);

       if(fobj.exists())
       {
        System.out.println("Directory is present ");
       }
       else
       {
        System.out.println("there is no such Directory ");
       }


    }
}