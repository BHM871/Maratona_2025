#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    // Quadratico | Descubra se uma lista possui números repitidos
    // Solução péssima
    int n;
    cin >> n;
    
    int interios[n];
    for (int i = 0; i < n; i++) {
        cin >> interios[i];
    }
    
    int out = false;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (interios[i] == interios[j])
                out = true;
        }
    }
    
    cout << out << '\n';

    // Solução boa
    cin >> n;
    
    map<int, bool> maps;
    bool repete = false;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        if (maps.count(t)) {
            repete = true;
        }
        maps.insert_or_assign(t, true);
    }
    
    cout << repete << '\n';
    
    // Solução excelente
    cin >> n;
    
    set<int> sets;
    for (int i = 0; i < n; i++) {
        cin >> interios[i];
        sets.insert(interios[i]);
    }
    
    if (sets.size() != n)
        cout << true;
    else
        cout << false;
    cout << '\n';
}
