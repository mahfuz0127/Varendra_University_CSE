package SumOfOdd;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Pleas! Enter the Array size:");
        int size = sc.nextInt();
        
        int[] array = new int[size];
        
        for(int i=0; i<size ; i++ ){
            array[i]=i;
        }
        
        int sum=0;
        
        for(int i=0; i<size ; i++){
            if(array[i]%2!=0){
                sum=sum+array[i];
            }
        }
        
        System.out.println("Sum of Odd number is-->" + sum );
    }
    
}
