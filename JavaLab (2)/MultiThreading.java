/*
 *  Thread Synchronization In Multithreading
 */

 class College {
    public synchronized void classRoom(String fn) {
        for (int i = 1; i < 5; i++) {
            System.out.println(i + " class taken by " + fn);
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
            }
        }
        System.out.println(fn + " task completed\n");
    }
}

class MyThread extends Thread {
    College c;
    String faculty;

    MyThread(College obj, String name) {
        c = obj;
        faculty = name;
    }

    public void run() {
        c.classRoom(faculty);
    }
}

class MultiThreading {
    public static void main(String args[]) {
        College x = new College();
        MyThread t1 = new MyThread(x, "Ganesh Sir");
        MyThread t2 = new MyThread(x, "Giri Sir");
        MyThread t3 = new MyThread(x, "Harris Sir");
        t1.start();
        t2.start();
        t3.start();
    }
}
