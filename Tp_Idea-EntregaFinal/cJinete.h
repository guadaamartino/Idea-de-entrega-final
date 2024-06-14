#pragma once
#include "cDragon.h"
#include <string>
using namespace std;
enum Resultado { NO_ASISTIO, DESAPROBADO }; //solo pueden ser esos pq sino seria vikingo
class cJinete
{
private:
    string nombre_jinete, apellido_jinete, apodo_jinete;
    string FechaNacimiento_jinete;
    string Carac_fisicas;
    Resultado resultadoEnEntrenamiento;
    cDragon* dragoncito1;
    cDragon* dragoncito2;//dragones domados max 2
public:
    cJinete(string nombre, string apellido, string apodo, string fecha_nacimiento, string caracteristicas, Resultado certificado);
    cJinete() {};
    ~cJinete();

    //asignar atributos 
    void incorporarPrimerDragon(cDragon* nuevoDragon1);
    void incorporarSegundoDragon(cDragon* nuevoDragon2);
    void setResultadoEntrenamiento(Resultado resultado);
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setApodo(string apodo);
    void setCaracteristicas(string caracteristicas);
    void setFechadeNacimiento(string fecha_nacimiento);
   
    //leer atributos 
    Resultado  LeerResultadoEntrenamiento();
    void mostrarResultadoEntrenamiento();
    string LeerNombre();
    string LeerApellido();
    string LeerApodo();
    string LeerFechaNacimiento();
    string LeerCaracteristicas();
    string leerDRAGON(cDragon* dragoncito_asociado);
    int IfJineteDomo();
    cDragon* devolver_PrimerDragon();
    cDragon* devolver_SegundoDragon();
    string toString();

};

