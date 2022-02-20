#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    int n;              // 수의 개수
    cin >> n;
    
    int num_arr[n];     // 입력받은 수가 저장되어 있는 배열
    int max_num = 0;    // 입력받은 수 중 가장 큰 수
    
    for(int i=0;i<n;i++) {
        cin >> num_arr[i];
        if (max_num < num_arr[i]) max_num = num_arr[i];
    }
    
    bool is_prime_num[max_num+1];                           // 소수 여부가 저장되어 있는 배열 (가장 큰 수 까지 저장)
    for(int i=0;i<max_num+1;i++) is_prime_num[i] = true;    // is_prime_num 배열을 true 로 초기화
    
    is_prime_num[1] = false;                                // 1은 소수가 아니기 때문에 false 로 지정
        
    for (int i=2; i*i<=max_num; i++) {
        for(int j = i+i; j<=max_num; j+=i) {
            is_prime_num[j] = false;
        }
    }
    
    int prime_count = 0;
    for(int i=0;i<n;i++) {
        if (is_prime_num[num_arr[i]]){
            prime_count++;
        }
    }
    
    cout << prime_count;
    
}

