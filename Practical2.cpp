#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor called!" << endl;
    }

    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor called!" << endl;
    }

    // ?Copy Constructor
    Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
        cout << "Copy Constructor called!" << endl;
    }

    // User-defined member function
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    
    // Another member function (to update age)
    void setAge(int newAge) {
        age = newAge;
    }
    
    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // Object created with Default constructor
    Student s1;
    s1.displayInfo();
    cout << "--------------------------" << endl;

    // Object created with Parameterized constructor
    Student s2("Arya", 19);
    s2.displayInfo();
    cout << "--------------------------" << endl;

    // Object created with Copy constructor
    Student s3(s2); // copying s2 into s3
    s3.displayInfo();
    cout << "--------------------------" << endl;

    // Using member function to update age
    s3.setAge(20);
    cout << "After updating age of s3: " << endl;
    s3.displayInfo();
    cout << "--------------------------" << endl;
    return 0;
}
