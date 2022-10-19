#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	Professional p(20);
	Nonprofessional n(160);
	cout << "\nProfessional salary = " << p.getsalary();
	cout << "\nProfessional vacation = " << p.getvacation();
	cout << "\nNonprofessional salary = " << n.getsalary();
	cout << "\nNonprofessional vacation = " << n.getvacation();
	cout << "\nNonprofessional insurance = " << n.getinsurance();
	return 0;
}