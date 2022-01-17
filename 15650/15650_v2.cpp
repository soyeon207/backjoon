#include <iostream>
#include <stdio.h>

using namespace std;

int visited[9];
int n, m;

void combination(int index, int count) { // count개의 수를 이용해 조합을 만듬
    if (count == m) {
        for (int i = 1; i <= n; i++) {
            if (visited[i] == true) // 조합과 순열의 차이 (조합은 중복 제거)
                cout << i << " ";
        }
        cout << endl;
        return;
    }
    
    for (int i = index; i <= n; i++) {
        // 이미 방문한 곳이라면 건너뛴다.
        if (visited[i] == true) continue;
            
        visited[i] = true; // 방문 표시를 남긴다.
        combination(i, count + 1);
        visited[i] = false; // 체크 취소 (다른 자식 노드를 체크하기 위해)
    }
}
int main() {
    cin >> n >> m;
    
    combination(1, 0);

}
