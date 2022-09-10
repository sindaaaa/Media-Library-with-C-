#ifndef AUDIO_H
#define AUDIO_H
#include "Document.h"

class Audio:public Document
{
    private:
        string classification;
        int DUREE=4*7;
        double TARIF=1.0;
        int nbEmpruntsTotal=0;
    public:
        Audio(string,Localisation*,string,string,string,Genre*,string);//ok
        ~Audio();//ok
        virtual string getclass();
        virtual string GetClassification();
        virtual int GetNbe();
        virtual string GetMention();
        virtual int GetDuree();
        virtual int GetNbp();
        bool emprunter();//ok
        int getNbEmpruntsTotal();//ok
        int getDUREE();//ok
        double getTARIF();//ok
        int getNbEmruntsTotal();//ok
        string getClassification();//ok
        virtual int dureeEmprunt();
       // virtual double tarifEmprunt();
        virtual void afficher();//ok
};

#endif // AUDIO_H
