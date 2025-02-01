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
        for(Employee eref : lobj)
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

    // delete from Emplyee where Eno = 2
    public void DeleteData(int no)
    {
        int index = 0;
        boolean bFlag = false;

        for(Employee eref : lobj)
        {
            if(eref.Eno == no)
            {
                bFlag = true;
                break;
            }
            index++;
        }  

        if(bFlag == false)
        {
            System.out.println("Unable to remove the element as element is not there in database");
        }
        else
        {
            lobj.remove(index);
        }
    }

    // delete from Employee where Enmae = "Sagar"
    public void DeleteData(String str)
    {
        int index = 0;
        boolean bFlag = false;

        for(Employee eref : lobj)
        {
            if(str.equals(eref.Ename))
            {
                bFlag = true;
                break;
            }
            index++;
        }  

        if(bFlag == false)
        {
            System.out.println("Unable to remove the element as element is not there in database");
        }
        else
        {
            lobj.remove(index);
        }
    }

    // select Count(Eno) from Employee
    public void AggregateCount()
    {
        System.out.println("Number of records in the Employee table : "+Employee.Counter); 
    }

    // select Count(ESalary) from Employee
    public void AggregateSum()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum + eref.Esalary;
        }

        System.out.println("Summation of records in the Employee table : "+iSum); 
    }

    // select Avg(ESalary) from Employee
        public void AggregateAvg()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum + eref.Esalary;
        }

        System.out.println("Average of records in the Employee table : "+(iSum/ lobj.size())); 
    }

    // select Max(ESalary) from Employee
    public void AggregateMax()
    {
        int iMax = lobj.get(0).Esalary;

        for(Employee eref : lobj)
        {
            if(eref.Esalary > iMax)
            {
                iMax = eref.Esalary;
            }
        } 

        System.out.println("Maximum of records in the Employee table : "+iMax); 
    }

    // select Min(ESalary) from Employee
    public void AggregateMin()
    {
        int iMin = lobj.get(0).Esalary;

        for(Employee eref : lobj)
        {
            if(eref.Esalary < iMin)
            {
                iMin = eref.Esalary;
            }
        } 

        System.out.println("Minimum of records in the Employee table : "+iMin); 
    }
    // update Employee set Address = "Sangli "where Eno = 3;

    public void UpadateRecord(int no,String Address)
    {
        int index = 0;
        boolean bFlage = false;
        Employee temp = null;
        for(Employee eref : lobj)
        {
            if(eref.Eno == no)
            {
                eref.Eaddress = Address;
                lobj.set(index,eref);
                break;
            }
            index++;
        }
        
    }
}

class program572
{
    public static void main(String Arg[])
    {
        

        System.out.println("Welcome to MarvellousDBMS");

        MarvellousDBMS mobj = new MarvellousDBMS();

        System.out.println("Please select your option based on your requirement");

        while(true)
        {
            System.out.println("1 : Insert new record in the table");
            System.out.println("2 : Display all records from the table ");
            System.out.println("3 : Display specific record from the table with with ID");
            System.out.println("4 : Display Specific record from the table with name");
            System.out.println("5 : Delete the record from tble with name");
            System.out.println("6 : Count number of record from the table");
            System.out.println("7 : Summation of all record salary ");
            System.out.println("8 : Average of all record salary");
            System.out.println("9 : Maximun of all record salary");
            System.out.println("10 : Minimum of all record salary");
            System.out.println("11 : Update  the existing  record");
            System.out.println("12 : Delete the table");
            System.out.println("13 : Terminate the Marvellos DBmS");

            System.out.println("_____________________________________________________________");
            iOption = sobj.nextInt();
            if(iOption == 1)
            {
                System.out.println("Enter the Name of Emplyee");
                name = sobj.nextLine();

                System.out.println("Enter the age of Emplyee");
                age = sobj.nextInt();

                System.out.println("Enter the salary of Emplyee");
                salary = sobj.nextLine();

                System.out.println("Enter the Name of Emplyee");
                address = sobj.nextLine();

            }

        }

        

       
        
        
    }
}