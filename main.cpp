// This program calculates an employee's take home pay. 

#include <iostream>
#include <iomanip>

using namespace std;

int numDependents;
double monthlySalary;
double taxableSalary;
double stateTaxes;
double federalTaxes;
double dependentDeduction;
double totalWithholding;
double netPay;

int main()
{
	cout << "- - - - - Net Pay Calculator - - - - -\n\n";
	
	// Get monthlySalary and Number of Dependents
	cout << "Enter Monthly monthlySalary: $ ";
	cin >> monthlySalary;
	cout << "Enter Number of Dependents: ";
	cin >> numDependents;
	

	// Calculate dependent deduction 
	const double DEP_DEDUCTION= .025;
	const double STATE_TAX_RATE= .065;
	const double FED_TAX_RATE= .28;
	
	dependentDeduction = ((DEP_DEDUCTION * monthlySalary) * numDependents);
	
	// Calculate taxable monthlySalary
	taxableSalary = monthlySalary - dependentDeduction;
	
	// Calculate state tax 
	stateTaxes = (STATE_TAX_RATE * taxableSalary);
	
	// Calculate federal tax
	federalTaxes = (FED_TAX_RATE * taxableSalary);
	
	// Calculate total withholding 
	totalWithholding = (stateTaxes + federalTaxes);
	
	// Calculate net pay
	netPay = (monthlySalary - totalWithholding);
	
	// Program Display
	cout << fixed << setprecision(2);   
	
	cout << "\n\nMonthly monthlySalary: $ " << monthlySalary;
	cout << "\nDependent Deduction: $ " << dependentDeduction;
	cout << "\n\nTaxable monthlySalary: $ " << taxableSalary;
	cout << "\nState Tax: $ " << stateTaxes;
	cout << "\nFederal Tax: $ " << federalTaxes;
	cout <<"\n* * * Net Pay * * *: $ " << netPay;
	
	
	return 0;
}
