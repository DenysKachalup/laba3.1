#include "Time.h"
#include<iostream>	
#include "Triad.h"

using namespace std;
Triad ReturnO(Triad a)
{
	return a;
}
Time ReturnO(Time a)
{
	return a;
}

int main()
{
	Triad t1(44, 66, 99), t2(55, 99, 100);
	cout << t1 << t2;
	bool t = t1 > t2;
	cout << "t1 > t2 = " << t << endl << endl;

	Time a(1, 2, 3), b(4, 6, 2);
	cin >> a;
	cout << "a    " << a;
	cout << "++a  " << ++a;
	cout << "--a  " << --a;
	cout << "a--  " << a--;
	cout << "a    " << a;
	cout << "a++  " << a++;
	cout << "a    " << a << endl;

	t = a == b;
	cout << "a == b    " << t << endl;
	t = a > b;
	cout << "a > b     " << t << endl;
	t = a < b;
	cout << "a < b     " << t << endl;


	return 0;
}
