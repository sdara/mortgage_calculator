#include <iostream.h>
#include <math.h>

class Mortgage
{
private:
	float Payment;
	float Loan;
	float Rate;
	int Years;
	double Term;

public:
	void setMortgageData(float setLoan, float setRate, int setYears)
	{
		//regular variables to be defined by user
		Loan=setLoan;
		Rate=setRate;
		Years=setYears;
	}

	void calcValues(void){
				//find the term value
		Term=pow((1+(Rate/12)),(12*Years));

		//find the payment value
		Payment = ((Loan*(Rate/12)*Term))/(Term-1);
	}

	float getPayment(void){
		return Payment;
	}
	double getTerm(void){
		return Term;
	}
	int getYears(void){
		return Years;
	}
	float getLoan(void){
		return Loan;
	}
	float getRate(void){
		return Rate;
	}
	
	Mortgage (void) // Default Constructor
	{
	Payment=0;
	Loan=0;
	Rate=0;
	Years=0;
	Term=0;
	}

};
void main (void)
{

	Mortgage MyVar;
	float LoanAmount, RateAmount;
	int YearAmount;
	
	do
	{
		cout << "Please Enter The Loan Amount:\n";
		cin >> LoanAmount;
	}while (LoanAmount < 0);

	do
	{
		cout << "\n\nEnter The Interest Rate:\n";
		cin >> RateAmount;
	}while (RateAmount < 0);

	do
	{
		cout << "\n\nEnter The Years:\n";
		cin >> YearAmount;
	}while (YearAmount < 0);

	//set data
	MyVar.setMortgageData(LoanAmount,RateAmount,YearAmount);

	MyVar.calcValues();
	cout<<"\n"<<endl;
	//display outputs to the user
	cout<<"Information Summary"<<endl;
	cout<<"==================="<<endl;
	cout << "Payment = " << MyVar.getPayment() << endl;
	cout << "Term = " << MyVar.getTerm() << endl;
	cout << "Loan = " << MyVar.getLoan() << endl;
	cout << "Rate = " << MyVar.getRate() << endl;
	cout << "Years = " << MyVar.getYears() << endl;
	cout<<endl;
	cout<<"Thank you for using the program!\n\n";

}








