import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution53 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m;
        int newGrade;
        for(int a0 = 0; a0 < n; a0++){
            int grade = in.nextInt();
            m = 5-grade%5;
            newGrade = grade + m;
            if((newGrade - grade)<3 && grade>=38)
                grade = newGrade;
            System.out.println(grade);
        }
    }
}
