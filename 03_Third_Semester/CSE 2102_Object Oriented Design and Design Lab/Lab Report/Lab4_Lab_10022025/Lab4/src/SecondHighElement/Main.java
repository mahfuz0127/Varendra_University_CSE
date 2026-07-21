package SecondHighElement;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Pleass! Enter the Array size:");
        int size = sc.nextInt();
        
        int[] array = new int[size];
        
        for(int i=0; i<size ; i++ ){
            array[i] =sc.nextInt();
        }
        
        Arrays.sort(array);
        
        System.out.println("The Second Highest element is:" + array[size-2]);
    }
}
