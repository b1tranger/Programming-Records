class Tmp {
void display(){
    System.out.println("Array Created\n");
}
}

public class Main {
    public static void main(String[] args) {
        Tmp[] A = new Tmp[10]; // Initialize the array with size 10
        for (int i = 0; i < 10; i++) {
            A[i] = new Tmp(); // Create a new Tmp object for each index
        }
for (int i = 0; i < 10; i++) {
            A[i].display();
        }
        System.out.println("Array initialized successfully!");
    }
}
