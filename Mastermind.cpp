#include "Mastermind.h"

// Constructeur
Mastermind::Mastermind(int niveau)
{
    srand(time(0));

    if(niveau==1)
        tentativesMax=10;

    else if(niveau==2)
        tentativesMax=7;

    else
        tentativesMax=5;

    for(int i=0;i<4;i++)
        secret[i]=rand()%10;
}

//fct jouer qui lance le jeu.
void Mastermind::jouer()
{
    int prop[4];
    int essais=0;

    time_t debut=time(0);

    cout<<"\nDate : "<<ctime(&debut);

    cout<<"\nTentatives   Bien   Mal   Errone\n";

    while(essais < tentativesMax)
    {
        int bien=0;
        int mal=0;

        string nombre;

        cout<<"\nEntrer 4 chiffres : ";
        cin>>nombre;

        for(int i=0;i<4;i++)
        {
            prop[i]=nombre[i]-'0';
        }

        essais++;
            //comparaison des chiffres .
        for(int i=0;i<4;i++)
        {
            if(prop[i]==secret[i])
            {
                bien++;
            }

            else
            {
                for(int j=0;j<4;j++)
                {
                    if(prop[i]==secret[j])
                    {
                        mal++;
                        break;
                    }
                }
            }
        }

        int errone = 4-(bien+mal);

        cout<<nombre<<"      "
            <<bien<<"      "
            <<mal<<"      "
            <<errone<<endl;

        if(bien==4)
        {
            time_t fin=time(0);

            cout<<"\nBravo ! Vous avez trouve\n";

            cout<<"Tentatives : "
                <<essais<<endl;

            cout<<"Temps : "
                <<difftime(fin,debut)
                <<" secondes";

            return;
        }
    }

    cout<<"\nPerdu !";
    cout<<"\nCode secret : ";

    for(int i=0;i<4;i++)
        cout<<secret[i];
}