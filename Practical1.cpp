#include <iostream>
using namespace std;
class Student {
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called: Student object created!" << endl;
    }

    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }

    ~Student() {
        cout << "Destructor called: Student object destroyed!" << endl;
    }
};

int main() {
    // Creating an object of Student class
    Student s1("Arya", 20);

    // Callling a user-defined function
    s1.displayInfo();

    // When main ends, destructor will be called automatically
    return 0;
}



