import java.io.*;
import java.util.*;

public class Solution8 {
	//Viral Advertising
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int n,like=0,p=5;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        for(int i=1; i<=n; i++){
            like = like + (p/2);
            p = 3*(p/2);
        }
        System.out.println(like);
        
    }
}