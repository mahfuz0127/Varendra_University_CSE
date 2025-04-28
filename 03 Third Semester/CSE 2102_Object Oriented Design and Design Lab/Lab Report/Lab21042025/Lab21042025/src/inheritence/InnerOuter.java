package inheritence;

class OuterClass{
    int a=1;
    
    class InnerClass{
        int b=2;
    }
}

public class InnerOuter {
    public static void main(String[] args) {
        OuterClass ObO = new OuterClass();
        
        OuterClass.InnerClass ObI= ObO.new InnerClass();
        
        System.out.println("The sum is " + (ObI.b+ObO.a));
    }
}
