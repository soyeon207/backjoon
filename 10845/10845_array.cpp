#include <iostream>
using namespace std;

struct queue_struct {
  
  int arr[10000];
  int rear = -1, fir = -1; // rear = 데이터가 들어가야할 위치, fir = 꺼내야할 데이터 위치 
  
  void push(int x) {
      if (fir == -1) fir++;
      arr[++rear] = x;
  }
  
  int empty() {
      if (fir > rear || fir == -1) {
          return 1;
      }
      return 0;
  }
  
  int fir_fun() {
      return arr[fir];
  }
  
  int back() {
      return arr[rear];
  }
  
  int pop() {
      if (fir > rear || fir == -1) {
          return -1;
      }
      return arr[fir++];
  }
  
  int size() {
      int size = rear - fir;
      if (size < 0 || rear == -1) {
          // 큐가 비어있을 때 
          return 0;
      } else {
          return size + 1;
      }
  }
  
};

int main() {
    
    queue_struct q;
    
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
            cout << q.fir_fun() << endl;
            q.pop();
        } else if (command == "front") {
	        // front 에 있는 값 출력 
            cout << q.fir_fun() << endl;
        } else if (command == "back") {
	        // back 에 있는 값 출력 
            cout << q.back() << endl;
        }
    }

    return 0;
}