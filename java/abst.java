abstract class Test{
    //can contain both abstract and non-abstract methods, but if it is abstract then it must not specify a body
    abstract public void fun1();
    public void fun2(){
        System.out.println("test fun");
    }
}
interface in1{
    //by def all the methods are abstract, we cannot specify a body in an interface
    public void fun1();
    // public void fun2(){
    //     System.out.println("interface fun2");
    // }
}
class Derived extends Test{
    public void fun1(){
        System.out.println("derived fun1");
    }
}
class Derived2 implements in1{
    public void fun1(){
        System.out.println("derived2 fun1");
    }
}
public class abst {
    public static void main(String[] args) {
        Derived d1 = new Derived();
        Derived2 d2 = new Derived2();
        d1.fun1();
        d2.fun1();
    }
}
