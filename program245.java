import java.util.*;
class Digits
{
    public void CountDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 7)
            {
                iCount++;
            }
            iNo = iNo /10;

        }
       System.out.println("Frequency of 5 is : "+iCount);

    }
}

class program245
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
         dobj.CountDigits(iValue);
        

        
    }
}