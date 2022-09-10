#include "Video.h"
#include <iostream>
Video::Video(string c="",Localisation* l=nullptr,string t="",string au="",string an="",Genre* g=nullptr ,int d=0,string m=""):Document(c,l,t,au,an,g),dureeFilm(d),mentionLegale(m){}
Video::~Video(){}
void Video::afficher(){
cout<<"***Video***  "<<endl;
cout<<"Titre: "<<titre<<endl;
cout<<"Auteur: "<<auteur<<endl;
cout<<"Annee: "<<annnee<<endl;
cout<<"Duree: "<<dureeFilm<<endl;
cout<<"La mention Legale: "<<mentionLegale<<endl;
cout<<"Nombre d'emprunts total: "<<nbEmpruntsTotal<<endl;}
int Video::getNbEmpruntsTotal(){
return nbEmpruntsTotal;
}
string Video::getMentionLegale(){
return mentionLegale;
}
int Video::getDureeFilm(){
return dureeFilm;
}
int Video::getDUREE(){
return DUREE;
}
double Video::getTARIF(){
return TARIF;
}
bool Video::emprunter(){
if(empruntable&&(!emprunte)){
    emprunte=true;
    nbEmprunts++;
    nbEmpruntsTotal++;
    return true;
}
else return false ;
}
int Video::dureeEmprunt()
{
    return getDUREE();
}
string Video::getclass(){
return "Video";
}
string Video::GetClassification(){
return "";}
int Video::GetNbe(){return nbEmpruntsTotal;}
int Video::GetDuree(){return dureeFilm;}
string Video::GetMention(){return mentionLegale;}
int Video::GetNbp(){return 0;}
