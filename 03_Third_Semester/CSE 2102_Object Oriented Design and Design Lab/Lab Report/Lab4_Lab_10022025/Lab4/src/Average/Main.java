package Average;

import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Pleas! Enter the Array size:");
        int size = sc.nextInt();
        
        int[] array = new int[size];
        
        for(int i=0; i<size ; i++ ){
            array[i] = sc.nextInt();
        }
        
        int sum=0;
        
        for(int i=1; i<size-1 ; i++){
                sum=sum+array[i];
        }
        
        float average = (float)sum/(size-2);
        
        System.out.println("Average of is-->" + average );
    }
}
