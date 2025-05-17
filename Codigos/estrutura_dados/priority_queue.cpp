#include <functional>
#include <queue>
#include <vector>

using namespace std;

int main() {

    priority_queue<int> fila; // Ordena pelo menor

    fila.push(1);
    fila.push(6);
    fila.push(4);

    // [ 1, 4, 6 ]

    int t = fila.top(); // t = 1

    fila.pop(); // tira 1

    // [ 4, 6 ]

    fila.push(9);
    fila.push(0);

    // [ 0, 4, 6, 9 ]

    fila.pop(); // tira 0
    fila.pop(); // tira 4

    // [ 6, 9 ]

    fila.push(3);

    // [ 3, 6, 9 ]

    priority_queue<int, vector<int>, greater<int>> filaM; // Ordena pelo maior

}
