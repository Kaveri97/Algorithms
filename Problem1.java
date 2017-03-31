import java.io.*;
import java.util.*;
import java.lang.*;
//Write Word Quickly 
class Problem1
{
public static void main(String [] args){
Scanner in = new Scanner(System.in);
int N = in.nextInt();
for(int j=0;j<N;j++){
int sum=0;
int t = in.nextInt();
int[] a = new int[26];
for(int i=0;i<26;i++){
a[i] = in.nextInt();
}
String s = in.next();
int l = s.length();
int[] b = new int[l];
for(int i=0;i<l;i++)
{
b[i] = a[(int) s.charAt(i) - (int)'a'];
}
Arrays.sort(b);
for(int i=0;i<(l-t);i++){
sum = sum+b[i];
 
}
System.out.println(sum);
}
}
}
