 # include <iostream>
 using namespace std;
 int main ()
 {
 	float distance, average,price;
 	float petrol,cost;
 	cout << "Enter Distance :" << endl;
 	cin >> distance;
 	cout << "Enter Average (KM per litre) :" << endl;
 	cin >> average;
 	cout << "Enter Petrol Price :" << endl;
 	cin >> price;
 	petrol = distance / average;
 	cost = petrol * price;
 	cout << "Petrol Consumed =" << petrol << "Liters" << endl;
 	cout << "Total Petrol Cost = Rs." << cost;
 	return 0;
 }