
import java.util.*;
class Digit
{
    public int CountRange(int iNo)
    {
        int Digit = 0,iCount = 0;
        while(iNo != 0)
        {
            Digit = iNo % 10;
            if(Digit >3 && Digit< 7)
            {
                iCount++;
            }
            iNo = iNo / 10;

        }
        return iCount;

    }
}
class Ass38pro3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0,iRet = 0;
        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();

        iRet = dobj.CountRange(iValue);

        System.out.println(" Digits between 3 and 7  are :"+iRet);

    }
}