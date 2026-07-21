package SumOfPrime;

public class Main {
    public static boolean isPrime(int num){
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {     
        int[] array = new int[20];
        
        for(int i=0; i<20 ; i++ ){
            array[i]=i;
        }
        
        int sum=2;
        
        for(int i=1; i<20 ; i=i+2){
            if(isPrime(array[i])){
                sum=sum+array[i];
            }
        }
        
        System.out.println("Sum of PRIME number is-->" + sum );
    }
}
