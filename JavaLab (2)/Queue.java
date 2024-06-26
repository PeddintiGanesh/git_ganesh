import java.util.Scanner;
import java.lang.Exception;

class QueueOverFlowException extends Exception {
}

class QueueUnderFlowException extends Exception {
}

class Queue {
    int n = 5; // Maximum size of the queue.
    int[] q = new int[n];
    int front = -1;
    int rear = -1;

    void enqueue(int e) throws QueueOverFlowException {
        if (rear == n - 1)
            throw new QueueOverFlowException();
        else {
            rear++;
            q[rear] = e;
            System.out.println("Element Inserted");
        }
    }

    void dequeue() throws QueueUnderFlowException {
        if (front >= rear)
            throw new QueueUnderFlowException();
        else {
            front++;
            int e = q[front];
            System.out.println("Element deleted from queue is : " + e);
        }
    }

    void display() {
        if (front == rear) {
            System.out.println("Queue is empty");
            return;
        } else {
            System.out.println("Elements qe : ");
            for (int i = front + 1; i <= rear; i++)
                System.out.print(q[i] + " ");
            System.out.println();
        }
    }
}

class QDemo {
    public static void main(String qgs[]) {
        Scanner sc = new Scanner(System.in);
        Queue x = new Queue();
        System.out.println("1: Inserting element to queue(enqueue)");
        System.out.println("2: Deleting element from queue(dequeue)");
        System.out.println("3: Display all the elements of queue");
        System.out.println("4: Exit");
        int ch;
        do {
            System.out.println("Enter your choice : ");
            ch = sc.nextInt();
            switch (ch) {
                case 1:
                    System.out.println("enter element to be inserted:");
                    int item = sc.nextInt();
                    try {
                        x.enqueue(item);
                    } catch (QueueOverFlowException e) {
                        System.out.println("Queue is Overflow Not possible to insert new element into the queue");
                    }
                    break;
                case 2:
                    try {
                        x.dequeue();
                    } catch (QueueUnderFlowException e) {
                        System.out.println("Queue is Underflow Not possible to perform delete operation");
                    }
                    break;
                case 3:
                    x.display();
                    break;
                case 4:
                    System.out.println("The End");
                    break;
                default:
                    System.out.println("Invalid choice");
                    sc.close();
            }
        } while (ch != 4);
    }
}
