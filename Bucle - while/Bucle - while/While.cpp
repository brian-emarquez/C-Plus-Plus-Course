/*Bucle - While*/
/*primero piensa y luego actua*/

#include<iostream>
#include<conio.h>



using namespace std;

int main()
{
	int i=1;

	while (i < 10)
	{
		cout << i << endl;
		i = i + 1;
		/*i++*/
	}

	_getch();/*Inpide que se cierre automatocamente*/
	return 0;
}