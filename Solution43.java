import java.io.*;
import java.util.*;
import java.util.Collections;
import java.util.regex.*;

public class Solution43 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        String email = "@gmail.com";
        Pattern pattern = Pattern.compile(email);
        List<String> list = new ArrayList();
        for (int i = 0; i < num; i++){
            String name = scanner.next();
            String email1 = scanner.next();
            Matcher matcher = pattern.matcher(email1);
            if (matcher.find()){
                list.add(name);
            }
        }
        Collections.sort(list);
        for (String name : list){
            System.out.println(name);
        }
    }
}