import java.util.Scanner;
import java.io.*;

class WordCountInFile {
    public static void main(String args[]) throws IOException {
        int nl = 1, nw = 0; //nc = 0;
        char ch;
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter File name: ");
        str = sc.nextLine();
        FileInputStream f = new FileInputStream(str);
        int n = f.available();
        System.out.println("Contents of the file: -\n");
        for (int i = 0; i < n; i++) {
            ch = (char) f.read();
            System.out.print(ch);
            if (ch == '\n')
                nl++;
            else if (ch == ' ')
                nw++;
        }
        System.out.println("\nNumber of lines : " + nl);
        System.out.println("Number of words : " + (nl + nw));
        System.out.println("Number of characters : " + n);
        sc.close();
        f.close();
    }
}
