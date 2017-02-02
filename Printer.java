import java.util.*;

class Printer <T> {
	public void printArray( T[] a){
        int l = a.length;
        for(int i=0; i<l; i++)
            System.out.println(a[i]);
    }
}