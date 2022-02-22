#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    int T, num;
    cin >> T;
    
    bool prime_num_arr[10001];
    std::fill_n(prime_num_arr, 10001, true);

    prime_num_arr[1] = false;
    
    for(int i=2; i*i<=10000; i++) {
        for(int j=i+i; j<=10000; j+=i) {
            prime_num_arr[j] = false;
        }
    }

    for(int i=0;i<T;i++) {
        cin >> num;

        for (int j=num/2; j >= 2; j--) {
            if (prime_num_arr[j] && prime_num_arr[num-j]) {
                cout << j << " "<< num-j << endl;
                break;
            }
        }
    }
        
    return 0;
}
