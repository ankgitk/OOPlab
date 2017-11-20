import java.util.*;

class Person
{
	private int id;
	private String name;
	Person(int a, String b)
	{
		this.id=a;
		this.name=b;
	}
	void showdata()
	{
		System.out.print("Id:"+id+" Name:"+name);
	}
};
class Employee extends Person
{
	private int salary;
	int retsal()
	{
		return salary;
	}
	Employee(int a,String b,int c)
	{
		super(a,b);
		salary=c;
	}
	void showsal()
	{
		showdata();
		System.out.print(" Salary:"+salary);
	}
};
class Manager extends Employee
{
	private String desig;
	Manager(int a,String b,int c,String d)
	{
		super(a,b,c);
		desig=d;
	}
	void showdes()
	{
		showsal();
		System.out.print(" Designation:"+desig);
	}
};
class demo2
{
	public static void main(String args[])
	{
		Person p=new Person(101,"Nabeel");
		p.showdata();
		System.out.println('\n');
		Employee e=new Employee(102,"kritika",25000);
		e.showsal();
		System.out.println('\n');
		Manager m=new Manager(103,"Shannon",12000,"Vice President");
		m.showdes();
		System.out.println('\n');
	}
};