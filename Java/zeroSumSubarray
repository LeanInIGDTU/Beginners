import java.util.*;
import java.lang.*;
import java.io.*;

class zeroSumSubarray{
	public static void main (String[] args) {
		Scanner scan;
		int T = scan.nextInt();
		for(int a=0;a<T;a++){
		    int N = scan.nextInt();
		    int arr[] = new int[N];
		    for(int i=0;i<N;i++){
		        arr[i] = scan.nextInt();
		    }
		    int count = 0;
		    for(int i=0;i<N;i++){
		        int sum = 0;
    		    for(int j=i;j<N;j++){
    		        sum += arr[j];
    		        if(sum == 0) count++;
    		    }
		    }
		    System.out.println(count);
		}
	}
}
