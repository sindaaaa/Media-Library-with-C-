#ifndef LIVRE_H
#define LIVRE_H
#include "Document.h"

class Livre:public Document
{
       private:
        int nombrePage;
        int DUREE=4*7;
        double TARIF=1.0;
        int nbEmpruntsTotal=0;
    public:
        Livre(string,Localisation*,string,string,string,Genre*,int);
        ~Livre();
        virtual string getclass();
        virtual string GetClassification();
        bool emprunter();//ok
        int getNbEmpruntsTotal();//ok
        int getNbPage();//ok
        int getDUREE();//ok
        double getTARIF ();//ok
        void afficher();//ok
        virtual int dureeEmprunt();
        virtual int GetNbe();
        virtual string GetMention();
        virtual int GetDuree();
        virtual int GetNbp();
        //virtual double tarifEmprunt();
};

#endif // LIVRE_H

