#include <iostream>
using namespace std;
int calage(int year);
int main()
{
	for(int a=1;a<=3;a++)
	{
		int year;
		cout << "Enter Year " << a <<" : ";
		cin >>year;
		cout << " Age "<< a << " : "<< calage(year)<<endl;

	}
	cout << "Thank you."<<endl;
	system("pause");
	return 0;
}

int calage(int year)
{
	return 2563-year;
}