
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class BackJun1 {

    public static void main(String[] args) throws Exception{
        String n;
        int sum = 0;

//        Scanner scan = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = br.readLine();

        char[] test = new char[n.length()];
        char[] arr = n.toCharArray();
        if (n.indexOf('0') == -1) {
            System.out.println("-1");
            return;
        }
        for (int i = 0; i < n.length(); i++) {
            sum += arr[i];
        }
        if (sum % 3 != 0) {
            System.out.println("-1");
            return;
        } else {
            Arrays.sort(arr);
            int t=n.length()-1;
            for(char ch : arr){
                test[t--] = ch;
            }
            System.out.println(test);
        }
    }
}
