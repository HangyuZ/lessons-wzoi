#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, i, j, k, t = 0, e = 0, r, w = 0, z = 0;
	char a[15][15], b[15][15];
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> b[i][j];
    //input
	for (i = 1; i <= n; i++) {
		for (k = 1, j = n; j >= 1; j--, k <= n) {
			if (a[j][i] == b[i][k++])
				t++;
		}
	}
	for (k = 1, k <= n, i = n; i >= 1; i--, k++) {
		for (j = 1; j <= n; j++) {
			if (a[j][i] == b[k][j])
				e++;
		}
	}
	for (k = n, k <= 1, i = 1; i <= n; i++, k--) {
		for (r = n, r <= 1, j = 1; j <= n; j++, r--) {
			if (a[i][j] == b[k][r])
				w++;
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (a[i][j] == b[i][j])
				z++;
		}
	}
	if (t == n * n)
		cout << "1";
	else if (e == n * n)
		cout << "2";
	else if (w == n * n)
		cout << "3";
	else if (z == n * n)
		cout << "4";
	else
		cout << "5";

	return 0;
}