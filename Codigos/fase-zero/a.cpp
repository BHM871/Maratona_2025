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

string solve() {
    int c, g;
    cin >> c >> g;

    if (c == 1) return "vivo e morto";

    if (g == 1) return "vivo";

    return "morto";
}

int main() { _

    cout << solve() << endl;

    return 0;
}
