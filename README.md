11-09-2004
CSC153-02
Project #09

Psuedocode



Include header files

Create a class of variables and functions to gather, calculate, and display mortgage information.

Allow the user to input the Loan amount, interest rate, and length of loan (Years).

Calculate and display the monthly payment along with other important information.




Source Code

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





Program Output

Please Enter The Loan Amount:
500000
 
 
Enter The Interest Rate:
.20
 
 
Enter The Years:
30
 
 
Information Summary
===================
Payment = 8355.09
Term = 383.964
Loan = 500000
Rate = 0.2
Years = 30
 
Thank you for using the program!
 
Press any key to continue
