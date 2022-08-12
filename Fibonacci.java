
import java.io.*;
import java.nio.Buffer;
import java.util.*;
class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        long n = Integer.parseInt(br.readLine());
        System.out.println(Fibonacci(n));

    }

    public static long Fibonacci(long n){
        if(n == 0){
            return 0;
        }else if(n == 1) {
            return 1;
        }
        else{
            return Fibonacci(n - 1) + Fibonacci(n - 2);
        }
    }
}
