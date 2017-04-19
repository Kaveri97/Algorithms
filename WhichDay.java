import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class WhichDay
{
	public String getDay(String[] notOnThisDay)
	{
		int[] a = new int[7];
		String[] s = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
		int i=0;
		for(;i<7;i++)
			a[i] = 0;
		for(i=0;i<7;i++){
			if(Arrays.asList(notOnThisDay).contains(s[i]))
			a[i]=1;
		}
		 int j;
		 for(j=0;j<7;j++)
		 	if(a[j]==0)
		 		break;
		return s[j];
	}
}

