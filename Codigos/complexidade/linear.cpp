#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    // Linear | Procure um inteiro dentro de uma lista
    int n;
    cin >> n;
  
    vector<int> interios(10000+10, -1);
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        interios[t] = i;
    }
  
    int procurar;
    cin >> procurar;
    
    cout << interios[procurar] << '\n';

    int n2; cin >> n2;
 
    map<int, int> maps;
    for (int i = 0; i < n2; i++) {
        int t; cin >> t;
        maps.insert_or_assign(t, i);
    }
  
    int procurar2;
    cin >> procurar2;
    
    if (maps.count(procurar2) == false)
        cout << -1;
    else
        cout << maps.at(procurar2);
    cout << '\n';
}
