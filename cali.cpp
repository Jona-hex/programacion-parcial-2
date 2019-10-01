#include <iostream>

using namespace std;

int main()
{
	int cal[10];


	int sum=0;
	float prom;
	
	cout << " introduce las 10 calificaciones de tus materias " << endl;
	

	
	for (int i=0; i<10; i++)
	{
		cin >> cal[i];
		sum += cal[i];
	
	}
	
	prom = sum/10.0;
	
	cout << prom << endl;
	
	for (int i=0; i<10; i++)
	{
		if (prom < cal[i])
		{
			cout << cal[i] << ": : ";
		}
	}
	
	cin.get();
	cin.get();
	
}

	

	

	
