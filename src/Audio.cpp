#include "Audio.h"
#include <iostream>
using namespace std;

Audio::Audio(string c="",Localisation* l=nullptr,string t="",string au="",string an="",Genre *g=nullptr,string cl=""):Document(c,l,t,au,an,g),classification(cl){
DUREE=4*7;
TARIF=1.0;
nbEmpruntsTotal=0;
}
Audio::~Audio(){}

void Audio::afficher(){
cout<<"***Audio***  "<<endl;
cout<<"Titre: "<<titre<<endl;
cout<<"Auteur: "<<auteur<<endl;
cout<<"Annee: "<<annnee<<endl;
cout<<"Classification: "<<classification<<endl;
cout<<"Nombre d'emprunts total: "<<nbEmpruntsTotal<<endl;
}
int Audio::getNbEmpruntsTotal(){
return nbEmpruntsTotal;
}
int Audio::getDUREE(){
return DUREE;
}
double Audio::getTARIF(){
return TARIF;
}
string Audio::getClassification(){
return classification;
}

bool Audio::emprunter(){
if(empruntable && !(emprunte)){
    emprunte=true;
    nbEmprunts++;
    nbEmpruntsTotal++;
    return true;
}
else return false ;
}
int Audio::dureeEmprunt()
{
    return getDUREE();
}
string Audio::getclass(){
return "Audio";
}
string Audio::GetClassification(){
return classification;}
int Audio::GetNbe(){return nbEmpruntsTotal;}
int Audio::GetDuree(){return 0;}
string Audio::GetMention(){return "";}
int Audio::GetNbp(){return 0;}
