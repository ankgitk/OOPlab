import java.util.*;

class Person
{
	private int id;
	private String name;
	void setdata(int a, String b)
	{
		id=a;
		name=b;
	}
	void showdata()
	{
		System.out.println("Id:"+id+" Name:"+name);
	}
};
class Employee extends Person
{
	private int salary;
	void setsal(int a)
	{
		salary=a;
	}
	void showsal()
	{
		showdata();
		System.out.println("Salary:"+salary);
	}
};
class Manager extends Employee
{
	private String desig;
	void setdes(String a)
	{
		desig=a;
	}
	void showdes()
	{
		showsal();
		System.out.println("Designation: "+desig);
	}
};
class demo
{
	public static void main(String args[])
	{
		Person p=new Person();
		p.setdata(101,"Nabeel");
		p.showdata();
		Employee e=new Employee();
		e.setdata(102,"kritika");
		e.setsal(25000);
		//e.showdata();
		e.showsal();
		Manager m=new Manager();
		m.setdata(103,"ABC");
		m.setsal(12000);
		m.setdes("Vice President");
		m.showdes();
	}
};