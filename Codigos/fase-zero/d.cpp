#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

#define _ ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
#define endl '\n'
#define MOD % ((int) 1e9 + 7)
#define f first
#define sec second
#define pb push_back

typedef pair<int, int> ii;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

double solve() {
    int n;
    string s, t;

    cin >> n;
    cin >> s >> t;

    int superposicao_isolado = 0, colapsados_normais = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            superposicao_isolado++;
        }
        if (s[i] != t[i]) {
            colapsados_normais++;
        }
    }

    return (double) colapsados_normais / superposicao_isolado;
}

int main() { _

    cout << setprecision(2);
    cout << solve() << endl;

    return 0;
}
