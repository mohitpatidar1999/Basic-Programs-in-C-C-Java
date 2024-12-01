import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    System.out.println("Enter how many numbers you want to enter");
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		System.out.println("Enter 1 to"+n+"numbers and make sure you leave feeding any one number between 1 to"+n);
	    int a[]=new int[n];
	    for(int i=0;i<n-1;i++){
	        a[i]=sc.nextInt();
	    }
	    int s1=(n*(n+1))/2;
	    int s2=0;
	    for(int i=0;i<n-1;i++){
	        s2+=a[i];
	    }
	    System.out.println("Haha i got the number what you did'nt enter it is...."+(s1-s2));
	    
	}
}
