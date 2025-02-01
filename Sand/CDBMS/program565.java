import java.util.*;

class Employee
{
    public int Eno;
    public String Ename;
    public int Eage;
    public String Eaddress;
    public int Esalary;

    public static int Counter;

    static
    {
        Counter = 1;
    }

    public Employee(String B, int C, String D, int E)
    {
        Eno = Counter++;
        Ename = B;
        Eage = C;
        Eaddress = D;  
        Esalary = E;
    }

    public void DisplayInforation()
    {
        System.out.println(Eno+"\t"+Ename+"\t"+Eaddress+"\t\t  "+Eage+"\t"+Esalary);
    }
}

class MarvellousDBMS
{
    public LinkedList <Employee>lobj;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started succesfully..");
        lobj = new LinkedList<Employee>();
    }

    protected void finalize()
    {
        System.out.println("Deallocating all resources of Marvellous DBMS...");
        lobj.clear();
        lobj = null;
    }

    // insert into  employee values("Piyush",34,"Pune",11000);
    public void InsertIntoTable(String name, int age, String address, int salary)
    {
        Employee eobj = new Employee(name,age,address,salary);
        lobj.addLast(eobj);
        System.out.println("Record inserted succesfully into the table");
    }

    // select * from Emplyee;
    public void SelectStarFrom()
    {
        System.out.println("----------------------------------------------------------------");
        System.out.println("No\t Name \t Address \t Age \t Salary ");
        System.out.println("----------------------------------------------------------------");
        for(Employee eref : lobj)
        {
            eref.DisplayInforation();
        }
        System.out.println("----------------------------------------------------------------");
    }

    // Select * from employee where Eno = 3
    public void SelectSpecific(int id)
    {
        for(Employee eref :lobj)
        {
            if(eref.Eno == id)
            {
                eref.DisplayInforation();
                break;
            }
        }
    }
    // Select * from employee where Ename = "Amit"
    public void SelectSpecific(String str)
    {
        for(Employee eref : lobj)
        {
            if(str.equals(eref.Ename))
            {
            eref.DisplayInforation();
            break;
            }
        }
    }
    // delete from employee where Eno  = 2
    public void DeleteData(int no)
    {
        int index = 0;
        boolean bFlage = false;

        
        for(Employee eref : lobj)
        {
            if(eref.Eno == no)
            {
                bFlage = true;
                break;
            }
            index++;
        }
        if(bFlage == false)
        {
            System.out.println("Unable to remove the element is not there in database");
        }
        else{
            lobj.remove(index);
        }
    }
    //Delete from employeee where Ename = "Sagar"
    public void DeleteData(String str)
    {
         int index = 0;
        boolean bFlage = false;

        
        for(Employee eref : lobj)
        {
            if(str.equals(eref.Ename))
            {
                bFlage = true;
                break;
            }
            index++;
        }
        if(bFlage == false)
        {
            System.out.println("Unable to remove the element is not there in database");
        }
        else{
            lobj.remove(index);
        }

    }

    //Select Count(Eno) from Employee
    
    public void AggregateCount()
    {
            System.out.println("Number of records i the employee table : "+Employee.Counter);
        }
    public void AggregateSum()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum+eref.Esalary;
        }

        System.out.println("Summation of record in the Employee table : "+iSum);
    }
     // Select Avg(Esalary) from Employee
    public void AggregateAvg()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum+eref.Esalary;
        }

        System.out.println("Summation of record in the Employee table : "+(iSum/lobj.size()));
    }
      //Select Max(Esalary) from Employeee
    public void AggregateMax()
    {
        int imax = 0;
       

        for(Employee eref : lobj)
        {
            if(eref.Esalary>imax)
            {
                imax = eref.Esalary;
            }
        }

        System.out.println("Maximum of record in the Employee table : "+imax);

    }
    
}

class program565
{
    public static void main(String Arg[])
    {
        MarvellousDBMS mobj = new MarvellousDBMS();

        mobj.InsertIntoTable("Sagar",27,"Pune",11000);
        mobj.InsertIntoTable("Amit",28,"Mumbai",21000);
        mobj.InsertIntoTable("Pooja",26,"Satara",51000);
        mobj.InsertIntoTable("Gauri",28,"Nasik",18000);

        

        mobj.AggregateCount();
        mobj.AggregateSum();
        mobj.AggregateAvg();
        mobj.AggregateMax();
        


        mobj = null;
        System.gc();
    }
}