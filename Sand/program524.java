import java.util.*;
class program524
{
    public static boolean LinearSearch(int Brr[],int iNo)
    {
        int i =0;
        boolean bResult = false;
        for(i=0;i<Brr.length;i++)
        {
            if(Brr[i]==iNo)
            {
                bResult = true;
                break;
            }
        }
        return bResult;
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int i=0,iSize = 0,iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the value :");

        for(i = 0;i<iSize;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        

        System.out.println("Elements of the array are :");

        for(i =0;i<iSize;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        System.out.println("Enter the element that you want to search : ");
        iValue = sobj.nextInt();

        bRet = LinearSearch(Arr,iValue);

        if(bRet == true)
        {
            System.out.println("Element is present in the array  ");

        }
        else
        {
            System.out.println("there is no such element in array ");
        }
    }
}