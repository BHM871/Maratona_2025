#include <stack>

using namespace std;

int main() {

    stack<int> pilha;

    pilha.push(1);
    pilha.push(6);
    pilha.push(4);

    // | 4 |
    // | 6 |
    // | 1 |

    int t = pilha.top(); // t = 4

    pilha.pop(); // tira 4

    // | 6 |
    // | 1 |

    pilha.push(9);
    pilha.push(0);

    // | 0 |
    // | 9 |
    // | 6 |
    // | 1 |

    pilha.pop(); // tira 0
    pilha.pop(); // tira 9

    // | 6 |
    // | 1 |

    pilha.push(3);

    // | 3 |
    // | 6 |
    // | 1 |
}
