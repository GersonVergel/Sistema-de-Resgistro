#include "personalImss.h"
#include <iostream>
using std::cout;

personalImss::personalImss(const string &nombre,const string &apellido,const string&_telefono,const string&_genero,const string&_correo)
{
	
	primerNombre=nombre;
	primerApellido=apellido;
	telefono=_telefono;
	genero=_genero;
	correo=_correo;	
}

void personalImss::establecerPrimerNombre(const string &nombre)
{		
	primerNombre=nombre;	
}

string personalImss::obtenerPrimerNombre() const
{
	return primerNombre;	
}

void personalImss::establecerPrimerApellido(const string &apellido)
{
	primerApellido=apellido;
}

string personalImss::obtenerPrimerApellido() const
{
	return primerApellido;	
}

void personalImss::establecerTelefono(const string &_telefono)
{
	telefono=_telefono;	
}

string personalImss::obtenerTelefono() const
{
	return telefono;	
}

void personalImss::establcerGenero(const string &_genero)
{
	genero=_genero;	
}

string personalImss::obtenerGenero() const
{
	return genero;	
}

void personalImss::establecerCorreo(const string &_correo)
{
	correo=_correo;	
}

string personalImss::obtenerCorreo() const
{
	return correo;	
}

void personalImss::imprimirDatos() const
{
	cout<<"\nPersonal del IMSS: \t"<<primerNombre<<"-"<<primerApellido<<"\nTelefono celular: \t"<<telefono<<"\nGenero: \t"<<genero<<"\nCorreo Electronico: \t"<<correo<<endl;			
}

