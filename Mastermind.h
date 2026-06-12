#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <iostream>
#include <ctime>
#include <cstdlib> 
#include <string>

using namespace std;

class Mastermind
{
private:                   
    int secret[4];
    int tentativesMax;

public:             
    Mastermind(int niveau);
    void jouer();
};

#endif