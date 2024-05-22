#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <string.h>

class FileHandler {
private:
    char filename[100];

public:
    FileHandler(const char* fname) {
        strcpy(filename, fname);
    }

    void writeFile(const char* content) {
        ofstream file(filename); // Open file for writing
        if (!file) {
            cout << "Failed to open file for writing!" << endl;
            return;
        }

        file << content; // Write content to file
        file.close(); // Close the file
        cout << "Content successfully written to file." << endl;
    }

    void readFile() {
        ifstream file(filename); // Open file for reading
        if (!file) {
            cout << "Failed to open file for reading!" << endl;
            return;
        }

        char buffer[100];
        while (!file.eof()) {
            file.getline(buffer, 100); // Read a line from the file
            cout << buffer << endl; // Display the line
        }

        file.close(); // Close the file
    }
};

int main() {
    clrscr(); // Clear the screen

    FileHandler file("example.txt");

    // Write content to file
    file.writeFile("Hello, this is a test file.\nIt contains some text.");

    // Read content from file
    cout << "Content of file:" << endl;
    file.readFile();

    getch(); // Wait for a key press
    return 0;
}