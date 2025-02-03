package lab3;

public class ArrayTest1{
    public static void main(String[] args) {
        //simple array initialization and print it
        int[] numbers = new int[100];
        
        //for input 
        for(int i=0; i<100 ; i++){
            numbers[i]=i;
        }
        
        //for print 
        for(int i=0; i<100 ; i++){
            if(numbers[i]==5)continue;
            System.out.print(numbers[i]+" ");
            if(i%10==0)System.out.println();
        }
    } 
}
