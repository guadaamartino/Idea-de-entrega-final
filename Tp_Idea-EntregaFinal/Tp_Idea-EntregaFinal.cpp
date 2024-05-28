// Tp_Idea-EntregaFinal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "cFormadeAtaque.h"
#include "cFormaDefensa.h"
#include "cDragon_deFuego.h"
#include "cDragon_deHielo.h"

int main() {
    cEntrenamiento* ataque = new cFormadeAtaque();
    cEntrenamiento* defensa = new cFormaDefensa();

    ataque->SetMyEstrategia("Fuego");
    defensa->SetMyEstrategia("Camuflaje");

    std::cout << "Estrategia de Ataque: " << ataque->GetMyEstrategia() << std::endl;
    std::cout << "Estrategia de Defensa: " << defensa->GetMyEstrategia() << std::endl;
   
    cDragon_deFuego dragoncito12("Mediano", "Verde", 30200);
    dragoncito12.AltaNombre("Cantar", "bailar");
    cout << dragoncito12.LeerNombreNuevo() << endl;
    dragoncito12.SetEstadoDragon(1);//esta domado
    dragoncito12.setEstrategiaAtaque(ataque);
    dragoncito12.mostrarEstrategias();//muestra ataque 
    dragoncito12.setEstrategiaDefensa(defensa);
    dragoncito12.mostrarEstrategias();//muestra defensa
    cout<<dragoncito12.MostrarCaracteristica()<<endl<<dragoncito12.MostrarDebilidad()<<endl;

    /*
    cDragon* dragoncito1 = new cDragon( "Grande", "Rojo", 30000);
    dragoncito1->AltaNombre("Silbar", "Girar");
    cout<<dragoncito1->LeerNombreNuevo()<<endl;
 
    dragoncito1->SetEstadoDragon(1); //esta domado
    dragoncito1->setEstrategiaAtaque(ataque);
    dragoncito1->mostrarEstrategias();// muestra ataque
    dragoncito1->setEstrategiaDefensa(defensa);
   
    dragoncito1->mostrarEstrategias(); //muestra defensa
    

    delete dragoncito1;
*/
    delete ataque;
    delete defensa;

    return 0;
}
