package lab303;

public class StringTest1 {
    public static void main(String[] args) {
        String s = "the quick brown fox jumps over the lazy dog."; 
        
        System.out.println("The length is: "+ s.length() );
        
        System.out.println("To Uper Case: " + s.toUpperCase() );
        
        System.out.println("The index : " + s.indexOf("quick") );
        
        String s1 = "My name is ";
        String s2 = "Mahfuz";
        System.out.println("The conact : " + s1.concat(s2) );
        
        System.out.println("The contains1 : " + s.contains("over") );
        System.out.println("The contains2 : " + s.contains("name") );
        
        String s3 = "My name is ";
        System.out.println("is equals : " + s1.equals(s2) );
        System.out.println("is equals2 : " + s1.equals(s3) );
        
        System.out.println("The index of : " + s1.indexOf("name") );
        
        String s4 = "";
        System.out.println("is Empty : " + s1.isEmpty() );
        System.out.println("is empty : " + s4.isEmpty() );
        
        String s5 = "        the quick brown fox jumps over the lazy dog.";
        System.out.println("Replace : " + s5.replace('n','s') );
        
        System.out.println("Replace : " + s5.trim() );
    }
}
//the quick brown fox jumps over the lazy dog.
/*
        lab report
charat 
concat
contains
equal
indexof
isempty
replace
splite
trim

*/