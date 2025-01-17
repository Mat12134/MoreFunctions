#include <iostream>
#include <string>

using namespace std;

//Mateus Sales de Oliveira
//More functions, passing and receiving values

//prototypes
void greetUser(string);
string getName();
double computePay(double, int);

int main()
{
	string name;
	double pay;
	name = getName();
	greetUser(name);

	pay = computePay(21.5, 48);
	cout << "Pay is " << pay << endl;


	system("pause");
}


//a function that greets user
void greetUser(string name)
{
	cout << "Hello " << name << endl;
}

//a function that gets the user name from input
string getName()
{
	string name;
	cout << "please enter your name: ";
	getline(cin, name);
	return name;
}

//a function that calculates and returns an employee pay
//an employee gets overtime if they work more than 44 hours
//have the employees payrate and hours passed into the function

double computePay(double rate, int hours)
{
	//change to only give overtime for the hours over 44

	double pay; //variable to hold return value
	if (hours > 44)
		pay = (44 * rate) + ((hours - 44) * rate * 1.5);
	else
		pay = hours * rate;
	return pay;



}