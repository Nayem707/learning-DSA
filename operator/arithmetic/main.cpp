#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "a = " << a << ", b = " << b << endl;

    cout << "Addition (+): " << a + b << endl;
    cout << "Subtraction (-): " << a - b << endl;
    cout << "Multiplication (*): " << a * b << endl;
    cout << "Division (/): " << a / b << endl;   // integer division
    cout << "Modulo (%): " << a % b << endl;

    double x = 10.0, y = 3.0;
    cout << "Float Division (/): " << x / y << endl;

    int inc = 5;
    cout << "Pre-increment (++): " << ++inc << endl;
    cout << "Post-increment (++): " << inc++ << endl;
    cout << "After post-increment: " << inc << endl;

    int dec = 5;
    cout << "Pre-decrement (--): " << --dec << endl;
    cout << "Post-decrement (--): " << dec-- << endl;
    cout << "After post-decrement: " << dec << endl;

    return 0;
}
