# include <iostream>
using namespace std;
int main ()
{
	float units, price, bill;
	cout << "Enter Electic City Units:" <<endl;
	cin >> units;
	cout << "Enter Price Per Unit:" <<endl;
	cin >> price;
	bill = units* price;
	cout << "Total Electricity Bill = " << bill <<endl;
	return 0;
}