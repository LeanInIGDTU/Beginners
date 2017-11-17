/*
 Given a 2D matrix, print all elements of the given matrix in diagonal order. 
 */

import java.io.*;
import java.util.*;

public class diagonalMatrix {
    static int min(int a,int b)
    {
        return a>b?b:a;
    }
    static int max(int a,int b)
    {
        return a>b?a:b;
    }
    public static void main(String[] args) {
       Scanner sc= new Scanner(System.in);
        int m,n,start_col,count,j,i,line;
        m=sc.nextInt();
        n=sc.nextInt();
        int arr[][]= new int[m][n];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                arr[i][j]=sc.nextInt();
        for(line=1;line<=(m+n-1);line++)
        {
            start_col=max(0,(line-n));
            count=min(line,(m-start_col));
            for(j=0;j<count;j++)
                System.out.print(arr[min(line,n)-j-1][start_col+j]+" ");
           System.out.println();    
        }
    }
}
