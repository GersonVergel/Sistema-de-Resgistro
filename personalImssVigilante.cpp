#include "personalImssVigilante.h"
#include <iostream>
using namespace std;

personalImssVigilante::personalImssVigilante(const string&nombre,const string&apellido,const string&_telefono,const string&_genero,const string&_correo,const string&turno,const string&gafete,int piso,int edificio,double salario)
:personalImss(nombre,apellido,_telefono,_genero,_correo)
{
	establecerTurnoBase(turno);
	establecerGafeteBase(gafete);
	establecerPisoBase(piso);
	establecerEdificioBase(edificio);
	establecerSalarioBase(salario);	
}

void personalImssVigilante::establecerTurnoBase(const string &turno)
{
	turnoBase=turno;
}

string personalImssVigilante::obtenerTurnoBase() const
{
	return turnoBase;	
}
void personalImssVigilante::establecerGafeteBase(const string &gafete)
{
	gafeteBase=gafete;
}

string personalImssVigilante::obtenerGafeteBase() const
{
	return gafeteBase;	
}

void personalImssVigilante::establecerPisoBase(int piso)
{
	pisoBase=piso;	
}

int personalImssVigilante::obtenerPisoBase() const
{
	return pisoBase;	
}
void personalImssVigilante::establecerEdificioBase(int edificio)
{
	edificioBase=edificio;	
}

int personalImssVigilante::obtenerEdificioBase() const
{
	return edificioBase;	
}

void personalImssVigilante::establecerSalarioBase(double salario)
{
	salarioBase=salario;	
}

double personalImssVigilante::obtenerSalarioBase() const
{
	return salarioBase;	
}

void personalImssVigilante::imprimir() const
{
	cout<<"\nPersonal del IMSS encargado de la vigilancia:\t"<<primerNombre<<"-"<<primerApellido<<"\nTelefono celular:\t\t\t\t"<<telefono<<"\nGenero:\t\t\t\t\t"<<genero<<"\nCorreo Electronico:\t\t\t\t"<<correo<<"\nTurno:\t\t\t\t\t\t"<<turnoBase<<"\nGafete:\t\t\t\t\t"<<gafeteBase<<"\nPiso:\t\t\t\t\t\t"<<pisoBase<<"\nEdificio:\t\t\t\t\t"<<edificioBase<<"\nSalario:\t\t\t\t\t$$ "<<salarioBase<<endl;

}

