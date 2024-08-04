import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        Fibonacci obj = new Fibonacci();
        int a, b, c;
        System.out.println("Enter the term number you want to find in the Fibonacci sequence: ");
        a = sc.nextInt();
        b = obj.fib_recursion(a);
        System.out.println("The " + a + "th Fibonacci term using recursion is: " + b);
        c = obj.fib_non_recursion(a);
        System.out.println("The " + a + "th Fibonacci term using non-recursion is: " + c);
        sc.close();
    }

    int fib_recursion(int n) {
        if (n == 1) {
            return 0;
        } else if (n == 2) {
            return 1;
        } else {
            return fib_recursion(n - 1) + fib_recursion(n - 2);
        }
    }

    int fib_non_recursion(int n) {
        if (n == 1) {
            return 0;
        } else if (n == 2) {
            return 1;
        } else {
            int a = 0;
            int b = 1;
            int c = 0;
            for (int i = 3; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
            return c;
        }
    }
}