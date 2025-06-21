#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
#define endl '\n'
#define MOD % ((int) 1e9 + 7)
#define f first
#define s second
#define pb push_back

typedef pair<int, int> ii;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

int solve() {
    long long m;
    cin >> m;

    double x = log2(m * 1000000 * 8);

    if (x != (int) x) {
        x++;
    }

    return (int) x;
}

int main() { _

    cout << solve() << endl;

    return 0;
}
