class node
{
    public int data;
    public node prev;
    public node next;
     public node(int no)
     {
        data = no;
        next = null;
        prev = null;
     }
}
class doublyCL
{
    public node head;
    public node tail;
    public int iCount;

    public doublyCL()
    {
        head = null;
        tail = null;
        iCount = 0;
    }
    public void InsertFirst(int no)
    {
        node newn = new node(no);
        if((head == null) && (tail == null))
        {
            head = newn;
            tail = newn;

        }
        else
        {
            newn.next = head;
            newn.prev = newn;
            head = newn;

            

        }
        tail.next=head;
        head.prev = tail;

        iCount++;

    }
    public void InsertLast(int no)
    {
        node newn = new node(no);
        if((head == null) && (tail == null))
        {
            head = newn;
            tail = newn;

        }
        else
        {
            tail.next = newn;
            newn.prev=tail;
            tail = tail.next;
            

        }
        tail.next=head;
        head.prev = tail;

        iCount++;

    }


}
class program514
{
    public static void main(String Arg[])
    {
        doublyCL dobj = new doublyCL();

        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);

        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);

    }
}