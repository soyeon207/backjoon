import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        
        String compareStr = "==";
        if (a < b) {
            compareStr = "<";
        } else if (a > b) {
            compareStr = ">";
        }
    
        System.out.println(compareStr);
    }
}