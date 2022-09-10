#ifndef GENRE_H
#define GENRE_H

#include<string>
//#include "Mediatheque.h"
using namespace std;
class Genre
{

    friend class Mediatheque;
    friend class Audio;
    friend class Video;
    friend class Livre;
private:
    string nom;
    int nbEmprunts=0;
public:
    Genre(string);
    ~Genre();
    string getNom();//ok
    int getNbEmprunts();//ok
    void emprunter();//ok
    void modifier(string);//ok
    void setnbe(int);
};

#endif // GENRE_H
