import java.util.*;
class ArrayDemo
{
    public int Arr[];
    public ArrayDemo(int iSize)
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
            if((Arr[i] % 3 == 0) && (Arr[i] % 5 == 0))
            {
            System.out.println(Arr[i]);
            }
        }

    }
    
}

class Ass37pro4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0,iRet = 0;
        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        ArrayDemo aobj = new ArrayDemo(iSize);

        aobj.Accept();
        aobj.Display();
        


        
        
    }
}