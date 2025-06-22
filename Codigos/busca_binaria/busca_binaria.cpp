#include <algorithm>
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

bool eh_suficiente(int mid) {
    return mid < 9;
}

int solve(vector<int> valores) {
    int e = 0, d = valores.size() - 1;

    while(e != d) {
        int mid = (e + d) / 2;

        if (eh_suficiente(valores[mid])) {
            e = mid;
        } else if (not eh_suficiente(valores[mid])) {
            d = mid - 1;
        }
    }

    return e;
}

int main() { _

    vector<int> v = {1, 3, 5, 6, 8, 9, 9, 9, 15, 16, 17, 20, 20, 37, 40, 58};
    lower_bound(v.begin(), v.end(), 9);
    upper_bound(v.begin(), v.end(), 9);
    cout << solve(v) << endl;

    return 0;
}
