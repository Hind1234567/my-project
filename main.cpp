#include "Mastermind.h"

int main()
{
    int choix;

    cout<<"====== MASTERMIND ======\n";
    cout<<"1. Facile\n";
    cout<<"2. Moyen\n";
    cout<<"3. Difficile\n";
    cout<<"0. Quitter\n";

    cout<<"\nVotre choix : ";
    cin>>choix;

    if(choix==0)
        return 0;

    Mastermind jeu(choix);
    jeu.jouer();

    return 0;
}