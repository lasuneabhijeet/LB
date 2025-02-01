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
class Queue
{
    public node head;
    public int iCount;

    public Queue()
    {
        head = null;
        iCount = 0;

    }
   
    public void enqueue(int no)
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
    public int dequeue()
    {
        int no=0;
        if(head == null)
        {
            System.out.println("Queue is empty")
            return -1;

        }
        else if(head.next == null)
        {
            no = head.data;
            head = null;
            System.gc();
        }
        else
        {
            no = head.data;
            head = head.next;
            System.gc();

            
        }
        iCount--;
        return no;

    }
    
   
    


}
class program513
{
    public static void main(String Arg[])
    {
        int iRet= 0;
        Queue sobj = new Queue();

        sobj.enqueue(51);
        sobj.enqueue(21);
        sobj.enqueue(11);

        sobj.enqueue(101);
        sobj.enqueue(111);
        sobj.enqueue(151);

        sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of element in the linked list are: "+iRet);

        iRet = sobj.dequeue(); 
        System.out.println("dequeue element is : "+iRet);
        iRet = sobj.dequeue(); 
        System.out.println("dequeue element is : "+iRet);

         sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of element in the linked list are: "+iRet);
        



       

    }
}