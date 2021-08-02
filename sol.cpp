#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		// find the maximum score between the 1st and second contest
		cout << max(a + b, c + d) << '\n';
	}
	return 0;
}
