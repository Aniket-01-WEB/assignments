#include <iostream>
using namespace std;

class Complex{
private:
	int real;
	int imaginary;

public:
	void input(){
		cout << "Enter the real part: ";
		cin >> real;

		cout << "Enter the imaginary part: ";
		cin >> imaginary;
	}

	void display(){
		cout << real;

		if (imaginary >= 0){
			cout << " + " << imaginary << "i";
		}
		else{
			cout << " - " << -imaginary << "i";
		}
	}

	friend Complex operator+(Complex first, Complex second);
};

Complex operator+(Complex first, Complex second){
	Complex answer;
	answer.real = first.real + second.real;
	answer.imaginary = first.imaginary + second.imaginary;
	return answer;
}

int main(){
	Complex number1;
	Complex number2;
	Complex sum;

	cout << "Enter the first complex number" << endl;
	number1.input();

	cout << "\nEnter the second complex number" << endl;
	number2.input();

	sum = number1 + number2;

	cout << "\nThe sum is: ";
	sum.display();
	cout << endl;

	return 0;
}
