 # include <iostream>
 using namespace std;
 int main ()
 {
 	float purchase, selling, quantity;
 	float totalcost, revenue,profit;
 	cout << "Enter Purchase Price :" << endl;
 	cin >> purchase;
 	cout << "Enter Selling Price :" << endl;
 	cin >> selling;
 	cout << "Enter Quantity :" << endl;
 	cin >> quantity;
 	totalcost = purchase * quantity;
 	revenue = selling * quantity;
 	profit = revenue - totalcost;
 	cout << "Total cost =" << totalcost << endl;
 	cout << "Total Revenue =" << revenue << endl;
 	if (profit > 0)
 	cout << "Profit =" << profit << endl;
 	else if (profit < 0)
 	cout << "Loss =" << -profit << endl;
 	else 
 	cout << "No Profit No Loss";
 	return 0;
 }