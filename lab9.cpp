#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int marks;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks: ";
    cin >> marks;

    ofstream fout("student.txt");

    fout << name << " " << marks;

    fout.close();

    cout << "Data saved successfully.";

    return 0;
}