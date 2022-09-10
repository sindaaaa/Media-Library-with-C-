#ifndef DOCUMENT_H
#define DOCUMENT_H
#include "Genre.h"
#include "Localisation.h"
class Genre;
using namespace std;
class Document
{
    friend class FicheEmprunts;
    friend class Mediatheque;

   protected:
       Localisation* localisation;
       Genre* genre;
       string titre,code,auteur,annnee;
       bool empruntable=true,emprunte=false;
       int nbEmprunts=0;
   public:
    Document(string,Localisation*,string,string,string,Genre*);
    virtual ~Document();
    virtual string getclass()=0;
    virtual int dureeEmprunt()=0;
    virtual string GetClassification()=0;
    virtual int GetNbe()=0;
    virtual string GetMention()=0;
    virtual int GetDuree()=0;
    virtual int GetNbp()=0;
    //virtual double tarifEmprunt()=0;
    virtual void afficher()=0;
    string getCode();//ok
    string getTitre();//ok
    string getAuteur();//ok
    string getAnnee();//ok
    Genre& getGenre();
    Localisation &getLocalisation();
    int getNbEmprunts();//ok
    bool metEmpruntable();//ok
    bool metConsultable();//ok
    bool estEmpruntable();//ok
    bool estEmprunte();//ok
    virtual bool emprunter()=0;
    void restituer();//ok
    void afficherStatDocument();
};

#endif // DOCUMENT_H
