import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int hour = sc.nextInt();
        int minute = sc.nextInt();
        
        int before45 = minute - 45;
        
        if (before45 < 0) {
            hour = (hour - 1 < 0) ? 23 : hour - 1 ; // 삼항 연산자로 1 뺐을 때 음수이면 23 , 아니면 hour -1 
            minute = 60 + before45;
        } else {
            minute -= 45;
        }
        
        System.out.println(hour+ " "+ minute);
        
    }
}