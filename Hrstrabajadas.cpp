#include <iostream>
#include <cstdlib>

using namespace std;

void seg2hms(int segundos);
int hms2seg(int h,int m, int s);
int main()
{
	int h1,m1,s1,h2,m2,s2;
	int sc,ss,st;
	char p;
	
	cout << "dame entrada"<<endl;
	cin >>h1>>p>>m1>>p>>s1;

	sc=hms2seg(h1,m1,s1);
	
	cout << "dame salida" << endl;
	cin >>h2>>p>>m2>>p>>s2;
	
	ss =hms2seg(h2,m2,s2);
	st = ss-sc;
	
	cout << "trabajado";
	seg2hms(st);
	

	
	system ("pause");
	return 0;
	
}
	

