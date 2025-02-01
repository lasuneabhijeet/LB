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
    public int Difference()
    {
        int Esum = 0,Osum = 0,Diff = 0;
        int i = 0;
        
        for(i = 0;i<Arr.length;i++)
        {
            if(Arr[i] % 2 == 0)
            {
                Esum = Esum+Arr[i];

            }
            else{
                Osum = Osum+Arr[i];

            }
        }
        Diff = Esum - Osum;
        return Diff;

    }
}

class Ass37pro1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0,iRet = 0;
        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        ArrayDemo aobj = new ArrayDemo(iSize);

        aobj.Accept();
        iRet = aobj.Difference();
        System.out.println("Difference of Summation is  : "+iRet);


        
        
    }
}