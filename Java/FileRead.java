import java.io.File;
import java.util.Scanner;

public class FileRead {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a file name :");
        str = sc.nextLine();
        File f1 = new File(str);
        System.out.println("File Name: "+f1.getName());
        System.err.println("Absolute Path: "+f1.getAbsolutePath());
        System.out.println(f1.exists()?"File  exists":"File does not exist");
        System.out.println(f1.canRead()?"File is readable":"File is not readable");
        System.out.println(f1.canWrite()?"File is writable":"File is not writable");
        System.out.println(f1.isFile()? "File is a file": "File is not a file");
        System.out.println(f1.isDirectory()? "File is a directory": "File is not a directory");
        System.out.println("File size: "+f1.length()+"Bytes");
        sc.close();
    }
}
