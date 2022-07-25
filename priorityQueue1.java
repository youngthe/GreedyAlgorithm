
import java.io.*;
import java.nio.Buffer;
import java.util.*;
class Main {
    private static final BufferedReader br = new BufferedReader((new InputStreamReader(System.in)));

    public static void main(String[] args) throws IOException {


        ArrayList arrayList = new ArrayList();
        PriorityQueue<Integer> queue = new PriorityQueue<>(Comparator.comparingInt(x -> x));
        int n = Integer.parseInt(br.readLine());
        int temp;

        for (int i = 0; i < n; i++) {
            temp = Integer.parseInt(br.readLine());
            if (temp == 0) {
                if (queue.isEmpty())
                    System.out.println("0");
                else {
                    System.out.println(queue.poll());
                }
            }else{
                queue.add(temp);
            }
        }
    }
}
