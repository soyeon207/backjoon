import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
    
        boolean isLeapYear = false;
        
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            // 1. 4의 배수 이면서 100의 배수가 아니거나 
            // 2. 400의 배수인 경우 윤년 
            isLeapYear = true;
        }
        
        System.out.println(isLeapYear ? 1 : 0);
    
    }
}