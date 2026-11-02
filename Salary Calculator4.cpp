 # include <iostream >
 using namespace std;
 int main ()
 {
 	float basic, house, medical , gross;
 	cout <<"Enter Basic Salary :" << endl;
 	cin >> basic;
 	cout <<"Enter House Allowance :" << endl;
 	cin >> house;
 	cout<<"Enter Medical Allowance :" << endl;
 	cin >> medical;
 	gross = basic + house + medical;
 	cout << "Gross Salary =" << gross << endl;
 	return 0;
 }