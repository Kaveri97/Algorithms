import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;
	// Add your code here
    public int diff;
    public int maxDiff = 0;
    
    Difference(int[] c){
    elements = c;
    }
    public void  computeDifference(){
    for (int i=0; i<elements.length; i++){
    for(int j=0; j<elements.length; j++){
        diff = Math.abs(elements[i] - elements[j]);
            if(maxDiff<diff){
            maxDiff = diff;
        }
    }
    }
        maximumDifference = maxDiff;
    }

} // End of Difference class

