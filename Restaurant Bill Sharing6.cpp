 # include <iostream>
 using namespace std;
 int main  ()
 {
 	float bill;
 	int friends;
 	float share;
 	cout << "Enter Total Resturant Bill :" << endl;
 	cin >> bill;
 	cout << "Enter Number of Friends :" << endl;
 	cin >> friends;
 	share = bill / friends;
 	cout << "Each Friend will Pay = Rs." << share ;
 	return 0;
 }