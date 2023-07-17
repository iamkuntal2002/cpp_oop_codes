class Superclass {
    public void printMessage() {
        System.out.println("This is a superclass method.");
    }
}

class Subclass extends Superclass {
    // This is NOT a valid method override since it is static.
    // Compilation error will occur.
    public static void printMessage() {
        System.out.println("This is a subclass method.");
    }
}

public class Main {
    public static void main(String[] args) {
        Subclass subclass = new Subclass();
        subclass.printMessage(); // This will call the static method in Subclass, not the superclass method.
    }
}
