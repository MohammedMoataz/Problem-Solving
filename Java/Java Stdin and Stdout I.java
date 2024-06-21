import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        while (scan.hasNext()) {
            if (scan.hasNextInt()) {
                int num = scan.nextInt();
                System.out.println(num);

            } else {
                String ch = scan.next();
                System.out.println(ch);
            }
        }
    }
}