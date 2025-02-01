class node
{
    public int data;
    public node next;

    public node(int X)
    {
        data = X;
        next = null;
    }

}
class SinglyLL
{
    public node head;
    public int iCount;

    public SinglyLL()
    {
        head = null;
        iCount = 0;

    }
    public void InsertFirst(int no)
    {
       node newn = null;
       newn = new node(no);
       
        if(head ==null)
        {
            head=newn;

        }
        else
        {
            head.next=head;
            head = newn;
        }
        iCount++;
    }
    public void InsertLast(int no)
    {
       node newn = null;
      
       newn = new node(no);
       
        if(head ==null)
        {
            head=newn;

        }
        else
        {
            node temp = head;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next=newn;
        }
        iCount++;
    }
    public void Display()
    {
        System.out.println("Element of the LinkedList are : ");
        node temp = head;
         while(temp.next != null)
            {
                System.out.print("|"+temp.data +"|->");
                temp = temp.next;
            }
            System.out.println("null");
    }
    public int Count()
    {
        return iCount;
    }
    


}
class program507
{
    public static void main(String Arg[])
    {
        int iRet= 0;
        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(151);

        sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of element in the linked list are: "+iRet);


       

    }
}