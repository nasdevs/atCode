/*
* tasks url   : https://atcoder.jp/contests/abc343/tasks
* problem url : https://atcoder.jp/contests/abc343/tasks/abc343_a
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;

    cin >> A >> B;

    cout << (A + B) + (A + B >= 9 ? -1 : 1) << '\n';
}
