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
���� �� ������ŭ ���� �̵��� �� �ֱ� ������
�̿� ���� ������ Ǯ�̰� �����ϴ�.
int main(){
	cin >> a >> b >> c;
	cout << ((c-b > b-a) ? c-b-1 : b-a-1);
	return 0;
}
*/