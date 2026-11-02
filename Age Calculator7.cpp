 # include <iostream>
 using namespace std;
 int main ()
 {
 	int years;
 	cout << "Enter Your Age in Years :" << endl;
 	cin >> years;
 	cout << "Age in Months =" << years * 12 << endl;
 	cout << "Age in Weeks =" << years * 52 << endl;
 	cout << "Age in Days =" << years * 365;
 	return 0;
 }