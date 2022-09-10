#include<typeinfo>
#include<iostream>

#include "FicheEmprunt.h"

FicheEmprunts::FicheEmprunts(Client* cl=nullptr,Document* doc=nullptr):client(cl),document(doc)
{
    dateEmprunts=new Date();
    int duree=document->dureeEmprunt();
    dateLimite=client->dateRetour(*dateEmprunts,duree);
}

FicheEmprunts::~FicheEmprunts(){}

 void FicheEmprunts::afficher()
 {
     cout<<"Date d'emprunt: "<<*dateEmprunts<<endl;
     cout<<"Date Limite: "<<dateLimite<<endl;
     //relancer();
     //cout<<"Date Rappel: "<<dateRappel<<endl;
     cout<<"Nom : "<< client->getNom()  <<endl;
     cout<<"Prenom : "<< client->getPrenom()<<endl;
     cout<<"Titre doc: "<< document->getTitre()<<endl;
     if (depasse)
     {
        cout<<"Fiche depasse "<<endl;
        cout<<"Date Rappel: "<<dateRappel<<" veuillez restituer le document!"<<endl;
     }
     else
     {  cout<<"Fiche encore valable "<<endl;   }

 }
 void FicheEmprunts::afficher1()
 {
    cout<<"Date d'emprunt: "<<*dateEmprunts<<endl;
     cout<<"Date Limite: "<<dateLimite<<endl;
     //relancer();
     //cout<<"Date Rappel: "<<dateRappel<<endl;
     cout<<"Titre doc: "<< document->getTitre()<<endl;
     if (depasse)
     {
        cout<<"Fiche depasse "<<endl;
        cout<<"Date Rappel: "<<dateRappel<<" veuillez restituer le document!"<<endl;
     }
     else
     {  cout<<"Fiche encore valable "<<endl;   }

 }



void FicheEmprunts::restituer(){
client->restituer(depasse);
document->restituer();
}
bool FicheEmprunts::correspond(Client *c,Document *d){
return ((client==c)&&(document==d));
}
bool FicheEmprunts::verifier(){
Date *d=new Date();//Date d'aujourd'hui
if (dateLimite>*d) {
        depasse=true;
        return true;}
else
{
    depasse=false;
    return false;
}
}

void FicheEmprunts::premierRappel()
{
    Date *d=new Date();
    if (!depasse)
    {
        depasse=true;
        client->marquer();
        dateRappel=*d;
    }
}
void FicheEmprunts::relancer()
{
    //on ne relance que tous les 7 jours.
    Date *d=new Date();Date d1;
    if ((*d)>(d1.ajouter(7,dateRappel)))
    {
        dateRappel=*d;
    }
}
string FicheEmprunts::getDe(){return dateEmprunts->getDate();}
string FicheEmprunts::getDl(){return dateLimite.getDate();}
bool FicheEmprunts::getD(){return depasse; }
