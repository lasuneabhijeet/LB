import java.util.*;
class ArrayX
{
    public int Arr[];
    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;
        System.out.println("Enter the element :");
        for(i = 0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }

    }
    public void Display()
    {
        int i = 0;
         System.out.println("Elements of the Array are :");
        for(i = 0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }

    }
    public void CountDigit()
    {
        int i = 0,iCount = 0,iNo = 0;
        int max = Arr[0];
        for(i = 0;i<Arr.length;i++)
        {
            iNo = Arr[i];
            while(Arr[i] != 0)
            {
                iCount++;
                Arr[i] = Arr[i] / 10;


            }
            System.out.println(+iCount);
            iCount=0;
        }
        

    }
}

class program264
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0,iRet = 0;
        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept();
        aobj.Display();
       aobj.CountDigit();

        
       
        
    }
}