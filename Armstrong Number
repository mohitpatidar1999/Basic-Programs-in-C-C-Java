import java.util.*;
import java.lang.*;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Enter number to check if it is armstrong or not");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int num=n;
		int count = 0;
		for (; n != 0; n /= 10, ++count) { }
		//System.out.println("digits :"+ count);
		int originalNum = num;
		int result=0;
        
    while (originalNum != 0) {
       // remainder contains the last digit
        int remainder = originalNum % 10;
        int rem=1;
        for(int i=1;i<=count;i++){
            rem=rem*remainder;
        }
        result+=rem;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }
   // System.out.println("result "+result);
    if (result == num)
        System.out.println("Armstrong number.");
    else
        System.out.println("Not an Armstrong number.");

		
	}
}



					//OR(using Math.pow(); )
					
					
import java.util.*;
import java.lang.*;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Enter number to check if it is armstrong or not");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int num=n;
		int count = 0;
		for (; n != 0; n /= 10, ++count) { }
		//System.out.println("digits :"+ count);
		int originalNum = num;
		int result=0;
        
    while (originalNum != 0) {
       // remainder contains the last digit
        int remainder = originalNum % 10;
        
        result+=(new Double(Math.pow(remainder,count))).longValue();
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }
   // System.out.println("result "+result);
    if (result == num)
        System.out.println("Armstrong number.");
    else
        System.out.println("Not an Armstrong number.");

		
	}
}
