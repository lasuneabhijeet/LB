import java.util.*;
class number{
    public int Product(int Arr[])
    {
        int iCnt = 0,mul = 1,Count =0;
        
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt] % 2 == 1)
            {
                mul = mul * Arr[iCnt];
                Count++;
                
                
            }
            

        }
        if (Count == 0) {
            return 0; 
        } else {
            return mul; 
        }
        

    }
}

class Ass39pro5
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
       

        number nobj = new number();
        iRet = nobj.Product(Arr);
        System.out.println("product of odd element :"+iRet);

        
    }
}