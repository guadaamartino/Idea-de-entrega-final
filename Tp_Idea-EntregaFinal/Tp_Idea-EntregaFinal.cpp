// Tp_Idea-EntregaFinal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "cFormadeAtaque.h"
#include "cFormaDefensa.h"
#include "cDragon_deFuego.h"
#include "cDragon_deHielo.h"
#include "cJinete.h"
#include "cVikingo.h"
#include "cRegistroEstoico.h"

int main() {
    std::cout << "Como Entrenar a tu Dragon" << std::endl;
    std::cout << "Buscando mas jugadores..." << std::endl<<"Los jugadores son..."<<std::endl;
    
    //1 dragon
    cEntrenamiento* ataque1 = new cFormadeAtaque();
    cEntrenamiento* defensa1 = new cFormaDefensa();
    ataque1->SetMyEstrategia("fuego");
    defensa1->SetMyEstrategia("escamas");
    cDragon *dragoncito1=new cDragon_deFuego("Pequenio", "Negro", 30200);
    dragoncito1->AltaNombre("Chistar", "murmurar");
    dragoncito1->SetEstadoDragon(1);//esta domado
    try {
        dragoncito1->setEstrategiaAtaque(ataque1);
        dragoncito1->setEstrategiaDefensa(defensa1);
    }
    catch (const exception& e) {
        cerr << e.what() << endl;
    }
   
   
    //2 dragon 
    cEntrenamiento* ataque2 = new cFormadeAtaque();
    cEntrenamiento* defensa2 = new cFormaDefensa();
    ataque2->SetMyEstrategia("hielo");
    defensa2->SetMyEstrategia("velocidad");
    cDragon* dragoncito2 = new cDragon_deHielo("Mediano", "Verde", 50000);
    dragoncito2->AltaNombre("Nadar", "dibujar");
    dragoncito2->SetEstadoDragon(0);//no esta domado
   
    //1 jinete 
    cJinete* jinete1 = new cJinete("Hiccup","Horrendous Haddock III","Hipo","4/2/1010","Ojos verdes",DESAPROBADO);
    jinete1->incorporarPrimerDragon(dragoncito1);

    //1 vikingo 
    cVikingo* vikingo1 = new cVikingo("Estoico","el Vasto",60000,PRIMERO);

    std::cout << "Imprima enter para iniciar el juego" << std::endl;
    getchar();
    std::cout << "-----------------Bienvenido/a a la isla de Berk-----------------" << std::endl;
    std::cout << "Esta isla esta conformada por " << std::endl; //leer ciudadanos (lista jinetes y lista vikingos) (metodo to string)
    std::cout << "Hemos detectado el ingreso de dragones a la isla. Ellos son: " << std::endl;//leer dragones (solo no domados)
   

    std::cout << "Vikingos a proteger la isla de Berk!" << std::endl;
    //llamar a la funcion de guerra entre vikingos y dragones no domados.Agregar en esa funcion --> "comienza la guerra"

    std::cout << "Ha finalizado la guerra..." << std::endl << "Estos vikingos han sobrevivido:" << std::endl;// leer nuevamente lista de vikingos actualizada
    std::cout << "Hipo: Papa,No te das cuenta que estas guerras hacen mucho danio? Debemos unirnos con los dragones!" << std::endl;
    std::cout << "Estoico: Hipo, mira lo que han ocasionado tus amigos. Hemos perdido comida y amigos" << std::endl;
    std::cout << "Lastimosamente hipo no ha convencido a su padre, pero... nuevos jinetes han aparecido para sumarse con Hipo!" << std::endl;
    //agregar jinetes nuevos y domar a dragones.
    //astrid y patapez
    std::cout << "Hipo: Gracias " <<"y "<<"por unirse conmigo "<<std::endl;
    
    //crear dragona reina

    std::cout << "Hipo: Oh no! Los dragones malos estan manejados por una reina... ella es" << std::endl;
    std::cout << "Astrid: Hay que convencer a los vikingos a unirse y luchar todos contra ella. Hipo y Patapez, vayamos a hablar con Estoico" << endl;
    std::cout << " Estoico: Estoy cansado de tus locuras Hipo!" << std::endl << " Hipo: Deja que nuestros dragones peleen la proxima vez que nos ataquen y veras." << std::endl;
    //se suman 3 jinetes 
    std::cout << "Hemos detectado el ingreso de dragones a la isla. Ellos son: " << std::endl;  //leer dragones (solo no domados)
    std::cout << " Estoico: Retrocedan mis vikingos... Dejemos ver como se defienden los dragones:" << std::endl;
    //lucha entre dragones domados y no domados

    std::cout << " Uno de los dragones ha querido matar a Estoico, pero gracias a Chimuelo ha sobrevivido" << std::endl << "Hipo llora por el estado de Chimuelo y pide por favor que lo curen" << std::endl;
    //llamar a funcion friend curandero de dragon que permite sumar 1000 a la vida del dragon

    std::cout << "Estoico: Hipo, lo siento mucho tenias razon... Unamonos en contra de Muerte Verde!" << std:: endl;

    //suman muchos jinetes y dragones domados

    std::cout << "Entrenando dragones..." << std::endl;
    std::cout << " Ha llegado la hora, debemos luchar contra Muerte Verde. " << std::endl;
    //listar dragones domados, jinetes y vikingos 
    //funcion que pelea con muerte verde
    //se decide si el final fue lindo o triste.

    
    
    
  // Liberar la memoria de los entrenamientos 
   delete ataque1;
   delete defensa1;
   delete ataque2;
   delete defensa2;
  //libero del dragon
   delete dragoncito1;
   delete dragoncito2;
  //librero jinetes
   delete jinete1;
  //libero isla

    return 0;
}
