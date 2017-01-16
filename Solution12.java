import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Solution12 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double mealCost = scan.nextDouble(); // original meal price
        int tipPercent = scan.nextInt(); // tip percentage
        int taxPercent = scan.nextInt(); // tax percentage
        double tipP = mealCost*tipPercent/100;
        double taxP = mealCost*taxPercent/100;
        double total = mealCost + tipP + taxP;
        scan.close(); 
        int totalCost = (int) Math.round(total);
        System.out.println("The total meal cost is " +  totalCost + " dollars.");
    }
}