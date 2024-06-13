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
    cDragon *dragoncito1=new cDragon_deFuego("Pequenio", "Negro", 30200);
    dragoncito1->AltaNombre("Chistar", "murmurar");
    dragoncito1->SetEstadoDragon(1);//esta domado
    try {
        dragoncito1->setEstrategiaAtaque(ataque1);
        dragoncito1->setEstrategiaDefensa(defensa1);
    }
    catch (const exception* e) {
        cerr << e->what() << endl;
    }
    
    cEntrenamiento* ataque2 = new cFormadeAtaque();
    cEntrenamiento* defensa2 = new cFormaDefensa();
    ataque2->SetMyEstrategia("hielo");
    defensa2->SetMyEstrategia("velocidad");
    cDragon* dragoncito2 = new cDragon_deHielo("Mediano", "Verde", 10);
    dragoncito2->AltaNombre("Nadar", "dibujar");
    dragoncito2->SetEstadoDragon(0);//no esta domado
    
    // jinetes
    cJinete* jinete1 = new cJinete("Hiccup","Horrendous Haddock III","Hipo","4/2/1010","Ojos verdes",DESAPROBADO); //unico jinete en principio
    jinete1->incorporarPrimerDragon(dragoncito1);

    // vikingos 
    cVikingo* vikingo1 = new cVikingo("Estoico","el Vasto",60000,PRIMERO, "Escudo de metal");
    cVikingo* vikingo2 = new cVikingo("Patan","Jorgenson",40000,ULTIMO, "Capa termica");
    cVikingo* vikingo3 = new cVikingo("Astrid", "Hofferson", 60000, ENTRENANDO,"Traje impermeable");
    cVikingo* vikingo4 = new cVikingo("Brutacio", "Thorston",30000 ,ULTIMO, "Arnes");
    cVikingo* vikingo5= new cVikingo("Brusca", "Thorston",32000 ,APROBADO, "Gafas antidestellos");
    cVikingo* vikingo6 = new cVikingo("Fishlegs", "Ingerman",60000 ,ENTRENANDO, "Botas amortiguadas");
    cVikingo* vikingo7 = new cVikingo("Ragnar", "Lodbrok", 70000, PRIMERO, "Escudo de metal");
    cVikingo* vikingo8 = new cVikingo("Bjorn", "Ironside", 30000, ULTIMO, "Capa termica");
    cVikingo* vikingo9 = new cVikingo("Erik ", "Red", 80000, ENTRENANDO, "Traje impermeable");
    cVikingo* vikingo10 = new cVikingo("Leif", "Erikson", 35000, ULTIMO, "Arnes");
    cVikingo* vikingo11 = new cVikingo("Olaf", "Hardrada", 39000, APROBADO, "Gafas antidestellos");
    cVikingo* vikingo12 = new cVikingo("Ingvar", "Stonefist", 750000, ENTRENANDO, "Botas amortiguadas");

    //cargo en isla
    Isla_Berk->CargarDragon(dragoncito1);
    Isla_Berk->CargarDragon(dragoncito2);
    Isla_Berk->CargarJinete(jinete1);
    Isla_Berk->CargarVikingo(vikingo1);
    Isla_Berk->CargarVikingo(vikingo2);
    Isla_Berk->CargarVikingo(vikingo3);
    Isla_Berk->CargarVikingo(vikingo4);
    Isla_Berk->CargarVikingo(vikingo5);
    Isla_Berk->CargarVikingo(vikingo6);
    Isla_Berk->CargarVikingo(vikingo7);
    Isla_Berk->CargarVikingo(vikingo8);
    Isla_Berk->CargarVikingo(vikingo9);
    Isla_Berk->CargarVikingo(vikingo10);

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
    
    cJinete* jinete2 = new cJinete();
    Isla_Berk->VikingoAJinete(1, jinete2);

    //set resto de los atributos y dragones
    cJinete* jinete3 = new cJinete();
    Isla_Berk->VikingoAJinete(2, jinete3);
    //set resto de los atributos y dragones
    
    getchar();
    std::cout << "Hipo: Gracias " << jinete2->LeerNombre()<<" y "<<jinete3->LeerNombre()<<" por unirse conmigo "<<std::endl;
    
    //crear dragona reina
    cDragon* MuerteVerde = new cDragon("Grande","Verde",10000);

    getchar();
    std::cout << "Hipo: Oh no! Los dragones malos estan manejados por una reina... ella es" << std::endl;
    getchar();
    std::cout << "Astrid: Hay que convencer a los vikingos a unirse y luchar todos contra ella. Hipo y Patapez, vayamos a hablar con Estoico" << endl;
    getchar();
    std::cout << "Charla en proceso..." << std::endl;
    getchar();
    std::cout << "Estoico: Estoy cansado de tus locuras Hipo!" << std::endl;
    getchar();
    std::cout<< " Hipo: Deja que nuestros dragones peleen la proxima vez que nos ataquen y veras." << std::endl;
    //se suman 2 jinetes 

    std::cout << "Hemos detectado el ingreso de dragones a la isla. Ellos son: " << std::endl;  //leer dragones (solo no domados)
    Isla_Berk->ListarDragonesNODOMADOS();
    getchar();
    std::cout << "Estoico: Retrocedan mis vikingos... Dejemos ver como se defienden los dragones:" << std::endl;
    //Isla_Berk->GuerraEntreDragones();
    getchar();
    std::cout << "Uno de los dragones ha querido matar a Estoico, pero gracias a Chimuelo ha sobrevivido" << std::endl;
    getchar();
    std::cout<< "Hipo llora por el estado de Chimuelo y pide por favor que lo curen" << std::endl;
    Isla_Berk->RealizarCuracion(dragoncito1); //llamar a funcion friend curandero de dragon que permite sumar 20000 a la vida del dragon
    getchar();
    std::cout << "Estoico: Hipo, lo siento mucho tenias razon... Unamonos en contra de Muerte Verde!" << std:: endl;

    //suman muchos jinetes y dragones domados
    getchar();
    std::cout << "Entrenando dragones..." << std::endl;
    getchar();
    std::cout << "Ha llegado la hora, debemos luchar contra Muerte Verde. " << std::endl;
    Isla_Berk->BatallaFinal(MuerteVerde);
    //listar dragones domados, jinetes y vikingos 
    //funcion que pelea con muerte verde
    //se decide si el final fue lindo o triste.

    
    
    
  //Libero la memoria de los entrenamientos 
   delete ataque1;
   delete defensa1;
   delete ataque2;
   delete defensa2;
  //Libero del dragon
   delete dragoncito1;
   delete dragoncito2;
   delete MuerteVerde;
  //Librero jinetes
   delete jinete1;
   delete jinete2;
   delete jinete3;
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
