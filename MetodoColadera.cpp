#include<iostream>
#include<cstdlib>

using namespace std;

void llenar(int v[],int n)
{
    for(int i=2;i<1000;i++)
    {
		v[i]=1;
	}
}
void mostrar(int v[],int n)
{
    for(int i=0;i<1000;i++)
	{
		if(v[i]==1)
		{
			cout<< i << endl;
		}
	}
}
void Ceros(int v[], int n)
{
    for(int i=2;i<1000;i++)
    {
   		if(v[i]==1)
	{
			for(int j=i+1;j<1000;j++)
			{
				if(j%i==0)
				{
					v[j]=0;
				}
			}
	}
	}
}

int main()
{
	int Vec[1000];
	llenar(Vec,1000);
	Ceros(Vec,1000);
	mostrar(Vec,1000);
	cin.get();
	cin.get();

}





			

	

