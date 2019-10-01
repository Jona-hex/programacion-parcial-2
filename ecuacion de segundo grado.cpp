#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;



int main()
{
	int a,b,c,d;
	float x,y;
	
	//x=-b+-raizb^2-4ac/2a
	
	cout << " Ingresar un termino : " << endl;
	cin >> a;
	
	while (a==0)
	{
		cout << " Ingrese el coeficiente a \n";
		cin >> a;
	}

	cout << " ingrese el coeficiente b \n";
	cin >> b;
	cout << " ingrese el coeficiente c \n";
	cin >> c;
	

	if((b*b-4*a*c) >= 0)
	{
        x = (-b+sqrt(d))/(2*a);
        y =(-b+sqrt(d))/(2*a);
		cout << " X1 = " << x << endl;
		cout << " X2 = " << y << endl;
	}
	else if (d == 0)
	{
		x = (-b)/(2*a);
		cout << " X1 = " << x << endl;
		
	}
	
	else
	{
		cout << " la ecuacion no tiene solucion " << endl;
		
	}
	
	system ("pause");
	return 0;
	cin.get();
	cin.get();


}






