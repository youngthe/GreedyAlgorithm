
import java.io.*;
import java.nio.Buffer;
import java.util.*;
class Main {


    public static void main(String[] args) throws IOException {

        PriorityQueue<Integer> priorityQueueLowest = new PriorityQueue<>();

        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int a, b, temp;
        int total = 0;
        for(int i=0;i<n;i++){
            temp = scan.nextInt();
            priorityQueueLowest.add(temp);
        }

        while(priorityQueueLowest.size() != 1){
            a = priorityQueueLowest.poll();
            b = priorityQueueLowest.poll();
            total += a+b;
            priorityQueueLowest.add(a+b);
        }
        System.out.println(total);

    }

}
