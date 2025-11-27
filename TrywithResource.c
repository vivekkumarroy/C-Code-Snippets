import java.lang.AutoCloseable;
class Dog implements AutoCloseable {
    public void close() throws Exception {
        System.out.println("Dog1 is sleeping");
    }
}

class Cow implements AutoCloseable {
    public void close() throws Exception {
        System.out.println("Cow2 is sleeping");
    }
}

class Cat implements AutoCloseable {
    public void close() throws Exception {
        System.out.println("Cat3 is sleeping");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog d = new Dog();
        Cow co = new Cow();
        Cat ca = new Cat();
         
        try (ca) {
             ca = new Cat();
            System.out.println("hi animals you r sleeping??");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}