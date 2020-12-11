#include "menu.h"
#include<iostream>
using namespace std;
ChoixMenu demanderChoixMenu(){
char saisieChoix;
cin>>saisieChoix;
if (saisieChoix==static_cast<char>(ChoixMenu::JOUER) || saisieChoix==static_cast<char>(ChoixMenu::QUITTER)){
    return static_cast<ChoixMenu>(saisieChoix);
}
else {
    return ChoixMenu::INCORRECT;
}
}
