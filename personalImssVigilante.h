#ifndef PERSONALIMSSVIGILANTE_H
#define PERSONALIMSSVIGILANTE_H
#include <string> 
using namespace std;

#include "personalImss.h"

class personalImssVigilante : public personalImss
{
	public:
		
		personalImssVigilante(const string&,const string&,const string&,const string&,const string&,const string&,const string&,int=0,int=0,double=0.0);

		void establecerTurnoBase(const string &);
		string obtenerTurnoBase() const;

		void establecerGafeteBase(const string &);
		string obtenerGafeteBase() const;

		void establecerPisoBase(int);
		int obtenerPisoBase() const;

		void establecerEdificioBase(int);
		int obtenerEdificioBase() const;

		void establecerSalarioBase(double);
		double obtenerSalarioBase() const;

		void imprimir()const;
	protected:
		string turnoBase;
		string gafeteBase;
		int pisoBase;
		int edificioBase;
		double salarioBase;
};

#endif
