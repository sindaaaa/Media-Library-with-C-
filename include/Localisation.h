#ifndef LOCALISATION_H
#define LOCALISATION_H
#include <string>
using namespace std;
//#include <Mediatheque.h>
class Mediatheque;

class Localisation
{
    friend class Mediatheque;
    friend class Document;
    friend class Audio;
    friend class Video;
    friend class Livre;
    private:
        string salle,rayon;
    public:
        Localisation(string,string);
        Localisation();
        ~Localisation();
        string getSalle();//ok
        string getRayon();//ok

};

#endif // LOCALISATION_H
