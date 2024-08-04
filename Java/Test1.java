package mypack;

import java.util.Scanner;

public class Test1 {

    public static void main(String[] args) {
        //System.out.println("Welcome to pkgs");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number 2 vamles:");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = a + b;
        System.out.println("Sum of two numbers is:"+c);
        sc.close();

    }
}

/*
 * Syntax:- javac -d . <Filename.Java>
   Example: - javac -d . MyMath.java
 */

