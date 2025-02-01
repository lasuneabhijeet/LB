import java.util.*;
class StringDemo{
    public int CountSmall(String str)
    {
        int iCnt = 0,iCount = 0;
        for(iCnt = 0;iCnt<str.length();iCnt++)
        {
            char ch = str.charAt(iCnt);
            if (ch >= 'a' && ch <= 'z') {
                iCount++;
            }

           
        }
        return iCount;

    }
}
class Ass36pro2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        System.out.println("Enter the String  :");
        String input = sobj.nextLine();
        StringDemo obj = new StringDemo();
        iRet = obj.CountSmall(input);
        System.out.println("number of small charecters are  : "+iRet);



    }
}