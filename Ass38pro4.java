
import java.util.*;
class Digit
{
    public int Multiply(int iNo)
    {
        int Digit = 0,mul = 1;
        while(iNo != 0)
        {
            Digit = iNo % 10;
            if(Digit != 0)
            {
            mul = mul * Digit;
            }
            
           
            iNo = iNo / 10;

        }
        return mul;

    }
}
class Ass38pro4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0,iRet = 0;
        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();

        iRet = dobj.Multiply(iValue);

        System.out.println("multiplication of  Digits are :"+iRet);

    }
}