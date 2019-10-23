#include <iostream>
#include <string>

using namespace std;
int largo(char cadena[]);
void aMayusculas(char name[]);
int main()
{
	char name[50];
	cout << "what is your name? ";
	cin.getline (name,50);

	cout << "hello, " << name << "!\n";
    cout << "tu nombre tiene " <<largo(name) << " letras !\n";
	cout << "\bseparado\n";
	for (int i=0; name[i]; i++)
	  	cout << name[i]<<".";

	cout << endl;
	aMayusculas(name);
	cout << name;

	cin.get();
	cin.get();
	
}
int largo(char cadena[])
{
	int lon;
	for(lon=0;cadena[lon];lon++)
	    ;
	return lon;
}
void aMayusculas(char name[])
{

	for(int i=0;name[i];i++)
	{   if(name[i]>='a' && name[i]<='z')
			name[i]-=32;
	}
	
}
