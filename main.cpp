#include <iostream>
using namespace std; 

int main() {
  
 int cents;
 int quarters;
 int quarter_remainder;
 int dimes;
 int dimes_remainder;
 int nickels;
 int nickels_remainder;
 int penny;
  
 cout << "Calculates coins needed for change." <<endl;
 cout << "Enter the change in cents: ";
 cin >> cents; 
  
 quarters = cents/25; 
 quarter_remainder= cents%25; 
 dimes = quarter_remainder/10;
 dimes_remainder = quarter_remainder%10;
 nickels = dimes_remainder/5;
 nickels_remainder = dimes_remainder%5;
 penny = nickels_remainder/1;
  
 cout << "Quarters in change: " <<quarters<< "." << endl;
 cout << "Dimes in Change: " <<dimes<< "." << endl;
 cout << "Nickels in Change: " <<nickels<< "." << endl;
 cout << "Pennies in Change: " <<penny<< "." <<endl;
  
return 0;
  
}