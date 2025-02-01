import java.io.*;
import java.util.*;

class program491
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = null;
        String PackName = null;
        
        try
        {
            sobj = new Scanner(System.in);
            
            System.out.println("---------------------------------------------------------------------");
            System.out.println("-------------- Marvellous Packer Unpacker CUI Module ----------------");
            System.out.println("---------------------------------------------------------------------");
            

            System.out.println("---------------------------- unPacking Activity -----------------------");

            System.out.println("Enter the name of packed file that you want to unpack : ");
            PackName = sobj.nextLine();

            File fobj = new File(PackName);

            if(fobj.exists())
            {
                FileInputStream fiobj = New FileInputStream(fobj);

            }
            else
            {
                System.out.println("There is no such packed file");
                return;
            }

            
            
            
           
            System.out.println("---------------------------------------------------------------------");
            System.out.println("--------- Thank you for using Marvellous Packer-Unpacker ------------");
            System.out.println("---------------------------------------------------------------------");

        } // End of try
        catch(Exception eobj)
        {
            System.out.println("Exception occured : "+eobj);
        }
    }
}