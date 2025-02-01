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
    public int Summation()
    {
        int i = 0,isum=0;
        for(i=0;i<Arr.length;i++)
        {
            isum=isum+Arr[i];
        }
        return isum;

    }
}

class program261
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0,i = 0,iRet = 0;
        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept();
        aobj.Display();
        iRet = aobj.Summation();

        
       System.out.println("Summation of all element :"+iRet);
        
    }
}