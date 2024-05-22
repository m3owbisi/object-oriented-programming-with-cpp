#include <iostream.h>
#include <conio.h>

template <class T>
T power(T base, int exponent) {
    T result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    clrscr();

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    int intPower = power(2, 3);
    float floatPower = power(2.5f, 2);

    cout << "2^3 = " << intPower << endl;
    cout << "2.5^2 = " << floatPower << endl;

    getch();
    return 0;
}