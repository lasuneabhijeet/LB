import java.util.*;
class StringDemo{
    public void  Reverse(String str)
    {
        int iCnt = 0;
        String reverse ="";
        for(iCnt = str.length()-1;iCnt>=0;iCnt--)
        {
            char ch = str.charAt(iCnt);
            reverse = reverse + ch;
        }
            
            System.out.println(reverse);
        

    }
}
class Ass36pro5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean iRet = false;
        System.out.println("Enter the String  :");
        String input = sobj.nextLine();
        StringDemo obj = new StringDemo();
         obj.Reverse(input);
       
        



    }
}