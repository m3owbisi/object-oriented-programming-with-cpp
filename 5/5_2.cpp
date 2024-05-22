#include <iostream.h>
#include <conio.h>

int main() {
    clrscr();

    int arr[5] = {1, 2, 3, 4, 5};
    int index;
    cout << "Enter index to access element: ";
    cin >> index;

    try {
        if (index < 0 || index >= 5) {
            throw "Index out of range!";
        }
        cout << "Element at index " << index << ": " << arr[index] << endl;
    } catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    getch();
    return 0;
}