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

long solve(vector<int> valores) {
    int e = 0, d = valores.size() - 1;
    long soma1 = valores[e], soma2 = valores[d];

    while (soma1 != soma2 && e != d) {
        if (soma1 > soma2) {
            d = d - 1;
            soma2 = soma2 + valores[d];
        } else if (soma2 > soma1) {
            e = e + 1;
            soma1 = soma1 + valores[e];
        }
    }

    if (e == d && soma1 != soma2) return -1;

    return soma1;
}

int main() { _

    cout << solve({}) << endl;

    return 0;
}
