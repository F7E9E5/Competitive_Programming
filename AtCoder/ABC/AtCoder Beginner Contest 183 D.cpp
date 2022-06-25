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

	int n, w;
	cin >> n >> w;
	map<int, ll> mp;
	rep(i, n) {
		int s, t, p;
		cin >> s >> t >> p;
		mp[s]+=p;
		mp[t]-=p;
	}
	ll now=0;
	for (auto [a, b]:mp) {
		now+=b;
		if (now>w) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";

	return 0;
}
