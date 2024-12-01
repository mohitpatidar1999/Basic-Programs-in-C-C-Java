import java.util.*;
public class Main
{
    static int fibonacci(int n){
        if(n<=1) return n;
        else return fibonacci(n-1)+fibonacci(n-2);
    }
	public static void main(String[] args) {
		System.out.println("Enter how many digit you want to print of fibonacci series");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		System.out.print(fibonacci(i)+" ");
	}
}

// OR


import java.util.*;
public class Main
{
    static int a=0,b=1,c;
    static void fibonacci(int n){
        
        if(n>0){
            c=a+b;
            System.out.print(c+" ");
            a=b;
            b=c;
            fibonacci(n-1);
        }
    }
	public static void main(String[] args) {
		System.out.println("Enter how many numbers you want of fibonacci series");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		System.out.print("0 "+"1 ");
		fibonacci(n-2);
	}
} 
