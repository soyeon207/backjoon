#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    // N = 숫자의 개수 
    // num = 입력받은 숫자 
    // is_not_prime_num_cnt = 소수가 아닌 합성수의 개수
    int N, num, is_not_prime_num_cnt = 0;
    cin >> N;
    
    for(int i=0;i<N;i++) {
        cin >> num;
        
        if (num == 1) {
        	// 1 은 소수가 아니기 때문에 ++
            is_not_prime_num_cnt++;
        } else {
        	// 입력 받은 값의 제곱근까지 돌면서 
            // 소수인지 아닌지를 판단 
            for(int i=2; i*i <= num; i++) {
                if (num % i == 0) {
                    is_not_prime_num_cnt ++;
                    break;
                }
            }
        }
    }
    
    cout << (N-is_not_prime_num_cnt);
    return 0;
}