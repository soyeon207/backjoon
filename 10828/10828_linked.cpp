#include <iostream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top;
int count;

void push(int x) {
    Node* n = new Node();
    n -> data = x;
    n -> next = top;
    top = n;
    count ++;
}

int size() {
    return count;
}

int empty() {
    return top == NULL;
}

int t() {
    return top -> data;
}

void pop() {
    count--;
    top = top -> next;
}

int main() {
    
    int n; 					// 명령의 수 
    cin >> n;
    
    string command;		    // 명령어 
    int x;					// 스택에 넣을 수 
    
    for(int i=0;i<n;i++) {
        cin >> command;
        if (command == "push") {
	        // 정수 X 를 스택에 넣음 
            cin >> x;
            push(x);
        } else if (command == "size") {
	        // 스택에 들어있는 정수의 개수를 출력 
            cout << size() << endl;
        } else if (command == "empty") {
	        // 스택이 비어있는지 확인 
            cout << empty() << endl;
        } else if (empty()) {
            // pop, top 인 경우 스택이 비어 있으면 -1 을 출력해야 함 
            cout << "-1" << endl;
        } else if (command == "pop") {
	        // top 에 있는 값을 출력해주고 pop 해줌 
            cout << t() << endl;
            pop();
        }  else if (command == "top") {
	        // top 에 있는 값 출력 
            cout << t() << endl;
        }
    }
    
    return 0;
}