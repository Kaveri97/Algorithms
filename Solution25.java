import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution25 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a[][] = new int[6][6];
        int[] sum = new int [16];
        for(int i=0; i < 6; i++){
            for(int j=0; j < 6; j++){
                a[i][j] = in.nextInt();
            }
        }
        int m = 0;
        for(int k=0; k<4; k++){
            for(int l=0; l<4; l++){
                sum[m++] = a[k][l] + a[k][l+1] + a[k][l+2] + a[k+1][l+1] + a[k+2][l] + a[k+2][l+1] + a[k+2][l+2];
            }
        }
        int big = sum[0];
        for(int n=1; n<16; n++){
            if(big<sum[n])
                big = sum[n];
        }
        System.out.println(big);
    }
}
