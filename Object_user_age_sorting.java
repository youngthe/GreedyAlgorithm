
import java.io.BufferedReader;
import java.io.IOException;
import java.nio.Buffer;
import java.util.*;
class User{
    int age;
    String name;

    public User(int age, String name) {
        this.age = age;
        this.name = name;
    }


    public int User(User other) {
        return this.age - other.age;   //오름차순
    }

}

class age {


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        System.out.println(num);
        int age;
        String name;
        User[] user = new User[num];
        for(int i=0;i<num;i++){
            age = scan.nextInt();
            name = scan.nextLine();
            user[i] = new User(age, name);
        }
        Arrays.sort(user);
        for(int i=0;i<num;i++){
            if(user[i].age > user[i+1].age){

            }
            System.out.println(user[i].age +" "+ user[i].name);

        }

    }

}
