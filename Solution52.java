import java.util.*;
public class Solution52 {
       
          static void partition(int[] ar) {
              int l = ar.length - 1;
              int x = ar[0];
              int i = -1;
              int temp;
              for( int j=1; j<l; j++){
                  if(ar[j] <= x){
                      i++;
                      temp = ar[i];
                      ar[i] = ar[j];
                      ar[j] = temp;
                  }
              }
              for(int k=0; k<=i+1;k++){
                  if(ar[k]>x){
                      for(int m=i+1; m<=l;m++){
                          if(ar[m]<x){
                              int t = ar[k];
                              ar[k] = ar[m];
                              ar[m] = t;
                              break;
                          }
                      }
                  }
              }
              printArray(ar);
       }   
 
 static void printArray(int[] ar) {
         for(int n: ar){
            System.out.print(n+" ");
         }
           System.out.println("");
      }
       
      public static void main(String[] args) {
           Scanner in = new Scanner(System.in);
           int n = in.nextInt();
           int[] ar = new int[n];
           for(int i=0;i<n;i++){
              ar[i]=in.nextInt(); 
           }
           partition(ar);
       }    
   }
