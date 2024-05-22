#include <iostream.h>
#include <conio.h>
#include <fstream.h>

int main() {
    clrscr();

    try {
        ifstream file("nonexistent.txt");
        if (!file) {
            throw "Failed to open file!";
        }
        cout << "File opened successfully." << endl;
    } catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    getch();
    return 0;
}