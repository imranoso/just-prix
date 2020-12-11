#include<iostream>
#include<windows.h>
#include"jeu.h"
#include"constantes.h"
#include"menu.h"
using namespace std;





int main(){


SetConsoleOutputCP(65001);
cout<<"Trouver le prix"<<endl;
cout<<static_cast<char>(ChoixMenu::JOUER)<<" : jouer"<<endl;
cout<<static_cast<char>(ChoixMenu::QUITTER)<<" : quitter"<<endl;
auto choix{ChoixMenu::JOUER};
choix=demanderChoixMenu();
switch(choix){
case ChoixMenu::JOUER:
     jouerTroisParties();
     break;
case ChoixMenu::QUITTER:
     cout<<" Au revoir! "<<endl;
     break;
case ChoixMenu::INCORRECT:
default:
    return EXIT_FAILURE;

}
}


