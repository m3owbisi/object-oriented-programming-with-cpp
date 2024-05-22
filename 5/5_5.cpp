#include <iostream.h>
#include <conio.h>

int main() {
    clrscr();

    int arr[5] = {1, 2, 3, 4, 5};
    int index, divisor;

    cout << "Enter index to access element: ";
    cin >> index;
    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        if (index < 0 || index >= 5) {
            throw "Index out of range!";
        }
        cout << "Element at index " << index << ": " << arr[index] << endl;

        if (divisor == 0) {
            throw "Division by zero error!";
        }
        cout << "Result of division: " << arr[0] / divisor << endl;

    } catch (const char* error) {
        cout << "Error: " << error << endl;
    } catch (...) {
        cout << "Unknown error occurred." << endl;
    }

    getch();
    return 0;
}