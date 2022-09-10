#include "CategorieClient.h"
#include <iostream>
using namespace std ;
CategorieClient::CategorieClient(string nom="Tarif Normal",int maxi=5,double cot=1.0,double coefd=1.0,double coeft=1.0,bool codeRedAct=false):catNom(nom),nbEmpruntsMax(maxi),cotisation(cot),coefDuree(coefd),coefTarif(coeft),codeRedUtilise(codeRedAct){}

CategorieClient::~CategorieClient(){}
void CategorieClient::setCodeRedUtilise(bool c){
codeRedUtilise=c;
}
void CategorieClient::setCoefDuree(double d){
coefDuree=d;
}
void CategorieClient::setCoefTarif(double t){
coefTarif=t;
}
void CategorieClient::setCotisation(double cou){
cotisation=cou;
}
void CategorieClient::setnbMaxEmprunt(int m){
nbEmpruntsMax=m;
}
string CategorieClient::getCatNom(){
return catNom;
}
int CategorieClient::getnbMaxEmprunt(){
return nbEmpruntsMax;
}
bool CategorieClient::getCodeRedUtilise(){
return codeRedUtilise;
}
double CategorieClient::getCotisation(){
return cotisation;
}
double CategorieClient::getCoefDuree(){
return coefDuree;
}
double CategorieClient::getCoefTarif(){
return coefTarif;
}
void CategorieClient::afficher(){
cout<<catNom<<endl;
cout<<cotisation<<endl;
cout<<nbEmpruntsMax<<endl;
}
