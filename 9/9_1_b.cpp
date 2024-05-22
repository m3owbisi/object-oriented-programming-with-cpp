#include <iostream.h>
#include <conio.h>

template <class T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    clrscr();

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    getch();
    return 0;
}