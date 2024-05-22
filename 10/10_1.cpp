#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <string.h>

class FileDemo {
private:
    char filename[100];

public:
    FileDemo(const char* fname) {
        strcpy(filename, fname);
    }

    void displayWordAndLineCount() {
        ifstream file(filename); // Open the file in read mode
        if (!file) {
            cout << "Failed to open file!" << endl;
            return;
        }

        int wordCount = 0;
        int lineCount = 0;
        char buffer[100];

        while (!file.eof()) {
            file.getline(buffer, 100); // Read a line from the file

            if (strlen(buffer) > 0) { // Check if line is not empty
                lineCount++;

                // Tokenize the line to count words
                char* token = strtok(buffer, " ");
                while (token != NULL) {
                    wordCount++;
                    token = strtok(NULL, " ");
                }
            }
        }

        file.close(); // Close the file

        cout << "Total words in file: " << wordCount << endl;
        cout << "Total lines in file: " << lineCount << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    FileDemo fileDemo("example.txt");
    fileDemo.displayWordAndLineCount();

    getch(); // Wait for a key press
    return 0;
}