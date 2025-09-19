#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // dynamically allocate array of Student structs
    Student *classroom = new Student[n];

    // input data
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << " Name: ";
        cin.ignore();               // clear input buffer before getline
        getline(cin, classroom[i].name);
        cout << "Roll Number: ";
        cin >> classroom[i].rollNo;
        cout << "Marks: ";
        cin >> classroom[i].marks;
    }

    // display student records
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << classroom[i].name
             << " | Roll No: " << classroom[i].rollNo
             << " | Marks: " << classroom[i].marks << endl;
    }

    // free memory
    delete[] classroom;
    return 0;
}
