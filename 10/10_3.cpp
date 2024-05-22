#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <string.h>

class FileManager {
private:
    char** filenames;
    int numFiles;

public:
    FileManager(int num) : numFiles(num) {
        filenames = new char*[numFiles];
        for (int i = 0; i < numFiles; ++i) {
            filenames[i] = new char[100]; // Assuming max filename length is 100
            filenames[i][0] = '\0'; // Initialize filename to empty string
        }
    }

    ~FileManager() {
        for (int i = 0; i < numFiles; ++i) {
            delete[] filenames[i]; // Deallocate memory for each filename
        }
        delete[] filenames; // Deallocate memory for filenames array
    }

    void setFilename(int index, const char* fname) {
        if (index >= 0 && index < numFiles) {
            strcpy(filenames[index], fname); // Set filename at specified index
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    void displayFilenames() {
        cout << "File List:" << endl;
        for (int i = 0; i < numFiles; ++i) {
            cout << "[" << i << "]: " << filenames[i] << endl; // Display filenames
        }
    }

    void writeFile(int index, const char* content) {
        if (index >= 0 && index < numFiles) {
            ofstream file(filenames[index]); // Open file for writing
            if (!file) {
                cout << "Failed to open file for writing!" << endl;
                return;
            }

            file << content; // Write content to file
            file.close(); // Close the file
            cout << "Content successfully written to file: " << filenames[index] << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    void readFile(int index) {
        if (index >= 0 && index < numFiles) {
            ifstream file(filenames[index]); // Open file for reading
            if (!file) {
                cout << "Failed to open file for reading!" << endl;
                return;
            }

            char buffer[100];
            cout << "Content of file " << filenames[index] << ":" << endl;
            while (!file.eof()) {
                file.getline(buffer, 100); // Read a line from the file
                cout << buffer << endl; // Display the line
            }

            file.close(); // Close the file
        } else {
            cout << "Invalid index!" << endl;
        }
    }
};

int main() {
    clrscr(); // Clear the screen

    FileManager fileManager(2); // Create FileManager object with capacity for 2 files
    fileManager.setFilename(0, "file1.txt"); // Set filename for first file
    fileManager.setFilename(1, "file2.txt"); // Set filename for second file

    fileManager.displayFilenames(); // Display list of filenames

    // Write content to file 1
    fileManager.writeFile(0, "This is content for file 1.");

    // Write content to file 2
    fileManager.writeFile(1, "This is content for file 2.");

    // Read content from file 1
    fileManager.readFile(0);

    // Read content from file 2
    fileManager.readFile(1);

    getch(); // Wait for a key press
    return 0;
}