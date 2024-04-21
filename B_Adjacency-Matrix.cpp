/*
* tasks url   : https://atcoder.jp/contests/abc343/tasks
* problem url : https://atcoder.jp/contests/abc343/tasks/abc343_b
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// FILE I/O
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	#endif

    int N, A;

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> A;

            if (A == 1) cout << j << ' ';
        }
        cout << '\n';
    }
}
