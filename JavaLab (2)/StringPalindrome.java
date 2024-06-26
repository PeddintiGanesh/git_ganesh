/*
 * Java Program to check whether the given string is palindrome or not. 
   (Ex: - “abba”, “liril”, “eye”, “madam”, “level”, “radar”, “mom”, “refer”, ….)
 */

 import java.util.Scanner;

 /**
  * StringPalindrome
  */
 public class StringPalindrome {
 
     public static void main(String arg[]) {
         String str, rev = "";
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter a string: ");
         str = sc.nextLine();
 
         for (int i = str.length() - 1; i >= 0; i--) {
             rev = rev + str.charAt(i);
         }
         System.out.println("Reverse String: " + rev);
         if (str.equals(rev))
             System.out.println(str + "is a Palindrome ");
         else
             System.out.println(str + "is not a palindrome");
         sc.close();
     }
 }