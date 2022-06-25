#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> intp;

void init_code() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

const int mod=1e9+7;
const int INF=0x3F3F3F3F;

int main() {
	init_code();

	vector<string> s(3);
	rep(i, 3) {
		cin >> s[i];
		reverse(s[i].begin(), s[i].end());
	}
	int turn=0;
	while (true) {
		if (s[turn].empty()) {
			cout << char('A'+turn);
			return 0;
		}
		int tmp=s[turn].back()-'a';
		s[turn].pop_back();
		turn=tmp;
	}

	return 0;
}
