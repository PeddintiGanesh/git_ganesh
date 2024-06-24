/*
 * OUTPUT : Enter any string : ganesh
            The encrypted data is : tzmvhs
 */


//import java.io.*;
import java.util.*;

public class SubstitutionCipher {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a = "abcdefghijklmnopqrstuvwxyz";
		String b = "zyxwvutsrqponmlkjihgfedcba";
		System.out.print("Enter any string : ");
		String str = sc.nextLine();
		String estr = "";
		char c;
		for (int i = 0; i < str.length(); i++) {
			c = str.charAt(i);
			int j = a.indexOf(c);
			estr += b.charAt(j);
		}
		System.out.println("The encrypted data is : " + estr);
		sc.close();
	}
}