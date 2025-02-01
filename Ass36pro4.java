import java.util.*;
class StringDemo{
    public boolean ChkVowel(String str)
    {
        int iCnt = 0;
        boolean bFlage = false;
        for(iCnt = 0;iCnt<str.length();iCnt++)
        {
            char ch = str.charAt(iCnt);
            if (ch == 'a' || ch == 'e'||ch == 'i' || ch == 'o'||ch == 'u') {
                bFlage = true;
                return bFlage;
            }
            


           
        }
        return bFlage;

    }
}
class Ass36pro4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean iRet = false;
        System.out.println("Enter the String  :");
        String input = sobj.nextLine();
        StringDemo obj = new StringDemo();
        iRet = obj.ChkVowel(input);
        if(iRet == true)
        {
            System.out.println("String Contains Vowel");
        }
        else
        {
            System.out.println("String don't have  Vowel");

        }
        



    }
}