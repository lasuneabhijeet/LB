import java.io.*;
import java.util.*;

class program476
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("__________________________________________________________________");
        System.out.println("_____________Marvellous packer unpacker CUI module________________");
        System.out.println("__________________________________________________________________");
        Scanner sobj = new Scanner(System.in);

        System.out.println("_________________PAcking Activity__________________________________");

        System.out.println("Enter the name of directory that you want to open packing : ");
        String DirName = sobj.nextLine();

        System.out.println("Enter the name of packed file that you want to creat : ");
        String PackName = sobj.nextLine();

        File Packobj = new File(PackName);
        boolean bret = false;

        bret = Packobj.createNewFile();
        if(bret == true)
        {
            System.out.println("packes file get Succesfully created with the name : "+PackName);
        }
        else{
            System.out.println("Unable to proceed as file is not created ");
            return;
        }

        FileOutputStream fopack = 

        File fobj = new File(DirName);

        if(Packobj.exists())
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();

            System.out.println("Number of files in the Directory are : "+Arr.length);

            int i = 0,j = 0;

            String Header = "";

            for(i = 0; i < Arr.length; i++)
            {
               Header = Arr[i].getName()+" "+Arr[i].length();
                System.out.println(Header);
                for(j = Header.length();j<100;j++)
                {
                Header = Header+" ";
                }
                fopack;
            Header =" ";
            }
            
            
        }
        else
        {
            System.out.println("There is no such director");
        }
        System.out.println("__________________________________________________");
    }
}