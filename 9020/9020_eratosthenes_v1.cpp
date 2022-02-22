#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    int arr[T];
    int max_num = 0;
    
    for(int i=0;i<T;i++) {
        cin >> arr[i];
        
        if(max_num < arr[i]) max_num = arr[i];
    }
        
    bool prime_num_arr[max_num+1];
    for(int i=0;i<=max_num;i++) {
        prime_num_arr[i] = true;
    }
    
    prime_num_arr[1] = false;
    
    for(int i=2;i*i<=max_num;i++) {
        for(int j=i+i;j<=max_num;j+=i) {
            prime_num_arr[j] = false;
        }
    }
    
    for(int i=0;i<T;i++) {
        for (int j=arr[i]/2;j>=2;j--) {
            if (prime_num_arr[j] && prime_num_arr[arr[i]-j]) {
                cout << j << " "<< arr[i]-j << endl;
                break;
            }
        }
    }
    
    return 0;
}
