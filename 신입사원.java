
import java.io.BufferedReader;
import java.io.IOException;
import java.nio.Buffer;
import java.util.*;

public class BackJun1 {

    public static void main(String[] args){
        int case_n;
        int n;
        int temp = 0;
        int temp2 = 0;
        int cutline;
        int i, j;


        Scanner scan = new Scanner(System.in);
        case_n = scan.nextInt();
        int[] result = new int[case_n];

        for(i=0;i<case_n;i++){
            n = scan.nextInt();
            int[] test = new int[n];
            for(j=0;j<n;j++){
                temp = scan.nextInt();
                temp2 = scan.nextInt();
                test[temp-1] = temp2;
            }
            cutline=test[0];

            int count = 1;

            for(j=1;j<n;j++){
                if(cutline > test[j])
                {
                    cutline = test[j];
                    count++;
                }
            }
            result[i] = count;
        }
        for(i=0;i<case_n;i++){
            System.out.println(result[i]);
        }
        scan.close();
    }
}
