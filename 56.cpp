#include <iostream>
using namespace std;

// Abstract base class
class FIR {
public:
    virtual void registerFIR(string name) = 0; // Pure virtual function
};

// Derived class for Theft
class TheftFIR : public FIR {
public:
    void registerFIR(string name) override {
        cout << "Theft FIR registered for " << name << "." << endl;
        cout << "Action: Investigation started for stolen property." << endl << endl;
    }
};

// Derived class for Accident
class AccidentFIR : public FIR {
public:
    void registerFIR(string name) override {
        cout << "Accident FIR registered for " << name << "." << endl;
        cout << "Action: Ambulance dispatched and accident site team notified." << endl << endl;
    }
};

// Derived class for Missing Person
class MissingPersonFIR : public FIR {
public:
    void registerFIR(string name) override {
        cout << "Missing Person FIR registered for " << name << "." << endl;
        cout << "Action: Local patrol units alerted and investigation initiated." << endl << endl;
    }
};

int main() {
    cout << "=== FIR Registration ===" << endl;

    FIR* fir;

    fir = new TheftFIR();
    fir->registerFIR("Ravi");
    delete fir;

    fir = new AccidentFIR();
    fir->registerFIR("Sita");
    delete fir;

    fir = new MissingPersonFIR();
    fir->registerFIR("Karan");
    delete fir;

    return 0;
}