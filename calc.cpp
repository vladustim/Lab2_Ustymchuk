#include <iostream>
using namespace std;

int main() {
    double a, b;
    int op;
    double result = 0;
    cout << "Number, operation (1 +, 2 -, 3 *, 4 /), number: ";
    if (!(cin >> a >> op >> b)) return 1;
    switch (op) {
        case 1:
            result = a + b;
            break;

        case 2:
            // subtraction
            break;

        case 3:
            // multiplication
            break;

        case 4:
            // division
            break;

        default:
            cerr << "Unknown operation\n";
            return 1;
    }
    cout << "Result = " << result << '\n';
}
