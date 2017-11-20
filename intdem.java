interface Figure
{
	void Area();
}
class Rectangle implements Figure
{
	double dim1,dim2;
	Rectangle(double dim1,double dim2)
	{
		this.dim1=dim1;
		this.dim2=dim2;
	}
	public void Area()
	{
		System.out.println("Area of Rectangle: "+(dim1*dim2));
	}
}
class Triangle implements Figure
{
	double dim1,dim2;
	Triangle(double dim1,double dim2)
	{
		this.dim1=dim1;
		this.dim2=dim2;
	}
	public void Area()
	{
		System.out.println("Area of Triangle: "+(0.5*dim1*dim2));
	}
}
class Circle implements Figure
{
	double dim;
	Circle(double dim)
	{
		this.dim=dim;
	}
	public void Area()
	{
		System.out.println("Area of Circle: "+ 3.14*dim*dim);
	}
}
class intdem
{
	public static void main(String args[])
	{
		Figure f;
		Rectangle r=new Rectangle(7,6);
		r.Area();
		Triangle t=new Triangle(5,3);
		Circle c=new Circle(2);
		c.Area();
		t.Area();
		f=r;
		f.Area();
		f=t;
		f.Area();
		f=c;
		f.Area();
	}
}