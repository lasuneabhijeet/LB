import java.util.*;

class program536
{
    public static void main(String Arg[])
    {
        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);
        lobj.add(111);

        System.out.println(lobj);

        
        for(Integer no : lobj)
        {
            System.out.println(no);
        }
    }
}