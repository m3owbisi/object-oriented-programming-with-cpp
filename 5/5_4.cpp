#include <iostream.h>
#include <conio.h>

class CustomException {
public:
    const char* message;
    CustomException(const char* msg) : message(msg) {}
};

int main() {
    clrscr();

    try {
        throw CustomException("Custom exception occurred!");
    } catch (CustomException& e) {
        cout << "Error: " << e.message << endl;
    }

    getch();
    return 0;
}