import java.util.*;
class number{
    public int FirstOcc(int Arr[],int iNo)
    {
        int iCnt = 0;
        
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]==iNo)
            {
                
                return iCnt;
            }

        }
        return -1;

    }
}

class Ass39pro2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0,i = 0,number=0;
        int iRet= 0;
        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the element :");
        for(i = 0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        System.out.println("Enter that number want to search : ");
        number = sobj.nextInt();

        number nobj = new number();
        iRet = nobj.FirstOcc(Arr,number);
        System.out.println("index of element :"+iRet);

        
    }
}