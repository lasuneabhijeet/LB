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
class program547
{
    public static void main(String Arg[])
    {
        Employee eobj1 = new Employee(1,"Sagar",27,"Mumbai",21000);
        Employee eobj2 = new Employee(2,"Nikhil",28,"pune",51000);
        Employee eobj3 = new Employee(3,"Amit",25,"Satara",11000);

        eobj1.DisplayInforation();
        eobj2.DisplayInforation();
        eobj3.DisplayInforation();




    }

}