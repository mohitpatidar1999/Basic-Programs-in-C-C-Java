import java.util.*;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Enter any string");
		Scanner sc = new Scanner(System.in);
		String s=sc.next();
		char []a=s.toCharArray();
		Arrays.sort(a);
		
		String st=new String(a);
	    System.out.println("Sorted string is: "+st);
	}
}

					//OR
					
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Enter any string");
		Scanner sc = new Scanner(System.in);
		String s=sc.next();
		char []a=s.toCharArray();
		for(int i=0;i<a.length-1;i++){
		    for(int j=i+1;j<a.length-1;j++){
		        if(a[i]>a[j]){
		        char t=a[i];
		        a[i]=a[j];
		        a[j]=t;
		        }
		    }
		}
		String st = new String(a);
	    System.out.println("Sorted string is: "+st);
	}
}
