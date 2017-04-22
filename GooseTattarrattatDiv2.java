import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class GooseTattarrattatDiv2
{
	public int getmin(String s)
	{
		int i,j,sum=0;
		ArrayList<Character> al = new ArrayList<Character>();
		for(i=0; i<s.length();i++){
			if(!al.contains(s.charAt(i)))
				al.add(s.charAt(i));
		}
		int[] a = new int[al.size()];
		for(i=0;i<al.size();i++){
			a[i] = 0;
			for(j=0;j<s.length();j++){
				if(al.get(i)==s.charAt(j))
					a[i]++;
			}
		}
		Arrays.sort(a);
		for(i=0;i<a.length-1;i++)
			sum += a[i];
			
		return sum;
	}
	

}
