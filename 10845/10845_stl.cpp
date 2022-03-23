#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    queue<int> q;
    
    int n; 					// 명령의 수 
    cin >> n;
    
    string command;		    // 명령어 
    int x;					// 스택에 넣을 수 
    
    for(int i=0;i<n;i++) {
        cin >> command;
        if (command == "push") {
	        // 정수 X 를 큐에 넣음 
            cin >> x;
            q.push(x);
        } else if (command == "size") {
	        // 큐에 들어있는 정수의 개수를 출력 
            cout << q.size() << endl;
        } else if (command == "empty") {
	        // 큐가 비어있는지 확인 
            cout << q.empty() << endl;
        } else if (q.empty()) {
            // pop, front, back 인 경우 큐가 비어 있으면 -1 을 출력해야 함 
            cout << "-1" << endl;
        } else if (command == "pop") {
	        // front 에 있는 값을 출력해주고 pop 해줌 
            cout << q.front() << endl;
            q.pop();
        } else if (command == "front") {
	        // front 에 있는 값 출력 
            cout << q.front() << endl;
        } else if (command == "back") {
	        // back 에 있는 값 출력 
            cout << q.back() << endl;
        }
    }

    return 0;
}