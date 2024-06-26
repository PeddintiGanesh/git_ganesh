
/*
public class StringTokennizer {
    public static void main(String[] args) {
        String str = "Hello,World,Java,Programming";
        String[] tokens = str.split(",");
        for (String token : tokens) {
            System.out.println(token);
        }
    }

}*/

/**
 * StringTokennizer
 */
import java.util.Scanner;
import java.util.StringTokenizer;

public class StringTokennizer1 {

    public static void main(String[] args) {
        int n, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter some integers with one space gap: ");
        String str = sc.nextLine();
        StringTokenizer st = new StringTokenizer(str); // create a StringTokenizer object and pass the string as an
                                                       // argument
        System.out.println("Given integers are : ");
        while (st.hasMoreTokens()) {
            String temp = st.nextToken();
            n = Integer.parseInt(temp);
            System.out.println(n);
            sum = sum + n;
        }
        System.out.println("Sum of all integers :" + sum);
        sc.close();
    }
}