#ifndef PERSONALIMSS_H
#define PERSONALIMSS_H
#include <string> 
using namespace std;

class personalImss
{
	public:
		personalImss(const string &, const string &, const string &, const string &,const string &);
	
		void establecerPrimerNombre(const string &);
		string obtenerPrimerNombre() const;
	
		void establecerPrimerApellido(const string &);
		string obtenerPrimerApellido() const;
	
		void establecerTelefono(const string &);
		string obtenerTelefono() const;
	
		void establcerGenero(const string &);
		string obtenerGenero() const;
	
		void establecerCorreo(const string &);
		string obtenerCorreo() const;
	
		void imprimirDatos() const;
	
	protected:
		string primerNombre;
		string primerApellido;
		string telefono;
		string genero;
		string correo;	
};

#endif
