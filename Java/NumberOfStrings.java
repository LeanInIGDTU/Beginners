/*
 * Given 3 characters a, b, c. Find the number of strings of length n that can be formed from these 3 characters.
 *Given that : we can use ‘a’ as many times as we want, ‘b’ maximum once, and ‘c’ maximum twice.
 */
import java.util.*;
public class NumberOfStrings {
    public static void main(String args[])
    { Scanner sc= new Scanner(System.in);
      int n,t;
      int count;
      t=sc.nextInt();
      while(t>0)
      { t--;
        n=sc.nextInt();
      count=0;
      count+=1+2*n;
      count+=(3*n*(n-1))/2;
      count+=(n*(n-1)*(n-2))/2;
       System.out.println(count);
      }
     
    }
}
