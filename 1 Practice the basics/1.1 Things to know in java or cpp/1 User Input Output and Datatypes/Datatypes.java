import java.util.Scanner;
public class Datatypes {
	public static void main(String args[]) {
		
		boolean bo;
		char ch;
		byte bc;
		short s;
		int A,B,X,ab;
		long l;
		float f;
		double d,mul;
		
		double hex=0xface;
		System.out.println("double="+hex);
		
		
		Scanner inp=new Scanner(System.in);
		
		
		bo=true;
		ch='F';
		ab=2745;
		f=2345.54f;
		d=663762.5874;
		s=76;
		l=63;
		bc=127;
		

	 System.out.println("A=");
	A=inp.nextInt();
	System.out.println("B=");	
	B=inp.nextInt();
	X=A+B;
	System.out.println("X = "+X); 
	}
}