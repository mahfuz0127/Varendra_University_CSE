package SearchElement;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Pleas! Enter the Array size:");
        int size = sc.nextInt();
        
        int[] array = new int[size];
        
        for(int i=0; i<size ; i++ ){
            array[i]=i+6;
        }
        
        System.out.print("Pleas! Enter the Element you wont to Search:");
        int ele = sc.nextInt();
        
        boolean found = false;
        
        System.out.println("The element is have ");
        for(int i=0; i<size ; i++){
            if(ele==array[i]){
            System.out.println("index [" + i + "] ,");
            found = true;
            }
        }
        
        if(!found)System.out.println("NoWhere.");
       
    }
}
