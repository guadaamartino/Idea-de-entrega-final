// Tp_Idea-EntregaFinal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "cFormadeAtaque.h"
#include "cFormaDefensa.h"
#include "cDragon_deFuego.h"
#include "cDragon_deHielo.h"
#include "cDragon_deAgua.h"
#include "cDragon_deLuz.h"
#include "cDragon_deTierra.h"
#include "cDragon_deViento.h"
#include "cJinete.h"
#include "cVikingo.h"
#include "cRegistroEstoico.h"

int main() {
    std::cout << "Como Entrenar a tu Dragon." << std::endl;
    std::cout << "Buscando mas jugadores..." << std::endl;
    getchar();
    std::cout << "100% Cargado"<<std::endl<<"Imprima enter para iniciar el juego" << std::endl;
   
    cRegistroEstoico* Isla_Berk = new cRegistroEstoico();

    // dragones
    cEntrenamiento* ataque1 = new cFormadeAtaque();
    cEntrenamiento* defensa1 = new cFormaDefensa();
    ataque1->SetMyEstrategia("fuego");
    defensa1->SetMyEstrategia("escamas");
    cDragon *dragoncito1=new cDragon_deFuego("Pequenio", "Negro", 90200);
    dragoncito1->AltaNombre("Chistar", "murmurar");
    dragoncito1->SetEstadoDragon(1);//esta domado
    try {
        dragoncito1->setEstrategiaAtaque(ataque1);
        dragoncito1->setEstrategiaDefensa(defensa1);
    }
    catch (const exception* e) {
        cerr << e->what() << endl;
    }
    
   
    cDragon* dragoncito2 = new cDragon_deHielo("Mediano", "Verde", 10);
    dragoncito2->AltaNombre("Nadar", "dibujar");
    dragoncito2->SetEstadoDragon(0);//no esta domado

    cDragon* dragoncito3 = new cDragon_deFuego("Chico", "Marron", 300200);
    dragoncito3->AltaNombre("Cantar", "imaginar");
    dragoncito3->SetEstadoDragon(0);//no esta domado

    cDragon* dragoncito4 = new cDragon_deAgua("Grande", "Rojo", 4000);
    dragoncito4->AltaNombre("Gritar", "andar");
    dragoncito4->SetEstadoDragon(0);//no esta domado

    cDragon* dragoncito5 = new cDragon_deLuz("Grande", "Gris", 91000);
    dragoncito5->AltaNombre("Bucear", "rimar");
    dragoncito5->SetEstadoDragon(0);//no esta domado
   
    cDragon* dragoncito6 = new cDragon_deTierra("Chico", "Rosa", 60000);
    dragoncito6->AltaNombre("Morder", "susurrar");
    dragoncito6->SetEstadoDragon(0);//no esta domado
  
  
  
    
    // jinetes
    cJinete* jinete1 = new cJinete("Hiccup","Horrendous Haddock III","Hipo","4/2/1010","Ojos verdes",DESAPROBADO); //unico jinete en principio
    jinete1->incorporarPrimerDragon(dragoncito1);

    // vikingos 
    cVikingo* vikingo1 = new cVikingo("Estoico","el Vasto",600000,PRIMERO, "Escudo de metal", "Esto", "Alto", "18/02/850");
    cVikingo* vikingo2 = new cVikingo("Patan","Jorgenson",40000,ULTIMO, "Capa termica", "Pa", "Musculoso","08/04/875");
    cVikingo* vikingo3 = new cVikingo("Astrid", "Hofferson", 60000, ENTRENANDO,"Traje impermeable", "As","Atletica","04/09/878");
    cVikingo* vikingo4 = new cVikingo("Brutacio", "Thorston",1 ,ULTIMO, "Arnes", "Bruti", "Delgada","22/11/875");
    cVikingo* vikingo5= new cVikingo("Brusca", "Thorston",32000 ,APROBADO, "Gafas antidestellos","Brus", "Rubia","22/11/875");
    cVikingo* vikingo6 = new cVikingo("Fishlegs", "Ingerman",60000 ,ENTRENANDO, "Botas amortiguadas", "Fish","Grande","14/06/876");
    cVikingo* vikingo7 = new cVikingo("Ragnar", "Lodbrok", 70000, PRIMERO, "Escudo de metal", "Rag", "Fuerte","12/01/785");
    cVikingo* vikingo8 = new cVikingo("Bjorn", "Ironside", 30000, ULTIMO, "Capa termica", "Bjorn", "Morocho","15/03/790");
    cVikingo* vikingo9 = new cVikingo("Erik ", "Red", 10000, ENTRENANDO, "Traje impermeable", "Erik", "Agil","22/07/795");
    cVikingo* vikingo10 = new cVikingo("Leif", "Erikson", 35000, ULTIMO, "Arnes","Le", "Pelirroja","03/10/800");
    cVikingo* vikingo11 = new cVikingo("Olaf", "Hardrada", 39000, APROBADO, "Gafas antidestellos", "Oli","Grande","27/12/805");
    cVikingo* vikingo12 = new cVikingo("Ingvar", "Stonefist", 750000, ENTRENANDO, "Botas amortiguadas","Ing", "Alto","09/05/810");

    //cargo en isla
    *Isla_Berk + dragoncito1;
    *Isla_Berk + dragoncito2;
    *Isla_Berk + dragoncito3;
    *Isla_Berk + dragoncito4;
    *Isla_Berk + dragoncito5;
    *Isla_Berk + dragoncito6;
    *Isla_Berk + jinete1;
    *Isla_Berk + vikingo1;
    *Isla_Berk + vikingo2;
    *Isla_Berk + vikingo3;
    *Isla_Berk + vikingo4;
    *Isla_Berk + vikingo5;
    *Isla_Berk + vikingo6;
    *Isla_Berk + vikingo7;
    *Isla_Berk + vikingo8;
    *Isla_Berk + vikingo9;
    *Isla_Berk + vikingo10;
    *Isla_Berk + vikingo11;
    *Isla_Berk + vikingo12;


    getchar();
    //comienza la historia
    std::cout << "----------------------------------------------Bienvenido/a a la isla de Berk--------------------------------------------" << std::endl;
    getchar();
    std::cout << "Esta isla esta conformada por " << std::endl; //leer ciudadanos (lista jinetes y lista vikingos) 
    Isla_Berk->ListarJinetes();
    Isla_Berk->ListarVikingos();
    getchar();
    std::cout << "Hemos detectado el ingreso de dragones a la isla. Ellos son: " << std::endl;//leer dragones (solo no domados q son los que van a luchar)
    Isla_Berk->ListarDragonesNODOMADOS();
    getchar();
    std::cout << "Vikingos a proteger la isla de Berk!" << std::endl;
    Isla_Berk->GuerraDragonesVikingos();
    
    getchar();
    std::cout << "Ha finalizado la guerra..." << std::endl << "Estos vikingos han sobrevivido:" << std::endl;// leer nuevamente lista de vikingos actualizada
    Isla_Berk->ListarVikingos();
    getchar();
    std::cout << "Hipo: Papa,No te das cuenta que estas guerras hacen mucho danio? Debemos unirnos con los dragones!" << std::endl;
    getchar();
    std::cout << "Estoico: Hipo, mira lo que han ocasionado tus amigos. Hemos perdido comida y amigos. No hay forma que me una a ellos" << std::endl;
    getchar();
    std::cout << "Lastimosamente hipo no ha convencido a su padre, pero... nuevos jinetes han aparecido para sumarse con Hipo!" << std::endl;
    
    //dragones nuevos domados
    cEntrenamiento* ataque2 = new cFormadeAtaque();
    cEntrenamiento* defensa2 = new cFormaDefensa();
    ataque2->SetMyEstrategia("agua");
    defensa2->SetMyEstrategia("volar");
    cDragon* dragoncito7 = new cDragon_deAgua("Grande", "Violeta", 60200);
    dragoncito7->AltaNombre("Rugir", "girar");
    dragoncito7->SetEstadoDragon(1);//esta domado
    try {
        dragoncito7->setEstrategiaAtaque(ataque2);
        dragoncito7->setEstrategiaDefensa(defensa2);
    }
    catch (const exception* e) {
        cerr << e->what() << endl;
    }

    cEntrenamiento* ataque3 = new cFormadeAtaque();
    cEntrenamiento* defensa3 = new cFormaDefensa();
    ataque3->SetMyEstrategia("luz");
    defensa3->SetMyEstrategia("morder");
    cDragon* dragoncito8 = new cDragon_deLuz("Grande", "Multicolor", 35200);
    dragoncito8->AltaNombre("Matar", "inventar");
    dragoncito8->SetEstadoDragon(1);//esta domado
    try {
        dragoncito8->setEstrategiaAtaque(ataque3);
        dragoncito8->setEstrategiaDefensa(defensa3);
    }
    catch (const exception* e) {
        cerr << e->what() << endl;
    }

    cEntrenamiento* ataque4 = new cFormadeAtaque();
    cEntrenamiento* defensa4 = new cFormaDefensa();
    ataque4->SetMyEstrategia("viento");
    defensa4->SetMyEstrategia("rajuniar");
    cDragon* dragoncito9 = new cDragon_deViento("Grande", "Bordo", 40200);
    dragoncito9->AltaNombre("Comer", "patear");
    dragoncito9->SetEstadoDragon(1);//esta domado
    try {
        dragoncito9->setEstrategiaAtaque(ataque4);
        dragoncito9->setEstrategiaDefensa(defensa4);
    }
    catch (const exception* e) {
        cerr << e->what() << endl;
    }

    //cargo en isla
    *Isla_Berk + dragoncito7;
    *Isla_Berk + dragoncito8;
    *Isla_Berk + dragoncito9;

    //incorporo a jinetes
    cJinete* jinete2 = new cJinete();
    cJinete* jinete3 = new cJinete();
    try {
     Isla_Berk->VikingoAJinete(1, jinete2);//el q queda abajo de estoico
     Isla_Berk->VikingoAJinete(1, jinete3);//el q queda abajo de estoico
    }
    catch (const exception * e) {
        cerr << e->what() << endl;
    }
    jinete2->incorporarPrimerDragon(dragoncito7);
    jinete3->incorporarPrimerDragon(dragoncito8);
    jinete3->incorporarSegundoDragon(dragoncito9);
    
    getchar();
    std::cout << "Hipo: Gracias " << jinete2->LeerNombre()<<" y "<<jinete3->LeerNombre()<<" por unirse conmigo "<<std::endl;
    
    //creo dragona reina
    cDragon* MuerteVerde = new cDragon("Grande","Verde",10000);
    MuerteVerde->AltaNombreReina("Muerte Verde");


    getchar();
    std::cout << "Hipo: Oh no! Los dragones malos estan manejados por una reina... ella es " << MuerteVerde->LeerNombreNuevo()<<std::endl;
    getchar();
    std::cout << jinete2->LeerNombre() << ": Hay que convencer a los vikingos a unirse y luchar todos contra ella. Vayamos a hablar con Estoico" << endl;
    getchar();
    std::cout << "Charla en proceso..." << std::endl;
    getchar();
    std::cout << "Estoico: Estoy cansado de tus locuras Hipo!" << std::endl;
    getchar();
    std::cout<< "Hipo: Deja que nuestros dragones peleen la proxima vez que nos ataquen y veras." << std::endl;
    
    cEntrenamiento* ataque5 = new cFormadeAtaque();
    cEntrenamiento* defensa5 = new cFormaDefensa();
    ataque5->SetMyEstrategia("hielo");
    defensa5->SetMyEstrategia("volar");
    cDragon* dragoncito10 = new cDragon_deHielo("Chico", "Beige", 31200);
    dragoncito10->AltaNombre("Escupir", "helar");
    dragoncito10->SetEstadoDragon(1);//esta domado
    try {
        dragoncito10->setEstrategiaAtaque(ataque5);
        dragoncito10->setEstrategiaDefensa(defensa5);
    }
    catch (const exception* e) {
        cerr << e->what() << endl;
    }

    cEntrenamiento* ataque6 = new cFormadeAtaque();
    cEntrenamiento* defensa6 = new cFormaDefensa();
    ataque6->SetMyEstrategia("fuego");
    defensa6->SetMyEstrategia("envenenar");
    cDragon* dragoncito11 = new cDragon_deFuego("Pequenio", "Negro", 30200);
    dragoncito11->AltaNombre("Dormir", "manipular");
    dragoncito11->SetEstadoDragon(1);//esta domado
    try {
        dragoncito11->setEstrategiaAtaque(ataque6);
        dragoncito11->setEstrategiaDefensa(defensa6);
    }
    catch (const exception* e) {
        cerr << e->what() << endl;
    }
    //cargo en isla
    *Isla_Berk + dragoncito10;
    *Isla_Berk + dragoncito11;

    cJinete* jinete4 = new cJinete();
    cJinete* jinete5 = new cJinete();
    try {
        Isla_Berk->VikingoAJinete(1, jinete4);//el q queda abajo de estoico
        Isla_Berk->VikingoAJinete(1, jinete5);//el que queda abajo de estoico
    }
    catch (const exception* e) {
        cerr << e->what() << endl;
    }
    jinete4->incorporarPrimerDragon(dragoncito10);
    jinete5->incorporarPrimerDragon(dragoncito11);

    getchar();
    std::cout << "Hipo: Gracias " << jinete4->LeerNombre() << " y " << jinete5->LeerNombre() << " por unirse conmigo " << std::endl;
    getchar();
    std::cout << "Hemos detectado el ingreso de dragones a la isla. Ellos son: " << std::endl;  //leer dragones (solo no domados)
    Isla_Berk->ListarDragonesNODOMADOS();
    getchar();
    std::cout << "Estoico: Retrocedan mis vikingos... Dejemos ver como se defienden los dragones:" << std::endl;
   
    Isla_Berk->GuerraEntreDragones();

    getchar();
    std::cout << "Uno de los dragones ha querido matar a Estoico, pero gracias a Chimuelo ha sobrevivido" << std::endl;
    getchar();
    std::cout<< "Hipo llora por el estado de Chimuelo y pide por favor que lo curen" << std::endl;
    getchar();
    std::cout << "Llamando al medico..." << std::endl;

    try{
      Isla_Berk->RealizarCuracion(dragoncito1); //llamar a funcion friend curandero de dragon que permite sumar 20000 a la vida del dragon
    }
    catch (const exception* e) {
        cerr << e->what() << endl;
    }

    getchar();
    std::cout << "Estoico: Hipo, lo siento mucho tenias razon... Unamonos en contra de Muerte Verde!" << std:: endl;


    //suman muchos jinetes y dragones domados
    getchar();
    std::cout << "Entrenando dragones..." << std::endl;
    getchar();
    std::cout << "Ha llegado la hora, debemos luchar contra Muerte Verde. " << std::endl;
    getchar();
    Isla_Berk->BatallaFinal(MuerteVerde);

   
   
    
  //Libero la memoria de los entrenamientos 
   delete ataque1;
   delete defensa1;
 
  //Libero del dragon
   delete dragoncito1;
   delete dragoncito2;
   delete dragoncito3;
   delete dragoncito4;
   delete dragoncito5;
   delete dragoncito6;
   delete dragoncito7;
   delete dragoncito8;
   delete dragoncito9;
   delete dragoncito10;
   delete dragoncito11;
   delete MuerteVerde;
  //Librero jinetes
   delete jinete1;
   delete jinete2;
   delete jinete3;
   delete jinete4;
   delete jinete5;
  //Libero vikingos
   delete vikingo1;
   delete vikingo2;
   delete vikingo3;
   delete vikingo4;
   delete vikingo5;
   delete vikingo6;
  //Libero isla
   delete Isla_Berk;
    return 0;
}
