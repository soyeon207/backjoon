#include <iostream>
using namespace std;

int gcd(int x, int y) {
	// 재귀 함수로 최대공약수를 구함 
    // y 가 0 일 때 x 의 값이 최대공약수임 
    if (y == 0) return x;
    return gcd(y, x%y);
}

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    
    int result_gcd = gcd(x,y);
    cout << result_gcd << endl; // 최대 공약수
    cout << x * y / result_gcd; // 최소 공배수 (두 값의 곱 / 최대공약수)
    
    return 0;
}
