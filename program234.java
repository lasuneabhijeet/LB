import java.util.*;

class Rectangle
{
    public  float CalculationArea(float A,float B)
    {
        float fArea = 0.0f;
        fArea = A*B;
        return fArea;
    }
    
}

class program234
{
    
    public static void main(String A[])
    {
        float fNo1 = 0.0f, fNo2 = 0.0f;
        float fAns = 0.0f;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter length :");
        fNo1 = sobj.nextFloat();

        System.out.println("Enter width :");
        fNo2 = sobj.nextFloat();
        
         
        Rectangle cobj = new Rectangle();

        fAns =cobj.CalculationArea(fNo1,fNo2);

        System.out.println("Area is :"+fAns);
        
    }
}

