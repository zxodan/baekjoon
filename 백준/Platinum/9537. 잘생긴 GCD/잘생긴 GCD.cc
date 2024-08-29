#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long max(long long a, long long b) {
    if (a > b) return a;
    return b;
}

long long Solve(long long A[], int s, int e) {
    if (s >= e) return A[s];
    int m = (s + e) / 2;
    auto res = max(Solve(A, s, m - 1), Solve(A, m + 1, e));

    vector<pair<long long, int>> l, r;
    l.emplace_back(A[m], m);
    r.emplace_back(A[m], m);

    for (int i = m - 1; i >= s; i--) {
        auto g = gcd(l.back().first, A[i]);
        if (g == l.back().first) l.back().second = i;
        else l.emplace_back(g, i);
    }
    for (int i = m + 1; i <= e; i++) {
        auto g = gcd(r.back().first, A[i]);
        if (g == r.back().first) r.back().second = i;
        else r.emplace_back(g, i);
    }

    for (auto [g1, le] : l) 
        for (auto [g2, ri] : r) 
            res = max(res, gcd(g1, g2) * (ri - le + 1));
            
    return res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        long long A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        cout << Solve(A, 0, n - 1) << endl;
    }
    return 0;
}
