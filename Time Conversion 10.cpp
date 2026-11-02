 # include <iostream>
 using namespace std;
 int main ()
 {
 	int seconds, hours, minitus,remaining;
 	cout << "Enter Total Seconds :" << endl;
 	cin >> seconds;
 	hours = seconds / 3600;
 	minitus = (seconds % 3600) / 60;
 	remaining = seconds % 60;
 	cout << "Hours ="  << hours << endl;
 	cout << "Minitus =" << minitus << endl;
 	cout << "Remaining Seconds =" << remaining << endl;
 	return 0;
 }