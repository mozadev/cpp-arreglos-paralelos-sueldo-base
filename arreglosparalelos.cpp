#include<iostream>
#include<locale.h>
#include <conio.h>
#include <math.h>

using namespace std;
void ingresadatos(int* n, string* nombre,int* aniosServ, double* sueldoBase)
{
	for (int i = 0; i < *n; i++)
	{
		cout << "ingresa nombre  " << i + 1 << ": "; cin >> nombre[i];
		
		cout << "ingrese anios de serivicio " << i + 1 << ": "; cin >> aniosServ[i];

		switch (aniosServ[i])
		{
		case 1:
			
			 sueldoBase[i]=950;
			 sueldoBase[i] = sueldoBase[i]*1.125;
		case 2:
			sueldoBase[i] = 1150;
			sueldoBase[i] = sueldoBase[i] * 1.125;
			break;
		case 3:
			sueldoBase[i] = 1150;
			sueldoBase[i] = sueldoBase[i] * 1.125;
			break;
		case 4:
			sueldoBase[i] = 1550;
			sueldoBase[i] = sueldoBase[i] * 1.15;
			break;
		case 5:
			sueldoBase[i] = 1550;
			sueldoBase[i] = sueldoBase[i] * 1.17;
			break;
		case 6:
			sueldoBase[i] = 1800;
			sueldoBase[i] = sueldoBase[i] * 1.20;
			break;
		default:
			sueldoBase[i] = 1800;
			sueldoBase[i] = sueldoBase[i] * 1.20;

		}
		
	}
	
}

int cantEmpleados(int* n, int* anioServi) {
	int canti = 0;
	for (int i = 0; i < *n; i++)
	{
		if (anioServi[i] < 2 && anioServi[i]>0)
		{
			canti++;
		}
		
	}
	return canti;
}


void menor_sueldo(int* n, string* nombre, double* sueldoBase) {
	double menor = 999999;
	for (int i = 0; i < *n; i++)
	{
		if (sueldoBase[i] < menor)
		{
			menor = sueldoBase[i];
		}
		cout << "los nombres y apellidos de la persona con menor sueldo:  " << nombre[i];

		
	}

}


int main()
{
	int n;
	cout << "ingrese cantidad empleados: "; cin >> n;
	while (n <= 0)
	{
		cout << "ingrese num empleados mayor a 0: "; cin >> n;
	}
	string* nombre = new string[n];
	int* anioServi = new int[n];
	double* sueldoBase = new double[n];
	
	ingresadatos(&n, nombre,anioServi,sueldoBase);
	int cantidad =cantEmpleados(&n, anioServi);
	cout << "cantida empleados anios servicio entre 0 y 2 : " << cantidad << endl;
	menor_sueldo(&n, nombre, sueldoBase);
	delete[]nombre;
	delete[]anioServi;
	delete[]sueldoBase;

	_getch();

}