package ReverseElements;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Pleass! Enter the Array size:");
        int size = sc.nextInt();
        
        int[] array = new int[size];
        
        for(int i=0; i<size ; i++ ){
            array[i]=i;
        }
        
        System.out.print("Array normal order: ");
        for(int i=0; i<size ; i++ ){
            System.out.print(array[i] + " ,");
        }
        
        int temp;
        
        for(int i=0; i<size/2 ; i++ ){
            temp=array[i];
            array[i]=array[size-i-1];
            array[size-i-1]=temp;
        }
        
        System.out.println();
        
        System.out.print("Array Reverse order: ");
        for(int i=0; i<size ; i++ ){
            System.out.print(array[i] + " ,");
        }
        
    }
}
