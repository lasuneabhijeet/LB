import java.util.*;

class program256
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0,i = 0;
        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the element :");
        for(i = 0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }

         System.out.println("Enter of the Array are :");
        for(i = 0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
        
    }
}