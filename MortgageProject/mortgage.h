#pragma once
using namespace std;

class mortgage {
private:
		 float loan; //keeps track of the loan amount
		 float rate; //keeps track of the rate
		 float years; //keeps track of the amount of years
public:
	mortgage();

	//constructor
	//takes loan, rate, and years 
	//returns: nothing
	mortgage(float, float, float);

	//constructor
	//takes loan, rate, and years
	//returns: float term
	float term(float, float);

	//payment
	//takes loan, rate, and years
	//returns: float payment
	float payment(float, float, float);

	//setLoan
	//takes loan
	//returns: nothing
	void setLoan(float);

	//setRate
	//takes rate
	//returns: nothing
	void setRate(float);

	//setYears
	//takes years
	//returns: nothing
	void setYears(float);

	
};
