
#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float grade;

    Student(string n, int r, float g) {
        name = n;
        rollNo = r;
        grade = g;
    }

    friend ostream& operator<<(ostream& os, const Student& s) {
        os << s.name << "\t" << s.rollNo << "\t" << s.grade << endl;
        return os;
    }
};

int main() {
    // Create some Student objects
    Student s1("John Doe", 101, 85.0);
    Student s2("Jane Smith", 102, 90.0);
    Student s3("Bob Johnson", 103, 78.0);

    // Create a vector to store the Student objects
    vector<Student> students = {s1, s2, s3};

    // Open an output file stream
    ofstream outputFile("students.txt");

    // Check if the file is open
    if (!outputFile) {
        cerr << "Unable to open file for writing." << endl;
        return 1;
    }

    // Write the Student objects to the file
    for (const auto& student : students) {
        outputFile << student;
    }

    // Close the output file stream
    outputFile.close();

    // Open an input file stream
    ifstream inputFile("students.txt");

    // Check if the file is open
    if (!inputFile) {
        cerr << "Unable to open file for reading." << endl;
        return 1;
    }

    // Read the data from the file and display it
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    // Close the input file stream
    inputFile.close();

    return 0;
}