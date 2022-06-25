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

	int n;
	cin >> n;
	map<string, ll> m;
	rep(i, n) {
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		m[s]++;
	}
	ll ans=0;
	for (auto [a, b]:m) {
		if (b<2) continue;
		ans+=b*(b-1)/2;
	}	
	cout << ans;

	return 0;
}
