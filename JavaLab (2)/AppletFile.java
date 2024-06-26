import java.applet.*;
import java.awt.*;
import java.io.*;

/* <applet code="P10.class" height="300" width="500"> </applet> */
@SuppressWarnings("removal")
public class AppletFile extends Applet {
    String content = "";

    public void init() {
        try {
            char ch;
            StringBuffer buff = new StringBuffer("");
            FileInputStream fis = new FileInputStream("Aditya.txt");
            while (fis.available() != 0) {
                ch = (char) fis.read();
                buff.append(ch);
            }
            fis.close();
            content = new String(buff);
        } catch (FileNotFoundException e) {
            content = "Cannot find the specified file...";
        } catch (IOException i) {
            content = "Cannot read from the file...";
        }
    }

    public void paint(Graphics g) {
        Font f = new Font("Courier", Font.PLAIN, 30);
        g.setFont(f);
        g.drawString(content, 50, 50);
    }
}


/*
 * Run Cmd : appletviewer TextFileApplet.java
 */