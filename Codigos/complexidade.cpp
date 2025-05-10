#include <iostream>

int main() {
    // Constante | Encontre a média de dois números
    int x, y;
    std::cin >> x >> y;
    std::cout << ((x + y) / 2) << '\n';

    // Linear | Procure um inteiro dentro de uma lista
    int n;
    std::cin >> n;
  
    int interios[n];
    for (int i = 0; i < n; i++) {
        std::cin >> interios[i];
    }
  
    int procurar;
    std::cin >> procurar;
    
    int out = -1;
    for (int i = 0; i < n; i++) {
        if (interios[i] == procurar)
            out = i;
    }
  
    std::cout << out << '\n';
  
    // Quadratica | Descubra se uma lista possui números repetidos
    int n;
    std::cin >> n;
    
    int interios[n];
    for (int i = 0; i < n; i++) {
        std::cin >> interios[i];
    }
    
    int out = false;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (interios[i] == interios[j])
                out = true;
        }
    }
    
    std::cout << out << '\n';
  
    // Cubico
    int n;
    std::cin >> n;
    
    int interios[n];
    for (int i = 0; i < n; i++) {
        std::cin >> interios[i];
    }
    
    int out = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                // Faz alguma coisa
            }
        }
    }
    
    std::cout << out << '\n';

    return 0;
}
