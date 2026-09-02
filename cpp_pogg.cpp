// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     int emp_id;
//     float salary;

// public:
//     void Get_Data() {
//         cout << "Enter Employee ID: ";
//         cin >> emp_id;
//         cout << "Enter Employee Salary: ";
//         cin >> salary;
//     }

//     void Show_Data() const {
//         cout << "\n--- Employee Details ---" << endl;
//         cout << "Employee ID : " << emp_id << endl;
//         cout << "Salary      : " << salary << endl;
//     }
// };

// int main() {
//     Employee emp;
//     emp.Get_Data();
//     emp.Show_Data();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     int account_no;
//     double balance;

// public:
//     void Open_Account() {
//         cout << "Enter Account Number: ";
//         cin >> account_no;
//         cout << "Enter Current Balance: ";
//         cin >> balance;
//     }

//     void Display_Account() const {
//         cout << "\n--- Account Details ---" << endl;
//         cout << "Account Number: " << account_no << endl;
//         cout << "Current Balance: " << balance << endl;
//     }
// };

// int main() {
//     BankAccount account;
//     account.Open_Account();
//     account.Display_Account();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Smartphone {
// private:
//     int model_id;
//     float price;

// public:
//     void Set_Phone() {
//         cout << "Enter Model ID: ";
//         cin >> model_id;
//         cout << "Enter Retail Price: ";
//         cin >> price;
//     }

//     void Show_Phone() const {
//         cout << "\n--- Smartphone Details ---" << endl;
//         cout << "Model ID     : " << model_id << endl;
//         cout << "Retail Price : " << price << endl;
//     }

//     void Calculate_Tax() const {
//         float tax = price * 0.10f;
//         cout << "Sales Tax (10%): " << tax << endl;
//     }
// };

// int main() {
//     Smartphone phone;
//     phone.Set_Phone();
//     phone.Show_Phone();
//     phone.Calculate_Tax();

//     return 0;
// }

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
