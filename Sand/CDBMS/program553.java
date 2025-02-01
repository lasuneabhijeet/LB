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

    public Employee(String B,int C,String D,int E)
    {
        Eno = Counter++;
        Ename = B;
        Eage = C;
        Eaddress = D;
        Esalary = E;
    }
    public void DisplayInforation()
    {
        System.out.println("Employee no : "+Eno+" Name :"+Ename+" Address: "+Eaddress+" Agr: "+Eage+" Salary :"+Esalary);
    }
}
class MarvellousDBMS
{
    public LinkedList<Employee>lobj;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started Succesfully ...");
        lobj = new LinkedList<Employee>();
    }

    protected void finalize()
    {
        System.out.println("Deallocating All resources of Marvellous DBMS..");
        lobj.clear();
        lobj = null;
    }
     //insert into employee valuees(1,"piyush",34,"pune",11000);
    public void InsertIntoTable(String name,int age,String Address,int Salary)
    {
        Employee eobj = new Employee(name,age,Address,Salary);

        lobj.addLast(eobj);
        System.out.println("Record inserted succesfully into the table ");

    }
}
class program553
{
    public static void main(String Arg[])
    {
       MarvellousDBMS mobj = new MarvellousDBMS();

       mobj.InsertIntoTable("sagar",27,"pune",11000);
       mobj.InsertIntoTable("Amit",28,"mubai",21000);

       mobj = null;

       System.gc();

    }

}