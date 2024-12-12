package test;

import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class Experiment12 extends JPanel {
    private boolean shape; // Determines the shape: square (true) or circle (false)
    private Color color; // Color of the area

    public Experiment12() {
        shape = false; // Default shape is square
        color = Color.RED; // Default color
        // Add mouse click listener to change color dynamically
        addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                color = getRandomColor();
                repaint();
            }
        });
    }

    public boolean isShape() {
        return shape;
    }

    public void setShape(boolean shape) {
        this.shape = shape;
        repaint();
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        int width = getWidth();
        int height = getHeight();
        g.setColor(color);
        if (shape) {
            g.fillRect(10, 10, width - 20, height - 20); // Draw square
        } else {
            g.fillOval(10, 10, width - 20, height - 20); // Draw circle
        }
    }

    private Color getRandomColor() {
        // Generate a random color
        int red = (int) (Math.random() * 256);
        int green = (int) (Math.random() * 256);
        int blue = (int) (Math.random() * 256);
        return new Color(red, green, blue);
    }

    public static void main(String[] args) {
        // For testing the bean
        JFrame frame = new JFrame();
        Experiment12 visualBean = new Experiment12();
        visualBean.setPreferredSize(new Dimension(200, 200));
        frame.add(visualBean);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
    }
}
