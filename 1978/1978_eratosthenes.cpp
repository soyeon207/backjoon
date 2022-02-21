#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    int n; 		// 숫자의 개수 
    cin >> n;
    
    int num_arr[n];		// 입력 받은 숫자를 저장하는 배열 
    int max_num = 0;	// 입력 받은 수 중 가장 큰 수 
    
    for(int i=0; i<n; i++) {
        cin >> num_arr[i];
        if (max_num < num_arr[i]) max_num = num_arr[i];
    }
    
    // max_num 까지 소수의 여부를 구하기 떄문에 
    //소수 여부를 저장하는 배열 크기를 max_num + 1 로 잡아준다
    bool is_prime_num[max_num+1]; 
    for(int i=0; i<max_num+1; i++) is_prime_num[i] = true; // 배열 true 로 초기화 
    
    is_prime_num[1] = false; // 1은 소수가 아니기 때문에 false
        
    // 에라토스테네스의 체 방식으로 가장 큰 값의 제곱근까지 반복문을 돌리고
    for (int i=2; i*i<=max_num; i++) {
    	// 해당 값의 배수인 값은 배열에 소수로 저장해준다.
        for(int j = i+i; j<=max_num; j+=i) {
            is_prime_num[j] = false;
        }
    }
    
    int prime_count = 0;
    // 숫자의 개수까지 반복문을 돌면서 
    // 소수인지 아닌지 여부를 판단하고 소수 인경우 prime_count 에 ++
    for(int i=0;i<n;i++) {
        if (is_prime_num[num_arr[i]]){
            prime_count++;
        }
    }
    
    cout << prime_count;
    
    return 0;
}