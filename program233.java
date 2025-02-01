import java.util.*;

class Calculation
{
    public  float CalculationPercentage(int A,int B)
    {
        float fResult = 0.0f;
        fResult = ((float)A/(float)B)*100;
        return fResult;
    }
    
}

class program233
{
    
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        float fAns = 0.0f;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Obtained marks :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter total marks :");
        iNo2 = sobj.nextInt();
        
         
        Calculation cobj = new Calculation();

        fAns =cobj.CalculationPercentage(iNo1,iNo2);

        System.out.println("Addition is :"+fAns);
        
    }
}

