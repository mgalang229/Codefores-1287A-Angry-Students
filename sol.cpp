#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int k;
	cin >> k;
	char a[k];
	for(int i = 0; i < k; ++i) {
		cin >> a[i];
	}
	int cnt = 0;
	int flag = 0;
	for(int i = 0; i < k - 1; ++i) {
		if(a[i] == 'A' && a[i+1] == 'P') {
			flag = 1;
			break;
		}
	}
	bool ok = true;
	while(ok && flag == 1) {
		for(int i = 0; i < k - 1; ++i) {
			if(a[i] == 'A' && a[i+1] == 'P') {
				a[i+1] = 'A';
				i++;
			}
		}
		ok = false;
		for(int i = 0; i < k - 1; ++i) {
			if(a[i] == 'A' && a[i+1] == 'P') {
				ok = true;
				break;
			}
		}
		cnt++;
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
	return 0;
}
