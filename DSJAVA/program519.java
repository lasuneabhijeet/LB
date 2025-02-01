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
    public void Display()
    {
        node temp = head;
        if(head != null && tail != null)
        {
            System.out.println("Element of linked list are:");
            do
            {
                System.out.println("|"+temp.data+"|->");
                temp = temp.next;
            }while(temp != tail.next);
        }
    }
    public int Count()
    {
        return iCount;
    }
    public void DeleteFirst()
    {
        if((head==null)&&(tail==null))
        {
            return;

        }
        else if(head==tail)
        {
            head = null;
            tail = null;
        }
        else
        {
            head=head.next;
            tail.next = head;
            head.prev = tail;


        }
        System.gc();
        iCount--;
    }
    public void DeleteLast()
    {
        if((head==null)&&(tail==null))
        {
            return;

        }
        else if(head==tail)
        {
            head = null;
            tail = null;
        }
        else
        {
            tail = tail.prev;
            tail.next = head;
            head.prev = tail;


        }
        System.gc();
        iCount--;
    }
    public void InsertAtPos(int no,int ipos)
    {
        if((ipos<1)||(ipos>iCount+1))
        {
            return;
        }
        if(ipos ==1)
        {
            InsertFirst(no);
        }
        else if(ipos == iCount+1)
        {
            InsertLast(no);
        }
        else
        {
            node newn = new node(no);
            int i = 0;
            node temp = head;

            for(i = 1;i<ipos-1;i++)
            {
                temp=temp.next;

            }
            newn.next = temp.next;
            temp.next.prev=newn;
             temp.next = newn;
             newn.prev  = temp;


         iCount++;
        
        }
    }
    public void DeleteAtPos(int ipos)
    {
        if((ipos<1)||(ipos>iCount))
        {
            return;
        }
        if(ipos ==1)
        {
            DeleteFirst();
        }
        else if(ipos == iCount)
        {
            DeleteLast();
        }
        else
        {
           
            int i = 0;
            node temp = head;

            for(i = 1;i<ipos-1;i++)
            {
                temp=temp.next;

            }
            temp.next = temp.next.next;
            temp.next.prev= temp;
           
            


         iCount--;
        }
    }


}
class program519
{
    public static void main(String Arg[])
    {
        doublyCL dobj = new doublyCL();
        int iRet = 0;


        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);

        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);

        dobj.Display();
        iRet=dobj.Count();
        System.out.println("number of element in linked list are "+iRet);

        dobj.DeleteFirst();
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("number of element in linked list are "+iRet);

         dobj.DeleteLast();
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("number of element in linked list are "+iRet);
        dobj.InsertAtPos(75,4);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("number of element in linked list are "+iRet);

        dobj.DeleteAtPos(4);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("number of element in linked list are "+iRet);

    }
}