// Using for values : paintComponent()


import javax.swing.*;
import java.awt.*;
import java.awt.geom.Arc2D;

public class PieChart extends JPanel {

    //@Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;

        double[] values = {25, 30, 45};
        Color[] colors = {Color.RED, Color.BLUE, Color.GREEN};

        int startAngle = 0;
        for (int i = 0; i < values.length; i++) {
            double angle = values[i] * 3.6; // convert to degrees
            g2d.setColor(colors[i]);
            g2d.fill(new Arc2D.Double(50, 50, 200, 200, startAngle, angle, Arc2D.PIE));
            startAngle += angle;
        }
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Pie Chart");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(new PieChart());
        frame.setSize(500, 500);
        frame.setVisible(true);
    }
}