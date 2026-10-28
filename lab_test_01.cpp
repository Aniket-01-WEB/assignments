#include<iostream>
using namespace std;

bool isPrime(int number){
    for (int divisor = 2; divisor < number; divisor++){
        if (number % divisor == 0){
            return false;
        }
    }
    return true;
}

void lean_app(int low , int high){
    if(low < 0){
        cout<<"Enter a valid number";
    }
    else{
        cout << "Odd numbers that are not prime: ";
        for (int i = low;i<high;i++){
            if (i > 1 && i % 2 != 0 && !isPrime(i)){
                cout << i << ' ';
            }
        }
        cout << '\n';
    }
}
int main(){
    int low = 0;
    int high = 10;
    cin >> low >> high;
    lean_app(low, high);
}
