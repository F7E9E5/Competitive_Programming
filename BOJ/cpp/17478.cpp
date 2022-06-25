#include <string>
#include <iostream>
using namespace std;

int N;
string ANSWER[7] = {
	"어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n",
	"\"재귀함수가 뭔가요?\"\n",
	"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n",
	"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n",
	"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n",
	"라고 답변하였지.\n",
	"\"재귀함수는 자기 자신을 호출하는 함수라네\"\n"
};

void underbar(int n) { for (int i = 0; i < n; i++) cout << "____"; }

void solve(int n) {
	if (n == N + 1) return;
	if (n == N) {
		underbar(n); cout << ANSWER[1];	
		underbar(n); cout << ANSWER[6];
		underbar(n); cout << ANSWER[5];
	}
	else {
		for (int i = 1; i < 5; i++) { underbar(n); cout << ANSWER[i]; }
		solve(n + 1);
		underbar(n);
		cout << ANSWER[5];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;
	cout << ANSWER[0];
	solve(0);
}

