import java.util.*;

class Employee
{
    public int Eno;
    public String Ename;
    public int Eage;
    public String Eaddress;
    public int Esalary;

    public Employee(int A,String B,int C,String D,int E)
    {
        Eno = A;
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
    public void InsertIntoTable(int no,String name,int age,String Address,int Salary)
    {
        Employee eobj = new Employee(no,name,age,Address,Salary);

        lobj.addLast(eobj);
        System.out.println("Record inserted succesfully into the table ");

    }
}
class program552
{
    public static void main(String Arg[])
    {
       MarvellousDBMS mobj = new MarvellousDBMS();

       mobj.InsertIntoTable(1,"sagar",27,"pune",11000);
       mobj.InsertIntoTable(2,"sagar",27,"pune",11000);

       mobj = null;

       System.gc();

    }

}