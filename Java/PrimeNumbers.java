import java.util.Scanner;

public class PrimeNumbers {
    public static void main(String[] args) {
        int i, j, n, f;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of prime numbers you want to print: ");
        n = sc.nextInt();
        System.out.println("Prime Numbers upto " + n + " are");
        for (i = 2; i <= n; i++) {
            f = 0;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    f = 1;
                    break;
                }
            }
            if (f == 0) {
                System.out.println(i);
            }
        }
    }
}
