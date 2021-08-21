import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int firstNum = sc.nextInt();
        int secondNum = sc.nextInt();
        
        int[] secondNumArr = Integer.toString(secondNum).chars().map(s -> s-'0').toArray();

        System.out.println(firstNum * secondNumArr[2]);
        System.out.println(firstNum * secondNumArr[1]);
        System.out.println(firstNum * secondNumArr[0]);
        System.out.println(firstNum * secondNum);
        
    }
}