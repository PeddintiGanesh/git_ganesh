import javax.swing.*;
//import java.awt.*;
import java.awt.event.*;



public class MouseEventsHandler extends JPanel {

    public MouseEventsHandler() {
        // Add mouse listener
        addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                System.out.println("Mouse clicked at (" + e.getX() + ", " + e.getY() + ")");
            }

            @Override
            public void mousePressed(MouseEvent e) {
                System.out.println("Mouse pressed at (" + e.getX() + ", " + e.getY() + ")");
            }

            @Override
            public void mouseReleased(MouseEvent e) {
                System.out.println("Mouse released at (" + e.getX() + ", " + e.getY() + ")");
            }

            @Override
            public void mouseEntered(MouseEvent e) {
                System.out.println("Mouse entered at (" + e.getX() + ", " + e.getY() + ")");
            }

            @Override
            public void mouseExited(MouseEvent e) {
                System.out.println("Mouse exited at (" + e.getX() + ", " + e.getY() + ")");
            }
        });

        // Add mouse motion listener
        addMouseMotionListener(new MouseMotionAdapter() {
            @Override
            public void mouseDragged(MouseEvent e) {
                System.out.println("Mouse dragged at (" + e.getX() + ", " + e.getY() + ")");
            }

            @Override
            public void mouseMoved(MouseEvent e) {
                System.out.println("Mouse moved at (" + e.getX() + ", " + e.getY() + ")");
            }
        });
    }

    public static void main(String[] args) {
        // Create a new JFrame
        JFrame frame = new JFrame("Mouse Event Handler");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create a new instance of MouseEventHandler
        MouseEventsHandler handler = new MouseEventsHandler();

        // Add the handler to the frame
        frame.getContentPane().add(handler);

        // Set the size of the frame
        frame.setSize(400, 400);

        // Center the frame on the screen
        frame.setLocationRelativeTo(null);

        // Make the frame visible
        frame.setVisible(true);
    }
}
