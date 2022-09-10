#include "Client.h"
#include <iostream>
#include <string>
using namespace std;
Client::Client(string n="",string p="",string a="",CategorieClient *c=nullptr):nom(n),prenom(p),adresse(a),catClient(c){
 dateInscription=new Date();
dateRenouvellement.ajouter(365,*dateInscription);
}
Client::Client(string n="",string p="",string a="",CategorieClient *c=nullptr,int cd=0):nom(n),prenom(p),adresse(a),catClient(c),codeReduction(cd){}

Client::~Client(){}
Date Client::getDateInscription()
{return *dateInscription;}
Date Client::getDateRenouvellement()
{return dateRenouvellement;}
void Client::setDateInscription(Date d)
{*dateInscription=d;}
void Client::setDateRenouvellement(Date d)
{dateRenouvellement=d;}
int Client::getnbEmpruntsDepasse(){
return nbEmpruntsDepasse; }
int Client::getnbEmpruntsEnCours(){
return nbEmpruntsEnCours;  }
int Client::getnbEmpruntsEffectue(){
return nbEmpruntsEffectue; }
string Client::getNom(){
return nom;
}
string Client::getPrenom(){
return prenom;
}
string Client::getAdresse(){
return adresse;
}
void Client::restituer(bool enRetard){
nbEmpruntsEnCours--;
if(enRetard==true){
    nbEmpruntsDepasse--;
}
}
bool Client::peutEmprunter(){
Date* d=new Date();
if((nbEmpruntsDepasse==0)&&(nbEmpruntsEnCours<nbMaxEmprunts())&&((*d)<dateRenouvellement)){
    return true;}
else {return false;}
}
int Client::nbMaxEmprunts(){
return catClient->getnbMaxEmprunt();
}
void Client::setCategorie(CategorieClient* cc,int red){
    if(cc->getCodeRedUtilise()==true){codeReduction=red; }
    else {cout<<"Erreur!"<<endl;}
    catClient=cc;
}
void Client::setCategorie(CategorieClient *cc){
    if(cc->getCodeRedUtilise()==true){cout<<"Erreur!"<<endl;}
    catClient=cc;
}
void Client::setCodeRed(int code){
codeReduction=code;
}
bool Client::emprunter(){
nbEmpruntsEffectue++;
nbEmpruntsEnCours++;
return true;
}
bool Client::emprunter(FicheEmprunts* f){
emprunter();
EmpruntsList.push_back(f);
return true;
}
void Client::marquer(){
nbEmpruntsDepasse++; }
bool Client::aDesEmpruntsEncours(){
if (nbEmpruntsEnCours!=0)
    return true;
else return false;
}
CategorieClient& Client::getCategorie(){
return *catClient;
}
double Client::sumDue(double tarif){
return tarif*catClient->getCoefTarif();
}
double Client::tarifInscription(){
return catClient->getCotisation();
}
////Date Client::dateRetour(Date d,int nbj){
//Date duree=nbj*catClient->cotisation;
//return d+duree;
//}
void Client::afficherStatClient(){
cout<<"Date Inscription: "<<*dateInscription<<endl;
cout<<"Date Renouvellement: "<<dateRenouvellement<<endl;
cout<<"Nom : "<<nom<<endl;
cout<<"Prenom : "<<prenom<<endl;
cout<<"L'adresse : "<<adresse<<endl;
cout<<"Nom categorie : "<<catClient->getCatNom()<<endl;
cout<<"Nombre emprunts maximum : "<<catClient->nbEmpruntsMax<<endl;
cout<<"Nombre d'emprunts en cours : "<<nbEmpruntsEnCours<<endl;
cout<<"Nombre d'emprunts depasse : "<<nbEmpruntsDepasse<<endl;
cout<<"Nombre d'emprunts effectue : "<<nbEmpruntsEffectue<<endl;
if (Renouveler()){cout<<"veuillez renouveler votre inscription pour pouvoir emprunter de nouveau"<<endl;}
else {cout<<"Insription encore valable"<<endl;}

}
void Client::setAdresse(string nv){
adresse=nv;
}
void Client::setNom(string nvn){
nom=nvn;
}
void Client::setPrenom(string nvp){
prenom=nvp;
}
Date Client::dateRetour(Date dt,int nbj)
{
    int d;Date d1;
    d=nbj*(catClient->getCoefDuree());
    return d1.ajouter(d,d1);
}

Date Client::getDateCotisation()
{
    return dateRenouvellement;
}
bool Client::Renouveler()
{
    Date* d=new Date();
    if ((*d)>dateRenouvellement)
    {return(true);}
    else{return false;}
}
int Client::getCode(){return codeReduction;}
string Client::getDateI(){return dateInscription->getDate();}
string Client::getDateR(){return dateRenouvellement.getDate();}

void Client::setnbec(int nbec){nbEmpruntsEnCours=nbec;  }
void Client::setnbe(int nbe){nbEmpruntsEffectue=nbe;}
void Client::setnbd(int nbd){nbEmpruntsDepasse=nbd;}

void Client::setDINS(string di){
string jour,mois,annee;int j,m,a;
jour=di.substr(0,2);
mois=di.substr(3,5);
annee=di.substr(6,10);
j=stoi(jour);
m=stoi(mois);
a=stoi(annee);
Date *dateInscription=new Date(j,m,a);
}

void Client::setDREN(string dr){
string jour,mois,annee;int j,m,a;
jour=dr.substr(0,2);
mois=dr.substr(3,5);
annee=dr.substr(6,10);
j=stoi(jour);
m=stoi(mois);
a=stoi(annee);
Date dateRenouvellement(j,m,a);
}

void Client::listerEmprunts(){
for(int i=0;i<EmpruntsList.size();i++){
cout<<"Fiche "<<i+1<<" :"<<endl;
EmpruntsList[i]->afficher1();
cout<<"==============================================="<<endl;
}
}
