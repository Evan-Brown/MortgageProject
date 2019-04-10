#include <iostream>
#include <cmath>
#include "mortgage.h"
using namespace std;

mortgage::mortgage()
{
	loan = 0;
	rate = 0;
	years = 0;
}

mortgage::mortgage(float a, float b, float c)
{
	loan = 0;
	rate = 0;
	years = 0;
}

void mortgage::setLoan(float loan1)
{
	loan = loan1;
}

void mortgage::setRate(float rate1)
{
	rate = rate1;
}

void mortgage::setYears(float years1)
{
	years = years1;
}

float mortgage::term(float years, float rate)
{
	float term;
	term = pow((1.0 - (rate / 12.0)),  (12.0 * years));

	return term;
}

float mortgage::payment(float loan, float rate, float term)
{
	float payment;
	payment = (loan*(rate / 12.0)*term) / (term - 1.0);

	return payment;
}
