import java.util.*;
class Digit
{
    public int CountEven(int iNo)
    {
        int Digit = 0,iCount = 0;
        while(iNo != 0)
        {
            Digit = iNo % 10;
            if(Digit % 2 == 0)
            {
                iCount++;
            }
            iNo = iNo / 10;

        }
        return iCount;

    }
}
class Ass38pro1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0,iRet = 0;
        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();

        iRet = dobj.CountEven(iValue);

        System.out.println("even Digits are :"+iRet);

    }
}