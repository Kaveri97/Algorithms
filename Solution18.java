import java.io.*;
import java.util.*;

public class Solution18 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int pc=0,nc=0,zc=0;
        double n;
        double pf,nf,zf;
        Scanner scan = new Scanner(System.in);
        n = scan.nextDouble();
        int j=(int) n;
        int[] a = new int[j];
        for(int i=0; i<j; i++){
            a[i] = scan.nextInt();
            if(a[i]>0) 
                pc++;
            else if(a[i]<0)
                nc++;
            else
                zc++;
        }
        pf = pc/n;
        nf = nc/n;
        zf = zc/n;
        System.out.format("%.5f\n",pf);
        System.out.format("%.5f\n",nf);
        System.out.format("%.5f\n",zf);
   }
}