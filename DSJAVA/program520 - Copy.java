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
class doublyLL
{
    public node head;
    
    public int iCount;

    public doublyLL()
    {
        head = null;
        
        iCount = 0;
    }
    public void InsertFirst(int no)
    {
        node newn = new node(no);
        if(head == null)
        {
            head = newn;
            

        }
        else
        {
            newn.next=head;
            head.prev=newn;
            head=newn;

            

        }
        

        iCount++;

    }
    public void InsertLast(int no)
    {
        node newn = new node(no);
        if(head == null)
        {
            head = newn;
            

        }
        else
        {
            node temp = head;  
          while(temp.next != null)
          {
            temp = temp.next;
            
          }
           temp.next = newn;
            newn.prev = temp; 

        }
        

        iCount++;

    }
    
    public void Display()
    {
        System.out.println("Element of the LinkedList are : ");
        node temp = head;
        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public int Count()
    {
        return iCount;
    }
    public void DeleteFirst()
    {
        if(head == null)
        {
            return;

        }
        else if(head.next == null)
        {
            head = null;
            System.gc();
        }
        else
        {
            head = head.next;
            head.prev=null;
            System.gc();

            
        }
        iCount--;

    }
    public void DeleteLast()
    {
        
        if(head == null)
        {
            return;

        }
        else if(head.next == null)
        {
            head = null;
            System.gc();
        }
        else
        {
            node temp = head;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;

            System.gc();

            
        }
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
class program520
{
    public static void main(String Arg[])
    {
        doublyLL dobj = new doublyLL();
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