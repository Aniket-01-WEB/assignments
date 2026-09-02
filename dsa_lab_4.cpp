// #include <iostream>
// #include <string>
// using namespace std;

// class Book
// {
// private:
//     string title;
//     float price;

// public:
//     void setBookDetails(string t, float p);
//     void displayBook();
// };

// void Book::setBookDetails(string t, float p)
// {
//     title = t;
//     price = p;
// }

// void Book::displayBook()
// {
//     cout << "Book Title: " << title << endl;
//     cout << "Book Price: " << price << endl;
// }

// int main()
// {
//     Book b;

//     b.setBookDetails("C++ Programming", 499.50);
//     b.displayBook();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Employee {
//     int empId;
//     double basicSalary;

// public:
//     void calculateNetSalary(double basic) {
//         double allowance = basic * 0.20;  // 20% allowance
//         double grossSalary = basic + allowance;
//         double tax = grossSalary * 0.10;  // 10% tax
//         double netSalary = grossSalary - tax;

//         cout << "\nEmployee ID: " << empId << endl;
//         cout << "Basic Salary: " << basic << endl;
//         cout << "Allowance (20%): " << allowance << endl;
//         cout << "Tax (10%): " << tax << endl;
//         cout << "Net Salary: " << netSalary << endl;
//     }

//     void setEmployee(int id, double salary) {
//         empId = id;
//         basicSalary = salary;
//     }
// };

// int main() {
//     int id;
//     double salary;


//     cout << "Enter Employee ID: ";
//     cin >> id;

//     cout << "Enter Basic Salary: ";
//     cin >> salary;

//     Employee emp;

//     emp.setEmployee(id, salary);
//     emp.calculateNetSalary(salary);

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// class FitnessMember {
//     string memberName;
//     int age;
//     string membershipType;

// public:
//     void acceptDetails() {
//         cout << "Enter Member Name: ";
//         getline(cin, memberName);

//         cout << "Enter Age: ";
//         cin >> age;
//         cin.ignore();

//         cout << "Enter Membership Type: ";
//         getline(cin, membershipType);
//     }

//     void displayDetails() {
//         cout << "\n--- Fitness Member Details ---" << endl;
//         cout << "Member Name: " << memberName << endl;
//         cout << "Age: " << age << endl;
//         cout << "Membership Type: " << membershipType << endl;
//     }
// };

// int main() {
//     FitnessMember member;

//     member.acceptDetails();
//     member.displayDetails();

//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    void setTime(int h, int m, int s) {
       
        minutes += s / 60;
        seconds = s % 60;

       
        hours = h + m / 60;
        minutes += m % 60;

       
        hours += minutes / 60;
        minutes = minutes % 60;
    }

    void displayTime() {
        cout << setfill('0') << setw(2) << hours << ":"
             << setw(2) << minutes << ":"
             << setw(2) << seconds << endl;
    }

    Time addTime(Time t) {
        Time result;

        int totalSeconds = seconds + t.seconds;
        int totalMinutes = minutes + t.minutes;
        int totalHours = hours + t.hours;

        
        totalMinutes += totalSeconds / 60;
        totalSeconds %= 60;

       
        totalHours += totalMinutes / 60;
        totalMinutes %= 60;

        result.hours = totalHours;
        result.minutes = totalMinutes;
        result.seconds = totalSeconds;

        return result;
    }
};

int main() {
    Time t1, t2, total;
    int h, m, s;

    cout << "Enter first time (hours minutes seconds): ";
    cin >> h >> m >> s;
    t1.setTime(h, m, s);

    cout << "Enter second time (hours minutes seconds): ";
    cin >> h >> m >> s;
    t2.setTime(h, m, s);

    total = t1.addTime(t2);

    cout << "\nFirst Time: ";
    t1.displayTime();

    cout << "Second Time: ";
    t2.displayTime();

    cout << "Total Time: ";
    total.displayTime();

    return 0;
}