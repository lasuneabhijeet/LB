import java.util.*;

class Arithematic
{
    public  int Power(int A,int B)
    {
        int iCnt = 0,iMult=1;
        for(iCnt=1;iCnt<=B;iCnt++)
        {
            iMult = iMult*A;

        }
        return iMult;
    }
    
}

class program236
{
    
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0,iAns = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Base :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter index :");
        iNo2 = sobj.nextInt();
        
         
        Arithematic aobj = new Arithematic();

        iAns =aobj.Power(iNo1,iNo2);

        System.out.println("Area is :"+iAns);
        
    }
}

