#include <iostream>
using namespace std;

int a, b, c, r;

int main() {
	cin >> a >> b >> c;
	while (b - a != 1 || c - b != 1) {
		if (c - b > b - a) {
			a = b;
			b = c - 1;
		} else {
			c = b;
			b = a + 1;
		}
		r++;
	}
	cout << r;
	return 0;
}
/*
가장 긴 범위만큼 많이 이동할 수 있기 때문에
이와 같은 간단한 풀이가 가능하다.
int main(){
	cin >> a >> b >> c;
	cout << ((c-b > b-a) ? c-b-1 : b-a-1);
	return 0;
}
*/