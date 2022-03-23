#include <iostream>
using namespace std;

struct Node {
    int data;    // 저장되는 값 
    Node* next;  // 연결되는 노드
};

struct queue_struct {
  Node* rear_node = NULL;  // 데이터가 들어가야 하는 마지막 노드 
  Node* first_node = NULL; // 데이터가 꺼내져야 하는 첫번째 노드
  int s = 0;               // 현재 총 큐 크기 
  
  void push(int x) {
      Node* node = new Node();
      node -> data = x;
      
      if (rear_node == NULL) {
          // rear_node 가 NULL 인 경우는 현재 값이 없는거기 떄문에 
          // rear_node 와 first_node 에 새로 만들어진 node 로 초기화
          rear_node = node;
          first_node = node;
      } else {
          // 큐에 값이 있는 경우 
          // 가장 마지막에 있는 rear_node 의 next 를 새로 만들어진 node 로 설정
          Node* temp = rear_node;
          rear_node = node;
          temp -> next = node;
      }
      s++;
  }
  
  int empty() {
      if (first_node == NULL) {
          return 1;
      }
      return 0;
  }
  
  int fir_fun() {
      return first_node -> data;
  }
  
  int back() {
      return rear_node -> data;
  }
  
  int pop() {
      int num = first_node -> data;
      if(first_node != rear_node) {
          // 큐에 값이 하나 이상인 경우 
          // first_node 를 first_node 와 연결되어 있는 노드로 초기화해준다. 
          first_node = first_node -> next;
      } else {
          // 큐에 값이 하나밖에 없는 경우 
          // 큐를 모두 비워준다. 
          first_node = NULL;
          rear_node = NULL;
      }
      s--;
      return num;
  }
  
  int size() {
      return s;
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