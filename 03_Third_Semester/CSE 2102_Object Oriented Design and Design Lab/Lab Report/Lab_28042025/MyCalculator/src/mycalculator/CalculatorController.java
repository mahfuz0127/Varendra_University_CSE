package mycalculator;

import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;

public class CalculatorController {

    @FXML private TextField display;

    private double num1 = 0;
    private String operator = "";
    private boolean start = true;

    @FXML
    private void handleNumber(javafx.event.ActionEvent event) {
        String value = ((Button) event.getSource()).getText();
        if (start) {
            display.clear();
            start = false;
        }
        display.appendText(value);
    }

    @FXML
    private void handleOperator(javafx.event.ActionEvent event) {
        String value = ((Button) event.getSource()).getText();

        if (!value.equals("=")) {
            if (!operator.isEmpty()) return;

            operator = value;
            num1 = Double.parseDouble(display.getText());
            display.clear();
        } else {
            if (operator.isEmpty()) return;

            double num2 = Double.parseDouble(display.getText());
            double result = switch (operator) {
                case "+" -> num1 + num2;
                case "-" -> num1 - num2;
                case "*" -> num1 * num2;
                case "/" -> num2 != 0 ? num1 / num2 : 0;
                default -> 0;
            };
            display.setText(String.valueOf(result));
            operator = "";
            start = true;
        }
    }

    @FXML
    private void handleClear() {
        display.clear();
        operator = "";
        num1 = 0;
        start = true;
    }
}
