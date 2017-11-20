import java.util.Random;
import java.util.Arrays;
import java.util.Scanner;
class Gen extends Thread
{
	int i,array[];
	public Gen(int array[])
	{
		this.array=array;
	}
	public void run()
	{
		Random rand=new Random();
		System.out.println("Generated Random Numbers");
		for(i=0;i<100;i++)
		{
			array[i]=rand.nextInt(1000);
			System.out.println(array[i]);
		}
		System.out.println("\n");
	}
}
class Sort extends Thread
{
	private int array[];
	public Sort(int array[])
	{
		this.array=array;
	}
	public void run()
	{
		int i;
		Arrays.sort(array);
		System.out.println("Sorted Array");
		for(i=0;i<100;i++)
		{
			System.out.println(array[i]);
		}
		System.out.println("\n");
	}
}
class Search extends Thread
{
	private int array[],ele;
	public Search(int array[])
	{
		this.array=array;
	}
	public void run()
	{
		int i,f=0;
		Scanner s=new Scanner(System.in);
		System.out.println("Enter Element to search");
		ele=s.nextInt();
		for(i=0;i<100;i++)
		{
			if(array[i]==ele)
			{
				f=1;
				System.out.println("Element "+ele+" found at index "+i);
				break;
			}
		}
		if(f==0)
			System.out.println("Element "+ele+" not found");
	}
}
class ThreadDemo
{
	public static void main(String args[])
	{
		int i;
		int array[]=new int[100];
		Gen g=new Gen(array);
		Sort s=new Sort(array);
		Search sea=new Search(array);
		g.start();
		try
		{
			s.sleep(100);
		}catch(InterruptedException e){}
		s.start();
		try
		{
			sea.sleep(100);
		}catch(InterruptedException e){}
		sea.start();
		/*for(i=10;i<100;i++)
		{
			System.out.println(array[i]);
		}*/
	}
}