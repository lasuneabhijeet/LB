import java.util.*;
class StringDemo{
    public int CountDiff(String str)
    {
        int iCnt = 0,iCount = 0,count = 0;
        for(iCnt = 0;iCnt<str.length();iCnt++)
        {
            char ch = str.charAt(iCnt);
            if (ch >= 'a' && ch <= 'z') {
                iCount++;
            }
            else if (ch >= 'A' && ch <= 'Z') {
                count++;
            }


           
        }
        return iCount-count;

    }
}
class Ass36pro3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        System.out.println("Enter the String  :");
        String input = sobj.nextLine();
        StringDemo obj = new StringDemo();
        iRet = obj.CountDiff(input);
        System.out.println("number of small charecters are  : "+iRet);



    }
}