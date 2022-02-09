// reads amount in cents
#include <iostream>

using namespace std;

int main() {
	//declaring variable.
	int cents, dollar, quarts, dimes, nicks, penny;

	// read the number of cents
	cout << "Enter the amount in cents: ";
	cin >> cents;

	// now using the basic arithmatic operations to convert the amount in cents into the corresponding dollars, quartes,...

	// to get the dollars
	dollar  = cents / 100;
	cents = cents - (dollar * 100);

	// to get the quarters
	quarts = cents / 25;
	cents = cents - (quarts * 25);
	
	// to get the dimes
	dimes = cents / 10;
	cents = cents - (dimes * 10);
	
	// to get the nickles
	nicks = cents / 5;
	cents = cents - (nicks * 5);
	
	// to get the pennies
	penny = cents;

	// now display the results
	cout << "\nAfter conversion we have following money distribution: " << endl;
	cout  << "Dollars - " << dollar <<  endl;
	cout  << "Quarters - " << quarts <<  endl;
	cout << "Dimes - " << dimes  <<  endl;
	cout << "Nickles - " << nicks  <<  endl;
	cout << "Pennies - " << penny  <<  endl;

	return 0;	
}