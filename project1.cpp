#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

struct Student {
   int registernumber;
    string name;
    int age;
    string state;
    string DOB;
    string email;
    string gender;
    string category;
    int contactnumber;
    int marks;
    int rank;
};


void addStudent() {
    Student s;
    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter student age: ";
    cin >> s.age;
     cout << "Enter student date of birth: ";
    cin >> s.DOB;
     cout << "Enter student registration number: ";
    cin >> s.registernumber;
     cout << "Enter student gender: ";
    cin >> s.gender;
     cout << "Enter student category: ";
    cin >> s.category;
     cout << "Enter student contact number: ";
    cin >> s.contactnumber;
     cout << "Enter student email: ";
    cin >> s.email;
     cout << "Enter student marks: ";
    cin >> s.marks;
     cout << "Enter student rank: ";
    cin >> s.rank;

    

    ofstream outFile("NEET_Registration.txt", ios::app);
    if (outFile.is_open()) {
        outFile << s.name << " " << s.age << " " << s.DOB <<" "<<s.registernumber<<" "<<s.gender<<" "<<s.category<<" "<<s.contactnumber<<" "<<s.email<<" "<<s.marks<<" "<<s.rank<< endl;
        outFile.close();
        cout << "Student registration  added!\n";
    } else {
        cerr << "Error opening file for writing.\n";
    }
}


void displayStudents() {
    ifstream inFile("NEET_Registration.txt");
    string line;
    cout << "\n--- Student Records ---\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}


void searchStudentByregistrationnumber() {
    int registernumber;
    cout << "Enter student register number to search: ";
    cin >> registernumber;

    ifstream inFile("NEET_Registration.txt");
    string line;
    bool found = false;

    while (getline(inFile, line)) {
        istringstream iss(line);
        int r;
        string name;
        int age;
        string state;
        string DOB;
        string email;
        string gender;
        string category;
        int contactnumber;
        int marks;
        int rank;
        iss >> name 
            >> age 
            >>DOB
            >>r
            >>gender
            >>category
            >>contactnumber
            >>email
            >>marks
            >>rank;
        if (r == registernumber) {
            cout << "Student Found: " << line << endl;
            found = true;
            break;
        }
    }

    inFile.close();
    if (!found) {
        cout << "Student not found.\n";
    }
}




int main() {
    int choice;
    do {
        cout << "\n===== Student NEET Regestration List =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Name\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudentByregistrationnumber();
                break;
            
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
     
