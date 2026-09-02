#include <iostream>
using namespace std;

class Contractor {
private:
    int contractor_id;
    float hourly_rate;

public:
    void Input_Data() {
        cout << "Enter Contractor ID: ";
        cin >> contractor_id;
        cout << "Enter Hourly Rate: ";
        cin >> hourly_rate;
    }

    void Display_Data() const {
        cout << "\n--- Contractor Details ---" << endl;
        cout << "Contractor ID : " << contractor_id << endl;
        cout << "Hourly Rate   : " << hourly_rate << endl;
    }

    void Calculate_Weekly_Pay() const {
        float weekly_pay = hourly_rate * 40.0f;
        cout << "Weekly Pay (40 hrs): " << weekly_pay << endl;
    }
};

int main() {
    Contractor contractor;
    contractor.Input_Data();
    contractor.Display_Data();
    contractor.Calculate_Weekly_Pay();

    return 0;
}