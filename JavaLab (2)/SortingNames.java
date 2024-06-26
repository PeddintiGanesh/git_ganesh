/*
 * Java Program to "sort given list of names in alphabetical order".
 */

//1) Static input :

/*
public class SortingNames {
    public static void main(String[] args) {
        String[] names = { "John", "Alice", "Bob", "Eve", "Charlie" };
        java.util.Arrays.sort(names);
        for (String name : names) {
            System.out.println(name);
        }
    }
}
    */

//2) Using Collections and ArrayList

import java.util.*;

public class SortingNames {

    public static void main(String[] args) {
        ArrayList<String> names = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of names:");
        int n = sc.nextInt();
        System.out.println("Enter the names:");
        for (int i = 0; i < n; i++) {
            names.add(sc.next());
        }
        Collections.sort(names);
        //Collections.sort(names, String.CASE_INSENSITIVE_ORDER);
        System.out.println("Sorted names are:");
        for (String name : names) {
            System.out.println(name);
            sc.close();
        }
    }
}
