#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<int> fila;

    fila.push(1);
    fila.push(6);
    fila.push(4);

    // [ 1, 6, 4 ]

    int t = fila.front(); // t = 1

    fila.pop(); // tira 1

    // [ 6, 4 ]

    fila.push(9);
    fila.push(0);

    // [ 6, 4, 9, 0 ]

    fila.pop(); // tira 6
    fila.pop(); // tira 4

    // [ 9, 0 ]

    fila.push(3);

    // [ 9, 0, 3 ]
    


    // Problema descrito na aula

    fila.push(1);
    fila.push(2);
    fila.push(3);
    fila.push(4);
    fila.push(5);

    bool tira = true;
    while(fila.size() > 1) {

        if (tira) {
            fila.pop();
            tira = false;
        } else {
            fila.push(fila.front());
            fila.pop();
            tira = true;
        }
    }

    cout << fila.front() << '\n';
}
