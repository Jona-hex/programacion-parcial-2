#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include <cstdlib>
using namespace std;

int main(){

	int piso[20][20]={0};
	int Iniciar = 0;
	int plu = 0;
	int girar = 0;
	int dato;
	int tortuga [2]={0};
	int posicion = 6;

	cout<<  "1.- Pluma arriba"
	<<endl<<"2.- Pluma abajo"
	<<endl<<"3.- Derecha"
	<<endl<<"4.- Izquierda"
	<<endl<<"5.- Avanzar"
	<<endl<<"6.- Ver Tablero"
	<<endl<<"7.- Terminar"<<endl;

	while(Iniciar<=6)
	{
		cout<< "Introduce la instruccion a seguir : ";
		cin>>Iniciar;
		cout<<endl;

		if (Iniciar == 1)
		{
			plu = 0;
		}
		 if (Iniciar == 2)
	    {
 		    plu = 1;
  	    }
		if (Iniciar == 3)
		{
		    girar == 0;
		}
		if (girar == 0 && posicion == 8)
		{
		    posicion == 6;
		    girar=1;
		}
		if (girar == 0 && posicion == 6)
		{
			posicion=2;
			girar=1;
		}
		if (girar == 0 && posicion == 2 )
		{
			posicion =4;
			girar=1;
		}
		if (girar==0 && posicion == 4)
		{
			posicion=8;
			girar=1;
		}
	}
	if (Iniciar == 4)
	{
		girar ==0;
	}
	if (girar==0 && posicion ==8)
	{
	    posicion=4;
		girar=1;
	}
	if (girar==0 && posicion ==4)
	{
	    posicion=2;
	    girar=1;
	}
	if (girar==0 && posicion==2)
	{
	    posicion=6;
	    girar=1;
	}
	if (girar==0 && posicion==6 )
	{
	    posicion==8;
        girar=1;
	}

	if (Iniciar==5)
	{
	    cout<<"Introduce los pasos que vas avanzar";
	    cin>>dato;
	    cout<<endl;
	}
	if(posicion==2)
	{
        if (plu==1)
		{
		     for (int i = tortuga[0];i<= tortuga[0]+dato;i++)
 			 piso[i][tortuga[0]]=1;
	    }
	    tortuga [0]= tortuga[0]+dato;
	}

	if(posicion==8)
	{
 	    if (plu==1)
        {
		      for (int i = tortuga[0];i>= tortuga[0]-dato;i--)
	          piso[i][tortuga[0]]=1;
	    }
	    tortuga [0]= tortuga[0]-dato;
    }
	if(posicion==6)
	{
	    if(plu==1)
		{
	          for(int i = tortuga[1];i<= tortuga[1]+dato;i++)
	          piso[tortuga[0]][i]=1;
	    }
	    tortuga[1]= tortuga[1]+dato;
    }
	if(posicion==4)
	{
	    if(plu==1)
		{
	           for(int i = tortuga[1];i>= tortuga[1]-dato;i--)
	           piso[tortuga[0]][i]=1;
	    }
	    tortuga[1]= tortuga[1]-dato;
	}


	if (Iniciar==6)
	{
	    cout << endl;
	    for(int f=0;f<20;f++)
		{
               for(int c=0;c<20;c++)
	           cout<<piso[f][c];
	           cout <<endl;
        }
	}
	     cout <<endl;
	     cout <<"Tortuga en "<<tortuga[0]<<" "<<tortuga[1]<<endl;



cin.get();
cin.get();
return(0);
}
