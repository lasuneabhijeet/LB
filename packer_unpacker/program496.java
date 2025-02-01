import java.io.*;
import java.util.*;

class program491
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = null;
        String PackName = null;
        File fobj = null;
        FileInputStream fiobj = null;
        String SHeader = null;
        FileOutputStream foobj = null;
         File fobjx = null;
         int iRet = 0;
        
        try
        {
            sobj = new Scanner(System.in);
            
            System.out.println("---------------------------------------------------------------------");
            System.out.println("-------------- Marvellous Packer Unpacker CUI Module ----------------");
            System.out.println("---------------------------------------------------------------------");
            

            System.out.println("---------------------------- unPacking Activity -----------------------");

            System.out.println("Enter the name of packed file that you want to unpack : ");
            PackName = sobj.nextLine();

            fobj = new File(PackName);

            if(fobj.exists())
            {
                fiobj = new FileInputStream(fobj);

                byte Header[] = new byte[100];

                while((iRet = fiobj.read(Header)) != -1)
                {


               SHeader  = new String(Header);

                SHeader = SHeader.trim();
                

                String Arr[] = SHeader.split(" ");

              fobjx = new File(Arr[0]);
                fobjx.createNewFile();
                foobj = new FileOutputStream(fobjx);

                int FileSize = Integer.parseInt(Arr[1]);

                byte Buffer[] = new byte[FileSize];

                fiobj.read(Buffer);
                foobj.write(Buffer,0,FileSize);

                foobj.close();
               
                }
                fiobj.close();


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