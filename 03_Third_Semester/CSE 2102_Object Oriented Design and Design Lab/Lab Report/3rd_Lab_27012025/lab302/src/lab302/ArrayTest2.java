package lab302;

import java.util.Scanner;

public class ArrayTest2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        //simple array initialization from user input and print it
        int[] numbers = new int[5];
        
        //for input 
        for(int i=0; i<5 ; i++){
            numbers[i] = in.nextInt();
        }
        
        //for print 
        for(int i=0; i<5 ; i++){
            System.out.print(numbers[i]+"  ");
        }
    } 
}
