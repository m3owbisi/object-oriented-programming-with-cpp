#include <iostream.h>
#include <conio.h>

int main() {
    clrscr();

    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        if (divisor == 0) {
            throw "Division by zero error!";
        }
        int result = dividend / divisor;
        cout << "Result of division: " << result << endl;
    } catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    getch();
    return 0;
}