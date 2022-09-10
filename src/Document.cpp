#include "Document.h"

Document::Document(string c="",Localisation* l=nullptr,string t="",string au="",string an="",Genre *g=nullptr):code(c),localisation(l),titre(t),auteur(au),annnee(an),genre(g)
{
empruntable=false;
emprunte=false;
nbEmprunts=0;
}
Document::~Document(){}
string Document::getCode(){
return code;
}
string Document::getTitre(){
return titre;
}
string Document::getAuteur(){
return auteur;
}
string Document::getAnnee(){
return annnee;
}
int Document::getNbEmprunts(){
return nbEmprunts;
}
bool Document::metEmpruntable(){
if (empruntable==false){
    empruntable=true;
    return true ;
}
else { return false;}
}
bool Document::metConsultable(){
if((empruntable==true)&&(emprunte==false)){
    empruntable=false;
    return true ;

}
else{return false;}
}
void Document::restituer(){
emprunte=false;
}
bool Document::estEmpruntable(){
return empruntable;
}
bool Document::estEmprunte(){
return emprunte;
}
/*bool Document::emprunter(){
if(empruntable&&(!emprunte)){
    emprunte=true;
    nbEmprunts++;
    return true;
}
else return false ;
}*/
Genre& Document::getGenre(){
return *genre;
}
Localisation& Document::getLocalisation(){
return *localisation;
}


