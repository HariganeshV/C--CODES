#include <iostream>
#include <fstream>
using namespace std;
class FileHandler {
private:
ofstream file;
public:
// Constructor: Opens the file
FileHandler(const string& filename) {
file.open("mydata.txt");
if (file.is_open()) {
cout << "Constructor: File '" << filename << "' is opened." << endl;
} else {
cout << "Constructor: Failed to open file '" << filename << "'." << endl;
}
}
// Destructor: Closes the file
~FileHandler() {
if (file.is_open()) {
file.close();
cout << "Destructor: File is closed." << endl;
}
}
// Function to write data to the file
void write(const string& data) {
if (file.is_open()) {
file << data << endl;
} else {
cout << "Error: File is not open." << endl;
}
}
};
int main() {
cout << "Creating FileHandler object..." << endl;
FileHandler fh("example.txt"); // This will call the constructor
cout << "Writing data to the file..." << endl;
fh.write("Hello, World!"); // Write data to the file
cout << "End of main function. The file will be closed automatically." << endl;
return 0; // When `main` returns, the destructor for `fh` is called automatically
}
