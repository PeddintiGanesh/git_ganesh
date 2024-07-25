import java.util.Scanner;

class QueueException extends Exception {
    public QueueException(String message) {
        super(message);
    }
}

class Queue1 {
    private int[] queue;
    private int front, rear, size, capacity;

    public Queue1(int capacity) {
        this.capacity = capacity;
        queue = new int[capacity];
        front = rear = size = 0;
    }

    // Add element to the queue
    public void enqueue(int element) throws QueueException {
        if (isFull()) {
            throw new QueueException("Queue is full");
        }
        queue[rear] = element;
        rear = (rear + 1) % queue.length;
        size++;
    }

    // Remove element from the queue
    public int dequeue() throws QueueException {
        if (isEmpty()) {
            throw new QueueException("Queue is empty");
        }
        int element = queue[front];
        front = (front + 1) % queue.length;
        size--;
        return element;
    }

    // Check if queue is empty
    public boolean isEmpty() {
        return size == 0;
    }

    // Check if queue is full
    public boolean isFull() {
        return size == capacity;
    }

    // Display queue elements
    public void display() {
        System.out.print("Queue elements: ");
        for (int i = 0; i < size; i++) {
            System.out.print(queue[(front + i) % queue.length] + " ");
        }
        System.out.println();
    }
}

public class QueueDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter queue capacity: ");
        int capacity = sc.nextInt();
        Queue1 queue = new Queue1(capacity);

        while (true) {
            System.out.println("1. Enqueue");
            System.out.println("2. Dequeue");
            System.out.println("3. Display");
            System.out.println("4. Exit");
            System.out.print("Choose an option: ");
            int option = sc.nextInt();

            try {
                switch (option) {
                    case 1:
                        System.out.print("Enter element to enqueue: ");
                        int element = sc.nextInt();
                        queue.enqueue(element);
                        break;
                    case 2:
                        System.out.println("Dequeued element: " + queue.dequeue());
                        break;
                    case 3:
                        queue.display();
                        break;
                    case 4:
                        System.exit(0);
                    default:
                        System.out.println("Invalid option. Please choose a valid option.");
                }
            } catch (QueueException e) {
                System.out.println("Exception caught: " + e.getMessage());
                sc.close();
            }
        }
    }
}
