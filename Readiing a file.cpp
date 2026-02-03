#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {

 ifstream file("C:\\Users\\priya\\Downloads\\HG\\example.txt");

 if (file.is_open()) {
 cout<<"file is opened"<<endl;
 string line;

 while (getline(file, line)) {
 cout << line << endl;
 }
 file.close();
 } else {
 cout << "Error: Unable to open the file for reading." << endl;
 }
 return 0;
}
