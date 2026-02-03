#include<iostream>
#include<fstream>
using namespace std;
 int main(){

 ofstream file;
 file.open("C:\\Users\\priya\\Downloads\\HG\\example.txt");

 if (file.is_open()) {
 cout << "File created successfully in HG!" << endl;

 file<<"HG here \n";
 file<<"Hello!";

 file.close();
 cout << "Data written successfully." << endl;
 } else {
 cout << "Error: Unable to create the file." << endl;
 }
 return 0;
 }
