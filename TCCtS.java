import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class FoxAndGame
{
	public int countStars(String[] result)
	{
		int i,j,count=0;
		for(i=0;i<result.length;i++){
			for(j=0;j<3;j++){
				if(result[i].charAt(j)=='o')
					count++;
			}
		}
		return count;
	}
	

}

