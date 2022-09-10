#include "Livre.h"
#include <iostream>
Livre::Livre(string c="",Localisation* l=nullptr,string t="",string au="",string an="",Genre *g=nullptr,int nbp=0):Document(c,l,t,au,an,g),nombrePage(nbp){}
Livre::~Livre(){}

int Livre::getNbEmpruntsTotal(){
return nbEmpruntsTotal;
}
int Livre::getNbPage(){
return nombrePage;
}
int Livre::getDUREE(){
return DUREE;
}
double Livre::getTARIF(){
return TARIF;
}
bool Livre::emprunter(){
if(empruntable&&(!emprunte)){
    emprunte=true;
    nbEmprunts++;
    nbEmpruntsTotal++;
    return true;
}
else return false ;
}

void Livre::afficher(){
cout<<"***Livre***  "<<endl;;
cout<<"Titre: "<<titre<<endl;
cout<<"Auteur: "<<auteur<<endl;
cout<<"Annee: "<<annnee<<endl;
cout<<"Nombre de pages: "<<nombrePage<<endl;
cout<<"Nombre d'emprunts total: "<<nbEmpruntsTotal<<endl;}

int Livre::dureeEmprunt()
{
    return getDUREE();
}
string Livre::getclass(){
return "Livre";
}
string Livre::GetClassification(){
return "";}
int Livre::GetNbe(){return nbEmpruntsTotal;}
int Livre::GetNbp(){return nombrePage;}
int Livre::GetDuree(){return 0;}
string Livre::GetMention(){return "";}

