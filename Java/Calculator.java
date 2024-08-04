import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Calculator implements ActionListener {

    JFrame frame;
    JTextField textField;
    JButton[] numberButtons = new JButton[10];
    JButton[] operationButtons = new JButton[5];
    JPanel panel;
    double number1, number2, result;
    char operation;

    public Calculator() {
        frame = new JFrame("Simple Calculator");
        frame.setSize(200, 250);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        textField = new JTextField(16);
        textField.setEditable(false);

        panel = new JPanel();
        panel.setLayout(new GridLayout(4, 4));

        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new JButton(String.valueOf(i));
            numberButtons[i].addActionListener(this);
            panel.add(numberButtons[i]);
        }

        String[] operations = {"+", "-", "*", "/", "="};
        for (int i = 0; i < 5; i++) {
            operationButtons[i] = new JButton(operations[i]);
            operationButtons[i].addActionListener(this);
            panel.add(operationButtons[i]);
        }

        frame.getContentPane().add(textField, BorderLayout.NORTH);
        frame.getContentPane().add(panel, BorderLayout.CENTER);

        frame.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        for (int i = 0; i < 10; i++) {
            if (e.getSource() == numberButtons[i]) {
                textField.setText(textField.getText() + i);
            }
        }

        if (e.getSource() == operationButtons[0]) {
            number1 = Double.parseDouble(textField.getText());
            operation = '+';
            textField.setText("");
        } else if (e.getSource() == operationButtons[1]) {
            number1 = Double.parseDouble(textField.getText());
            operation = '-';
            textField.setText("");
        } else if (e.getSource() == operationButtons[2]) {
            number1 = Double.parseDouble(textField.getText());
            operation = '*';
            textField.setText("");
        } else if (e.getSource() == operationButtons[3]) {
            number1 = Double.parseDouble(textField.getText());
            operation = '/';
            textField.setText("");
        } else if (e.getSource() == operationButtons[4]) {
            number2 = Double.parseDouble(textField.getText());
            switch (operation) {
                case '+':
                    result = number1 + number2;
                    break;
                case '-':
                    result = number1 - number2;
                    break;
                case '*':
                    result = number1 * number2;
                    break;
                case '/':
                    result = number1 / number2;
                    break;
            }
            textField.setText(String.valueOf(result));
        }
    }

    public static void main(String[] args) {
        new Calculator();
    }
}