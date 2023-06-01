#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = n + 1; i < m + 1; i++) {
		bool p = true;
		for (int j = 2; j < (int)sqrt(i) + 1; j++) {
			if ((i % j) == 0) {
				p = false;
				break;
			}
		}
		if ((p && i != m) || (!p && i == m)) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
