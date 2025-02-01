import java.util.*;
class number{
    public void Display(int Arr[],int iStart,int iEnd)
    {
        int iCnt = 0,index=-1;
        
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>iStart) && (Arr[iCnt]<iEnd))
            {
                System.out.println(Arr[iCnt]);
                
            }

        }
        

    }
}

class Ass39pro4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0,i = 0,number1=0,number2 = 0;
      
        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the element :");
        for(i = 0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        System.out.println("Enter that Start: ");
        number1 = sobj.nextInt();
        System.out.println("Enter that Start: ");
        number2 = sobj.nextInt();
        

        number nobj = new number();
        nobj.Display(Arr,number1,number2);
        

        
    }
}