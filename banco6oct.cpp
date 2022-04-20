#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

class cuenta
	{
	protected:
		double NumCuen;
	private:
		double Saldo;
		double Deposito;
		double Retiro;
	public:
		string nombre [3];
		cuenta (double NumCuen, double Saldo)
			{
			NumCuen = NumCuen;
			Saldo = Saldo;
			Retiro = 0;
			Deposito = 0;
			}
		~cuenta(){}
			void CuentaNueva();
			void Mostrar();
			void Retirar();
			void Depositar();
	};


int main ()
{
	int i,x;
	char opcion;
	srand(time(NULL));
	i = rand()%10000;
	i = i + 1;
	cuenta usuario (i,0);
	
	do
		{
			cout <<"En que puedo ayudarle?";
			cout <<endl<<"1.-Crear cuenta"<<endl;
			cout <<"2.-Mostrar datos de propietario"<<endl;
			cout <<"3.-Retirar"<<endl;
			cout <<"4.-Depositar"<<endl;
			cout <<"5.-Salir"<<endl;
			
			cout <<"Digite una opcion:";
			opcion=getche();
			
			switch(opcion)
				{
					case '1': 
						usuario.CuentaNueva();
						break;
					case '2': 
						usuario.Mostrar();
						break;
					case '3': 
						usuario.Retirar();
						break;	
					case '4': 
						usuario.Depositar();
						break;
					case '5':
						cout<<"\nAdios\n";
						break;
					default: 
						cout<<"Error";
						break;		
				}
				break;
		break;	
		}
		
		while(opcion!='5');
			cout <<"Gracias por su preferencia." << endl;
			getch();
			return 0;
}

void cuenta::CuentaNueva()
	{
		cout << endl <<"Bienvenido a tu banca\n" <<endl;
		cout << endl <<"Comenzaremos a crear tu cuenta\n" <<endl;
		cout <<"Ingresa tu nombre:";
		cin >> nombre [0];
		cout <<"Ingresa tu primer apellido: ";
		cin >>nombre[1];
		cout <<"Ingresa tu segundo apellido: ";
		cin >>nombre[2];
		cout <<"Con que cantidad desea iniciar su cuenta?";
		cin >>Saldo;	
	}

void cuenta::Mostrar()
	{
		cout <<"Bienvenido"<<endl;
		cout <<"Nombre:"<<nombre[0]<<""<<nombre[1]<<""<<nombre[2]<<endl;
		cout <<"Numero de cuenta:"<<NumCuen<<endl;
		cout <<"Saldo disponible:"<<Saldo<<endl;
	}

void cuenta::Retirar()
	{
		int r;
		cout <<"Saldo disponible:"<<Saldo<<endl;
		cout <<"Cuanto desea retirar? "<<endl;
		cin >> r;
		
		if(r>Saldo||r<0)
			{
				cout <<"Saldo insuficiente "<<endl;
			}
			
		else
			{
				Retiro = r;
				Saldo = Saldo-r;
				cout <<"Saldo actual:"<<Saldo<<endl;
			}	
	}

void cuenta::Depositar()
	{
		cout <<"Cuanto desea depositar?";
		cin >> Deposito;
		Saldo = Saldo+Deposito;
		cout <<"Su saldo actual es de: "<<Saldo<<endl;
	}


	
	
