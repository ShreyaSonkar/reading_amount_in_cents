// reads amount in cents
#include <iostream>

using namespace std;

int main() {
//declaring variable.
  int cents, dollar, quarts, dimes, nicks, penny;
  cout << " enter the cents amount: ";
//reading user input
  cin >> cents;
//knowing number of dollars out of cents
  cout << cents << " / " << 100 << " = " << (cents / 100) << endl;
  	dollar  = cents / 100;
//getting total dollars in cent
  cout << dollar << " * " << 100 << " = " << (dollar * 100) << endl;
 	 dollar = dollar * 100;
//substracting the amout dollar from the cents 
  cout << cents << " - " << dollar << " = " << (cents - dollar) << endl;
//assing the new value of cents
	cents = cents - dollar;
//finding the number of quarts out of new value of cents
  cout << cents << " / " << 25 << " = " << (cents / 25) << endl;
  	quarts = cents / 25;
//getting total quarts in cents
  cout << quarts << " * " << 25 << " = " << (quarts * 25) << endl;
	quarts = quarts * 25;
//substracting the amount of quarts from cents
  cout << cents << " - " << quarts << " = " << (cents - quarts) << endl;
//assing the new value to cents
    cents = cents - quarts;
//finding the number of dimes out of new value of cents
  cout << cents << " / " << 10 << " = " <<  (cents / 10) << endl;
	dimes = cents / 10;
// getting the total number dimes in cents
  cout << dimes << " * " << 10 << " = " << (dimes * 10) << endl;
	dimes = dimes * 10;
//substracting the amount of dimes from cents
  cout << cents << " - " << dimes << " = " << (cents - dimes) << endl;
//assing the new value to cents
	cents = cents - dimes;
//finding the number of nickels out of new value of cents
  cout << cents << " / " << 5 << " = " << (cents / 5) << endl;
	nicks = cents / 5;
// getting the total amount of nickles in cents
  cout << nicks << " * " << 5 << " = " << (nicks * 5) << endl;
	nicks = nicks * 5;
// substracting the amount og nickels from cents
  cout << cents << " - " << nicks << " = " << ( cents - nicks) << endl;
//assing new value to cents
	cents = cents - nicks;
//now reaming value is equal to be penny
  cout << cents << " = " << cents << endl;
	penny = cents;

  return 0;	
    }