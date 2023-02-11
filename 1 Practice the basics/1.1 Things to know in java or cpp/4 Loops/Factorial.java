import java.util.Scanner;
import java.math.BigInteger;
public class Factorial {

	
	 static BigInteger factorial(int N)
	    {
	        // Initialize result
	        BigInteger f = new BigInteger("1"); // Or BigInteger.ONE
	 
	        // Multiply f with 2, 3, ...N
	        for (int i = 2; i <= N; i++)
	            f = f.multiply(BigInteger.valueOf(i));
	 
	        return f;
	    }

		public static void main(String[] args) {
			int i,n,t,x=1;
			Scanner input = new Scanner(System.in);
			System.out.print("Give the value of n = ");
			n  = input.nextInt();
			System.out.print(n+"! = ");
	
			for(i=0;i<=n-1;i++){
				
				t = i+1;
				 
				System.out.print(t+"");
				 if(i!=n-1) {System.out.print("*");}
				 }
			for(i=1;i<=n;i++) {
					 x=x*i;
				 }
				 System.out.print(" = "+x);
			
		}}
				
				 /* */
				 
				 
				/*if(i!=1) {System.out.print("*");}
				a=a*i;
				System.out.print(""+a);*/
				
				
			
		
			
			
			
			
			/*while (i<=n) {
					if(i<=n && i!=1)
				
				{System.out.print("+");}
				System.out.print(""+i);
				a=i+a;
				i++;
				
				
			} */

