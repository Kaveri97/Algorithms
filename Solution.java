import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int n,sumd = 0, sumo = 0, d;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        int a;
        for(int i=0; i<3;i++){
            for(int j=0;j<3;j++){
                a = scan.nextInt();
                if(i==j){
                    sumd += a;
                }
                if(i+j==(n-1)){
                    sumo += a;
                }
            }
        }
        d = (sumd - sumo);
        if (d<0)
            d = d*-1;
        System.out.println(d);
    }
}