abstract class Figure
{
	double dim1,dim2;
	Figure (double dim1,double dim2)
	{
		this.dim1=dim1;
		this.dim2=dim2;
	}
	abstract void Area();
}
class Rectangle extends Figure
{
	Rectangle(double dim1,double dim2)
	{
		super(dim1,dim2);
	}
	void Area()
	{
		System.out.println("Area of Rectangle: "+(dim1*dim2));
	}
}
class Triangle extends Figure
{
	Triangle(double dim1,double dim2)
	{
		super(dim1,dim2);
	}
	void Area()
	{
		System.out.println("Area of Triangle: "+(0.5*dim1*dim2));
	}
}
class abs
{
	public static void main(String args[])
	{
		Figure f;
		//f.Area();
		Rectangle r=new Rectangle(7,6);
		r.Area();
		Triangle t=new Triangle(5,3);
		t.Area();
		f=r;
		f.Area();
		f=t;
		f.Area();
	}
}