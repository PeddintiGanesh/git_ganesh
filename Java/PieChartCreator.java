import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;
import java.util.List;

public class PieChartCreator extends JFrame {

    private JTextField titleField;
    private JTextField labelField;
    private JTextField valueField;
    private JButton addButton;
    private JButton createButton;
    private JTextArea chartArea;
    private List<String> labels;
    private List<Double> values;

    public PieChartCreator() {
        labels = new ArrayList<>();
        values = new ArrayList<>();

        setLayout(new BorderLayout());

        JPanel inputPanel = new JPanel();
        inputPanel.setLayout(new GridLayout(3, 2));

        JLabel titleLabel = new JLabel("Title:");
        titleField = new JTextField();
        inputPanel.add(titleLabel);
        inputPanel.add(titleField);

        JLabel labelLabel = new JLabel("Label:");
        labelField = new JTextField();
        inputPanel.add(labelLabel);
        inputPanel.add(labelField);

        JLabel valueLabel = new JLabel("Value:");
        valueField = new JTextField();
        inputPanel.add(valueLabel);
        inputPanel.add(valueField);

        addButton = new JButton("Add Slice");
        addButton.addActionListener(new AddButtonListener());
        inputPanel.add(addButton);

        createButton = new JButton("Create Chart");
        createButton.addActionListener(new CreateButtonListener());
        inputPanel.add(createButton);

        add(inputPanel, BorderLayout.NORTH);

        chartArea = new JTextArea();
        chartArea.setEditable(false);
        add(new JScrollPane(chartArea), BorderLayout.CENTER);

        setSize(400, 300);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
    }

    private class AddButtonListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            String label = labelField.getText();
            double value = Double.parseDouble(valueField.getText());
            labels.add(label);
            values.add(value);
            labelField.setText("");
            valueField.setText("");
        }
    }

    private class CreateButtonListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            String title = titleField.getText();
            chartArea.setText("Pie Chart: " + title + "\n");
            for (int i = 0; i < labels.size(); i++) {
                chartArea.append(labels.get(i) + ": " + values.get(i) + "\n");
            }
            // You can use a library like JFreeChart to create a real pie chart
            // For simplicity, this program just displays the data in a text area
        }
    }

    public static void main(String[] args) {
        new PieChartCreator();
    }
}