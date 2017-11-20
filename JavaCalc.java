import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class JavaCalc extends JFrame 
{
	private JTextField tfin,tfin1,tfout;
	private JButton plbtn,minbtn,mulbtn,divbtn,eqbtn,clrbtn;
	private int result=0,zero=0;
	private char flag='F';

	public JavaCalc()
	{
		Container cp= getContentPane();
		cp.setLayout(new FlowLayout());

		cp.add(new JLabel ("Input1"));
		tfin1=new JTextField(10);
		cp.add(tfin1);

		cp.add(new JLabel ("Input2"));
		tfin=new JTextField(10);
		cp.add(tfin);

		plbtn=new JButton("+");
		cp.add(plbtn);

		minbtn=new JButton("-");
		cp.add(minbtn);

		mulbtn=new JButton("*");
		cp.add(mulbtn);

		divbtn=new JButton("/");
		cp.add(divbtn);

		eqbtn=new JButton("=");
		cp.add(eqbtn);

		clrbtn=new JButton("CLR");
		cp.add(clrbtn);

		cp.add(new JLabel ("Result"));
		tfout=new JTextField(10);
		tfout.setEditable(false);
		cp.add(tfout);

		cp.add(new JLabel("Developed by Nabeel Javed"));

		//Action Listeners
		plbtn.addActionListener(new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent evt)
			{
				flag='+';
			}
		});

		minbtn.addActionListener(new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent evt)
			{
				flag='-';
			}
		});

		mulbtn.addActionListener(new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent evt)
			{
				flag='*';
			}
		});

		divbtn.addActionListener(new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent evt)
			{
				flag='/';
			}
		});

		clrbtn.addActionListener(new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent evt)
			{
				tfin.setText("");
				tfin1.setText("");
				tfout.setText("");
			}
		});

		eqbtn.addActionListener(new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent evt)
			{
				int num1=Integer.parseInt(tfin1.getText());
				int num2=Integer.parseInt(tfin.getText());
				switch(flag)
				{
					case '+':result=num1+num2;break;
					case '-':result=num1-num2;break;
					case '*':result=num1*num2;break;
					case '/':try{
								result=num1/num2;
							}
							catch(ArithmeticException e){zero=1;}
				}
				if (zero==0)
					tfout.setText(result+"");
				else
				{
					zero=0;
					tfout.setText("Zero Division Error");
				}
			}
		});

		tfin.addActionListener(new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent evt)
			{
				int num1=Integer.parseInt(tfin1.getText());
				int num2=Integer.parseInt(tfin.getText());
				switch(flag)
				{
					case '+':result=num1+num2;break;
					case '-':result=num1-num2;break;
					case '*':result=num1*num2;break;
					case '/':try{
								result=num1/num2;
							}
							catch(ArithmeticException e){zero=1;}
				}
				if (zero==0)
					tfout.setText(result+"");
				else
				{
					zero=0;
					tfout.setText("Zero Division Error");
				}
			}
		});

		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setTitle("Calculator");
		setSize(200,250);
		setVisible(true);
		setResizable(false);
	}
	public static void main(String [] args)
	{
		SwingUtilities.invokeLater(new Runnable()
		{
			@Override
			public void run()
			{
				new JavaCalc();
			}
		});
	}
}