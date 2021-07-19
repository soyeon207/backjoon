// 변수에 대한 연산 후 가장 마지막에 출력 

 #include <stdio.h>

int main(void) {
    int hour, minute;
    scanf("%d %d", &hour, &minute);

    if (minute - 45 >= 0) {
        minute -= 45;
    } else {
        if (hour - 1 < 0) {
            hour = 23;
        } else {
            hour --;
        }
        minute = 15 + minute;
    }
    
    printf("%d %d", hour, minute);

}