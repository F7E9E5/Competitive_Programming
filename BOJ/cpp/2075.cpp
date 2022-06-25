#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	rep(i, n*n) {
		int a;
		cin >> a;
		pq.push(a);
		while ((int)pq.size()>n) pq.pop();
	}
	cout << pq.top();

	return 0;
}
