#include <iostream>
using namespace std;
int main()
{
	float length , width , height;
	float volume , liters;
	cout << "Enter Length :" << endl;
	cin >> length;
	cout << "Enter Width :" << endl;
	cin >> width;
	cout << "Enter Height :" << endl;
	cin >> height;
	volume = length * width * height;
	liters = volume * 1000;
	cout << "Volume =" << volume << "Cubic Meters" << endl;
	cout << "Capacity =" << liters << "Litres";
	return 0;
}