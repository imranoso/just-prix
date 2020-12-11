#include<iostream>
#include"constantes.h"
#include"jeu.h"
#include<chrono>
using namespace std;
bool continuer = true ;


void jouerPartie(int bonprix){
    cout<<"Trouver le prix: "<<endl;
    auto proposition{0};
    auto nombreTentatives{0};

    using Duree = std::chrono::duration<double>;

    auto debutPartie = std::chrono::system_clock::now();

    do {
        cin>>proposition;
        nombreTentatives++;
        if (proposition<0) break;
        if (proposition==bonprix){
            cout<<"Bravo!"<<endl;
        }
        else if (proposition>bonprix){
            cout<<"C'est moins!"<<endl;
            }
            else {
            cout<<"C'est plus!"<<endl;
            }
    }
    while (proposition!=bonprix);
    cout<<"Partie terminée en "<<nombreTentatives<<" tentatives"<<endl;
    void jouerTroisParties();
}
void jouerTroisParties() {
    cout<<"C'est parti!"<<endl;
    for (auto justeprix:{2'140,132,12'001}) {
        jouerPartie(justeprix);
   }
}
