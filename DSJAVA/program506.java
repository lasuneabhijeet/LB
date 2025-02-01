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
    public void InsertLat(int no)
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
    


}
class program506
{
    public static void main(String Arg[])
    {
        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

       

    }
}