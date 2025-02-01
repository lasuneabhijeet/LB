import java.util.*;
class Digit
{
    public int CountDiff(int iNo)
    {
        int Digit = 0,Esum = 0,Osum = 0;
        while(iNo != 0)
        {
            Digit = iNo % 10;
            if(Digit % 2 == 0)
            {
                Esum = Esum + Digit;
            }
            else{
                Osum = Osum + Digit;
            }
            iNo = iNo / 10;

        }
        return Esum - Osum;

    }
}
class Ass38pro5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0,iRet = 0;
        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();

        iRet = dobj.CountDiff(iValue);

        System.out.println("Difference of sumation are :"+iRet);

    }
}