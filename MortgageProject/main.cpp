//Evan Brown
//Mortgage project
#include <iostream>
#include <string>
#include "mortgage.h"
using namespace std;

bool parseMortgage(string sval, float& num);

int main()
{
	mortgage m; //to test
	string loan1, rate1, years1; //allows data to be entered
	float term1;
	cout << "Enter the loan, rate, and years: " << endl;
	cin >> loan1;
	if (!parseMortgage(loan1, &loan1)) //bug where it is not accepting the address of the variable
	{
		cout << "invalid number. " << endl;
		cin >> loan1;
	}
	else
		m.setLoan(stof(loan1));

	cin >> rate1;
	if (!parseMortgage(rate1, &rate1)) //bug where it is not accepting the address of the variable
	{
		cout << "invalid number. " << endl;
		cin >> rate1;
	}
	else
		m.setRate(stof(rate1));

	cin >> years1;
	if (!parseMortgage(years1, &years1)) //bug where it is not accepting the address of the variable
	{
		cout << "invalid number. " << endl;
		cin >> years1;
	}
	else
		m.setYears(stof(years1));
	term1 = m.term(stof(years1), stof(rate1));

	cout << "Your payment is:    " << m.payment(stof(loan1), stof(rate1), term1);

	return 0;
}


bool parseMortgage(string sval, float& num)
{
	float val;
	bool success = true;
	try
	{
		num = stof(sval); 
		num = val;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}