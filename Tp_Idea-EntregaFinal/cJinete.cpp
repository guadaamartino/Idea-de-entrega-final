#include "cJinete.h"
#include "cDragon.h"

cJinete::cJinete(string nombre, string apellido, string apodo, string fecha_nacimiento, string caracteristicas, Resultado certificado):FechaNacimiento_jinete(fecha_nacimiento)
{
    nombre_jinete = nombre;
    apellido_jinete = apellido;
    apodo_jinete = apodo;
    Carac_fisicas = caracteristicas;
    resultadoEnEntrenamiento = certificado;
    dragoncito1 = nullptr;
    dragoncito2 = nullptr;
}


void cJinete::incorporarPrimerDragon(cDragon* nuevoDragon1) {
    dragoncito1 = nuevoDragon1;
}

void cJinete::incorporarSegundoDragon(cDragon* nuevoDragon2)
{
    dragoncito2 = nuevoDragon2;
}


void cJinete::setResultadoEntrenamiento(Resultado resultado) {
    resultadoEnEntrenamiento = resultado;
}
void cJinete::mostrarResultadoEntrenamiento() {
    switch (resultadoEnEntrenamiento) {
    case NO_ASISTIO:
        cout << "No asistió";
        break;

    case DESAPROBADO:
        cout << "Desaprobado";
        break;

        cout << endl;
    }
}

void cJinete::setNombre(string nombre) {
    nombre_jinete = nombre;
}

void cJinete::setApellido(string apellido) {
    apellido_jinete = apellido;
}

void cJinete::setApodo(string apodo) {
    apodo_jinete = apodo;
}

void cJinete::setCaracteristicas(string caracteristicas) {
    Carac_fisicas = caracteristicas;

}

Resultado cJinete::LeerResultadoEntrenamiento() {
    return resultadoEnEntrenamiento;
}

string cJinete::LeerNombre() {
    return nombre_jinete;
}

string cJinete::LeerApellido() {
    return apellido_jinete;
}

string cJinete::LeerApodo() {
    return apodo_jinete;
}

string cJinete::LeerFechaNacimiento() {
    return FechaNacimiento_jinete;
}

string cJinete::LeerCaracteristicas() {
    return Carac_fisicas;

}

string cJinete::leerDRAGON(cDragon* dragoncito_asociado)
{
    return dragoncito_asociado->LeerNombreNuevo();
}

int cJinete::IfJineteDomo()//funcion que verifica si tiene algun dragon asociado
{
    if (dragoncito1 != nullptr) {//el primer dragon asociado si o si se guarda en dragoncito1, entonces con fijarnos que ese no sea nulo se sabe que domo
        return 1;
    }

    return 0;
}

cDragon* cJinete::devolver_PrimerDragon()
{
    return dragoncito1;
}

cDragon* cJinete::devolver_SegundoDragon()
{
    return dragoncito2;
}

string cJinete::toString()
{
    string dragondomado1 = (dragoncito1 != nullptr) ? dragoncito1->LeerNombreNuevo(): "Ningun dragon domado";
    string dragondomado2 = (dragoncito2 != nullptr) ? dragoncito2->LeerNombreNuevo() : "No hay segundo dragon domado";
    string resultado = (resultadoEnEntrenamiento == NO_ASISTIO) ? "No asistio" : "Desaprobado";

    return "Nombre: "+nombre_jinete+
        "\nApellido: "+apellido_jinete+
        "\nApodo: "+apodo_jinete+
        "\nFecha de Nacimiento: "+FechaNacimiento_jinete+
        "\nCaracteristicas fisicas: "+Carac_fisicas+
        "\nResultado Entrenamiento: "+resultado+
        "\n1 Dragon domado: "+dragondomado1+
        "\n2 Dragon domado: "+dragondomado2;
}


cJinete::~cJinete() {}
