import java.util.*;
class number{
    boolean Check(int Arr[],int iNo)
    {
        int i = 0;
        boolean bflage = false;
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]==iNo)
            {
                bflage = true;
                return bflage;
            }

        }
        return bflage;

    }
}

class trying111
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0,i = 0,number=0;
        boolean iRet= false;
        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the element :");
        for(i = 0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        System.out.println("Enter the number ");
        number = sobj.nextInt();

        number nobj = new number();
        iRet = nobj.Check(Arr,number);
        if(iRet==true)
        {
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }


        
    }
}