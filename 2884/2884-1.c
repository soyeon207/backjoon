 // 조건문에서 바로 출력 
 #include <stdio.h>

int main(void) {
    int hour, minute;
    scanf("%d %d", &hour, &minute);

    if (minute - 45 >= 0) {
        printf("%d %d", hour, minute - 45);
    } else {
        if (hour - 1 < 0) {
            hour = 23;
        } else {
            hour --;
        }
        printf("%d %d", hour, 60 + minute - 45);
    }

}