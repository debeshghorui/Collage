// Base class (Parent)
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

// Derived class (Child)
class Dog extends Animal {
    void bark() {
        System.out.println("The dog barks.");
    }
}

public class InheritanceDemo {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.eat();  // Inherited method
        myDog.bark(); // Child class method
    }
}