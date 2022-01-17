#include <iostream>
#include <stdio.h>

using namespace std;

int n;
int m;

void combination(int arr[], int print_arr[], int r, int index, int depth) {
    
    if(r == 0) {
        for(int i=0;i< m;i++){
            cout << print_arr[i] << " ";
        }
        cout << endl;
    } else if (n == depth) {
        return;
    } else {
        
        print_arr[index] = arr[depth];
        combination(arr, print_arr, r-1, index+1, depth+1);
        
        combination(arr, print_arr, r, index, depth+1);
    }
    
    
}


int main() {
    
    cin >> n >> m;
    
    int print_arr[m];
    int arr[n];
    
    for(int i=0;i<n;i++) {
        arr[i] = i+1;
    }
        
    combination(arr, print_arr, m, 0, 0);
    

}
