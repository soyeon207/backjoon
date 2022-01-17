#include <stdio.h>
#include <iostream>

using namespace std;

int N;
int M;
int visited[9];
int output[9];

void permutation(int idx) {
    
    if (idx == M) {
        for(int i=0; i<M; i++) {
            cout << output[i] << " ";
        }
        cout << '\n';
    }
    
    for(int i=0;i<N;i++) {
        if (visited[i] != true) {
            visited[i] = true;
            output[idx] = i+1;
            permutation(idx+1);
            visited[i] = false;
        }
    }
    
}

int main() {
    cin >> N;
    cin >> M;
    
    permutation(0);
    
}
