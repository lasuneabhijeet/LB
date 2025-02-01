class node
{
    public int data;
    public node next;
    public node prev;

    public node(int x)
    {
        data = x;
        next = null;
        prev = null;
    }
}

class DoublyLL
{
    public node head; 
    public node tail;
    public int iCount;

    public DoublyLL()
    {
        head = null;
        tail = null;
        iCount = 0;
    }
    int Count()
    {
        return iCount;
    }
    public void InsertFirst(int no)
    {
        

       node newn = new node(no);
        if(head == null)
        {
            head = newn;
            tail= newn;
        }
        else
        {
            newn.next = head;
            head.prev = newn;
            head = newn;
        }
        iCount++;
    }
    public void InsertLast(int no)
    {
        
      

        node newn = new node(no);
        if(head == null)
        {
            head = newn;
            tail = newn;
        }
        else
        {
            tail.next = newn;
            newn.prev = tail;
            tail = newn;
           
           
        }
        iCount++;
    }
    public void Display()
    {
        System.out.print("Elements are linklist are :");
        node temp = head;
        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public void DeleteFrist()
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
            head.prev = null;
           
        }
        iCount--;
    }
    public void DeleteLast()
    {
        if(head==null)
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

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.prev.next = null;
            System.gc();
        }
        iCount--;
    }
    public void InsertAtpos(int no ,int ipos)
    {
     if((ipos < 1) || (ipos > iCount + 1))
      {
         System.out.println("Invlid position");
         return;
      }
      if(ipos == 1)
      {
         InsertFirst(no);
      }
      else if(ipos == iCount + 1)
      {
         InsertLast(no);
      }
      else
      {
        node newn = new node(no);
        node temp = head;

        int i = 0;
        for(i = 1; i < ipos -1; i++)
        {
            temp = temp.next;
        }
        newn.next = temp.next;
        newn.prev = temp;     
        temp.next.prev = newn;   
        temp.next = newn;        
        

        iCount++;
      }

    }
    public void DeleteAtpos(int ipos )
    {
        if((ipos < 1) || (ipos >iCount))
        { 
            System.out.println("Invalid position");
            return;
        }
        if(ipos == 1)
        {
            DeleteFrist();
        }
        else if(ipos == iCount)
        {
            DeleteLast();
        }
        else
        {
            node temp = head;
            
            int i = 0;
            for(i =1; i < ipos - 1; i++)
            {
                temp = temp.next;
            }
             temp.prev.next = temp.next; 
           if(temp.next != null)
           {
            temp.next.prev = temp.prev;
           }
            iCount--;
        }
       
    }
}
class DoublyLL
{
    public static void main(String Arg[])
 {
     DoublyLL dobj = new DoublyLL();
     int iRet = 0;

     dobj.InsertFirst(51);
     dobj.InsertFirst(21);
     dobj.InsertFirst(11);
    
     dobj.InsertLast(101);
     dobj.InsertLast(111);
     dobj.InsertLast(121);
    
   
     dobj.Display();

     iRet = dobj.Count(); 
     System.out.println(" Number of elements are :"+iRet);

     dobj.DeleteFrist();
     dobj.Display();

     iRet = dobj.Count(); 
     System.out.println(" Number of elements are :"+iRet);


     dobj.DeleteLast();
     dobj.Display();

     iRet = dobj.Count(); 

     System.out.println(" Number of elements are :"+iRet);

     dobj.InsertAtpos(75,4);
     dobj.Display();

     iRet = dobj.Count(); 
     System.out.println(" Number of elements are :"+iRet);

     dobj.DeleteAtpos(4);
     dobj.Display();

      iRet = dobj.Count(); 
     System.out.println(" Number of elements are :"+iRet);

 }
}