#include <iostream>
#include <iomanip>

using namespace std;

#include "personalImssVigilante.h"
int main()
{
	system("color B0");
				system("cls");
				
				personalImssVigilante empleado("Lucia","Vazquez","55-64-56-77-57","\tFEMENINO","lucia_vazquez17@gmail.com","MATUTINO","\t33-12MI",2,6,350);	
//Leer datos	
			cout<<"\n                                Informacion del empleado obtenida por las funciones obtener: \t"<<endl;
			cout<<"\n                                                    El primer nombre es:\t"<<empleado.obtenerPrimerNombre()<<endl;
			cout<<"\n                                                   El apellido paterno es:\t"<<empleado.obtenerPrimerApellido()<<endl;
			cout<<"\n                                                   Su telefono celular es:\t"<<empleado.obtenerTelefono()<<endl; 	
			cout<<"\n                                                        Su genero es:\t"<<empleado.obtenerGenero()<<endl;
			cout<<"\n                                                    El correo electronico:\t"<<empleado.obtenerCorreo()<<endl;
			cout<<"\n                                                     EL turno otorgado es:\t"<<empleado.obtenerTurnoBase()<<endl;
			cout<<"\n                                                         No. de Gafete:\t"<<empleado.obtenerGafeteBase()<<endl;
			cout<<"\n                                                     El numero de Piso es:\t"<<empleado.obtenerPisoBase()<<endl;
			cout<<"\n                                                   El numero de edificio es:\t"<<empleado.obtenerEdificioBase()<<endl;
			cout<<"\n                                                       El salario es de: \t$$ "<<empleado.obtenerSalarioBase()<<endl;

			cout<<"\n                           Informacion actualizada del empleado, impresa por la funcion imprimir:\n"<<endl;
			empleado.imprimir();

			cout<<"\n                                        Informacion de todo Personal Externo al Imss"<<endl;
			empleado.imprimirDatos();
	
					return 0;	
}

