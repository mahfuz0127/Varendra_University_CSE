import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class JavaFXApplication2 extends Application {

    private TextField display = new TextField();
    private String operator = "";
    private double num1 = 0;
    private boolean start = true;

    @Override
    public void start(Stage stage) {
        display.setAlignment(Pos.CENTER_RIGHT);
        display.setEditable(false);
        display.setStyle("-fx-font-size: 20px;");

        GridPane grid = createButtonGrid();

        VBox root = new VBox(10, display, grid);
        root.setPadding(new Insets(20));
        root.setStyle("-fx-background-color: #f5f5f5;");
        Scene scene = new Scene(root, 300, 400);

        stage.setTitle("JavaFX Calculator");
        stage.setScene(scene);
        stage.show();
    }

    private GridPane createButtonGrid() {
        GridPane grid = new GridPane();
        grid.setHgap(10);
        grid.setVgap(10);

        String[][] buttons = {
            {"7", "8", "9", "/"},
            {"4", "5", "6", "*"},
            {"1", "2", "3", "-"},
            {"0", "C", "=", "+"}
        };

        for (int row = 0; row < buttons.length; row++) {
            for (int col = 0; col < buttons[row].length; col++) {
                String text = buttons[row][col];
                Button btn = new Button(text);
                btn.setPrefSize(60, 60);
                btn.setStyle("-fx-font-size: 18px;");
                btn.setOnAction(e -> handleButton(text));
                grid.add(btn, col, row);
            }
        }

        return grid;
    }

    private void handleButton(String text) {
        switch (text) {
            case "C":
                display.clear();
                operator = "";
                num1 = 0;
                start = true;
                break;
            case "=":
                if (operator.isEmpty() || display.getText().isEmpty()) return;
                double num2 = Double.parseDouble(display.getText());
                double result = calculate(num1, num2, operator);
                display.setText(String.valueOf(result));
                operator = "";
                start = true;
                break;
            case "+": case "-": case "*": case "/":
                if (!display.getText().isEmpty()) {
                    num1 = Double.parseDouble(display.getText());
                    operator = text;
                    display.clear();
                }
                break;
            default: // Number
                if (start) {
                    display.clear();
                    start = false;
                }
                display.appendText(text);
                break;
        }
    }

    private double calculate(double a, double b, String op) {
        return switch (op) {
            case "+" -> a + b;
            case "-" -> a - b;
            case "*" -> a * b;
            case "/" -> b != 0 ? a / b : 0;
            default -> 0;
        };
    }

    public static void main(String[] args) {
        launch();
    }
}
