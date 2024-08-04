import java.applet.Applet;
import java.awt.TextArea;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class FileDisplayApplet extends Applet {
  private TextArea textArea;

  public void init() {
    textArea = new TextArea(20, 40);
    add(textArea);
  }

  public void start() {
    String fileName = "example.txt"; // replace with the file you want to display
    File file = new File(fileName);
    try {
      Scanner scanner = new Scanner(file);
      while (scanner.hasNextLine()) {
        textArea.append(scanner.nextLine() + "\n");
      }
      scanner.close();
    } catch (FileNotFoundException e) {
      textArea.setText("File not found: " + fileName);
    }
  }
}

/*
 * Run Cmd : appletviewer TextFileApplet.java
 */
