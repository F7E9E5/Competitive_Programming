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

	ll a, b;
	cin >> a >> b;
	if (a>b) swap(a, b);
	if (a*b<=0) {
		cout << "Zero";
	}
	else {
		if (a<0) {
			if ((b-a+1)%2) {
				cout << "Negative";
			}
			else {
				cout << "Positive";
			}
		}
		else cout << "Positive";
	}

	return 0;
}
