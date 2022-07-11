import java.util.*;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Enter number to check whether it is prime or not");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
	    int c=0;
	    int flag=0;
	    for(int i=2;i<=n;i++){
	        if(n%i==0) c++;
	        if(c>=2){flag=1; break;}
	    }
	    if(flag==1) System.out.println("Not Prime");
	    else System.out.println("Prime");
	}
}

//OR

import java.util.Scanner;  
public class Main {  
   public static void main(String[] args) {  
       Scanner s = new Scanner(System.in);  
       System.out.print("Enter the first number : ");  
       int start = s.nextInt();  
       System.out.print("Enter the second number : ");  
       int end = s.nextInt();  
       System.out.println("List of prime numbers between " + start + " and " + end);  
       for (int i = start; i <= end; i++) {  
           if (isPrime(i)) {  
               System.out.println(i);  
           }  
       }  
   }  
   public static boolean isPrime(int n) {  
       if (n <= 1) {  
           return false;  
       }  
       for (int i = 2; i <= Math.sqrt(n); i++) {  
           if (n % i == 0) {  
               return false;  
           }  
       }  
       return true;  
   }  
}
