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
final class Employee extends Person
{
	final private int salary=0;
	Employee()
	Employee(int a,String b,int c)
	{
		super(a,b);
		salary=c;
	}
	final void showdata()
	{
		super.showdata set();
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
	void showdata()
	{
		super.showdata();
		System.out.print(" Designation:"+desig);
	}
};
class demo4
{
	public static void main(String args[])
	{
		Person p=new Person(101,"Nabeel");
		p.showdata();
		System.out.println('\n');
		Employee e=new Employee(102,"kritika",25000);
		e.showdata();
		System.out.println('\n');
		Manager m=new Manager(103,"ABC",12000,"Vice President");
		m.showdata();
		System.out.println('\n');
	}
};