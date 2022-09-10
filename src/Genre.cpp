#include "Genre.h"

Genre::Genre(string n=""):nom(n){}

Genre::~Genre(){}

string Genre::getNom(){
return nom;
}
int Genre::getNbEmprunts(){
return nbEmprunts;
}
void Genre::emprunter(){
nbEmprunts++;
}
void Genre::modifier(string nv){
nom=nv;
}
void Genre::setnbe(int k){ nbEmprunts=k;}
