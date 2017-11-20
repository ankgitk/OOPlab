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
abstract class Employee extends Person
{
	private int salary;
	int retsal()
	{
		return salary;
	}
	Employee(int a,String b,int c)
	{
		super(a,b);
		this.salary=c;
	}
	abstract void showsal();
};
class Manager extends Employee
{
	private String desig;
	Manager(int a,String b,int c,String d)
	{
		super(a,b,c);
		this.desig=d;
	}
	void showsal()
	{
		showdata();
		System.out.print(" Designation:"+desig);
	}
};
class demo5
{
	public static void main(String args[])
	{
		Person p=new Person(101,"Nabeel");
		p.showdata();
		System.out.println('\n');
		Employee e;
		//System.out.println('\n');
		Manager m=new Manager(103,"ABC",12000,"Vice President");
		m.showsal();ß
		System.out.println('\n');
	}
};