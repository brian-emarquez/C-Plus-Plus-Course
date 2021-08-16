#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	int x, y;
	int *p, * q;
	int **t;
	int ***w;

	x = 5;
	y = 6;

	p = &x;
	q = &y;

	cout << *p << endl;
	cout << *q << endl;

	t = &p;
	//*t = &y;

	w = &t;
	
	cout << **t << endl;
	//cout << *p << endl;

	cout << ***w << endl;


	cout<< "\n" << endl;
	system("pause");
	return 0;
}