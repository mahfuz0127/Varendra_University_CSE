package SumOfIndexNumber;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Pleas! Enter the Array size:");
        int size = sc.nextInt();
        
        int[] array1 = new int[size];
        int[] array2 = new int[size];
        int[] array3 = new int[size];
        
        System.out.print("Enter first array element--> ");
        for(int i=0; i<size ; i++ ){
            array1[i] = sc.nextInt();
        }
        
        System.out.print("Enter Second array element--> ");
        for(int i=0; i<size ; i++ ){
            array2[i] = sc.nextInt();
        }
        
        System.out.print("Sum of array element--> ");
        for(int i=0; i<size ; i++){
            array3[i]=array1[i]+array2[i];
            System.out.print(array3[i] + " " );
        }
        
    }
}
