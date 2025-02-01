class node {
    public int data;
    public node next;

    public node(int no) {
        data = no;
        next = null;
    }
}

class SinglyCL {
    public node head;
    public node tail;
    public int iCount;

    public SinglyCL() {
        head = null;
        tail = null;
        iCount = 0;
    }

    
    public void InsertFirst(int no) {
        node newn = new node(no);
        if (head == null && tail == null)
         {
            head = newn;
            tail = newn;
        } else 
        {
            newn.next = head;
            head = newn;
        }
        tail.next = head; 
        iCount++;
    }

    
    public void InsertLast(int no) {
        node newn = new node(no);
        if (head == null && tail == null) {
            head = newn;
            tail = newn;
        } else {
            tail.next = newn;
            tail = newn;
        }
        tail.next = head; 
        iCount++;
    }

    
    public void Display() {
        node temp = head;
        if (head != null && tail != null) {
            System.out.println("Elements of linked list are:");
            do {
                System.out.print("|" + temp.data + "|->");
                temp = temp.next;
            } while (temp != head); 
            
        }
    }

    
    public int Count() {
        return iCount;
    }

    
    public void DeleteFirst() {
        if (head == null && tail == null) {
            return;
        } else if (head == tail) {
            head = null;
            tail = null;
        } else {
            head = head.next;
            tail.next = head; 
        }
        iCount--;
    }

   
    public void DeleteLast() {
        if (head == null && tail == null) {
            return;
        } else if (head == tail) {
            head = null;
            tail = null;
        } else {
            node temp = head;
            while (temp.next != tail) { 
                temp = temp.next;
            }
            tail = temp;
            tail.next = head; 
        }
        iCount--;
    }

    
    public void InsertAtPos(int no, int ipos) {
        if (ipos < 1 || ipos > iCount + 1) {
            return;
        }
        if (ipos == 1) {
            InsertFirst(no);
        } else if (ipos == iCount + 1) {
            InsertLast(no);
        } else {
            node newn = new node(no);
            node temp = head;
            for (int i = 1; i < ipos - 1; i++) {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
            iCount++;
        }
    }

    
    public void DeleteAtPos(int ipos) {
        if (ipos < 1 || ipos > iCount) {
            return;
        }
        if (ipos == 1) {
            DeleteFirst();
        } else if (ipos == iCount) {
            DeleteLast();
        } else {
            node temp = head;
            for (int i = 1; i < ipos - 1; i++) {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            iCount--;
        }
    }
}

class program522 {
    public static void main(String Arg[]) {
        SinglyCL dobj = new SinglyCL();
        int iRet = 0;

        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);

        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of elements in the linked list are: " + iRet);

        dobj.DeleteFirst();
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of elements in the linked list are: " + iRet);

        dobj.DeleteLast();
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of elements in the linked list are: " + iRet);

        dobj.InsertAtPos(75, 4);
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of elements in the linked list are: " + iRet);

        dobj.DeleteAtPos(4);
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of elements in the linked list are: " + iRet);
    }
}
