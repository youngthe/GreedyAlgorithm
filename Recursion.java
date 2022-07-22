/*
재귀함수... 함수 안에서 함수를 호출하는식인데
함수 인자값으로 시작점과 끝점을 지정해주는 것이 중요하다.
시작값이 끝값과 일치할 때 자기 함수를 호출하는 것을 중지하고
호출되었던 함수중 제일 마지막에 호출되었던 함수부터 종료된다.
 */
import java.io.*;
import java.nio.Buffer;
import java.util.*;
class Recusion {


    public static void main(String[] args) throws IOException {

        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        System.out.println("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.");
            re(0, n);

    }

    public static void re(int i, int num){
        String underbar="";
        for(int t = 0;t<i;t++){
            underbar+="____";
        }
            if(i==num){
                System.out.println(underbar+"\"재귀함수가 뭔가요?\"");
                System.out.println(underbar+"\"재귀함수는 자기 자신을 호출하는 함수라네\"");
            }else{
                System.out.println(underbar+"\"재귀함수가 뭔가요?\"");
                System.out.println(underbar+"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.");
                System.out.println(underbar+"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.");
                System.out.println(underbar+"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"");
                re(i+1, num);
            }
            System.out.println(underbar+"라고 답변하였지.");
    }
}
