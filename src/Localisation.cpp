#include "Localisation.h"

Localisation::Localisation(string s="",string r=""):salle(s),rayon(r){}


Localisation::~Localisation(){}

string Localisation::getRayon(){
return rayon;
}
string Localisation::getSalle(){
return salle;
}
