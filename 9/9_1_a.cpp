#include <iostream.h>
#include <conio.h>

template <class T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    clrscr();

    cout << "Hiral" << endl;
    cout << "239112" << endl;

    int intMax = max(10, 20);
    float floatMax = max(10.5f, 20.7f);

    cout << "Maximum of 10 and 20: " << intMax << endl;
    cout << "Maximum of 10.5 and 20.7: " << floatMax << endl;

    getch();
    return 0;
}