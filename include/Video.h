#ifndef VIDEO_H
#define VIDEO_H
#include "Document.h"

using namespace std;

class Video:public Document
{
    private:
        int dureeFilm;
        string mentionLegale;
        int DUREE=4*7;
        double TARIF=1.0;
        int nbEmpruntsTotal=0;
    public:
        Video(string,Localisation*,string,string,string,Genre*,int,string);
        ~Video();
        virtual string getclass();
        virtual string GetClassification();
        string getMentionLegale();//ok
        int getDureeFilm();//ok
        int getDUREE();//ok
        int getNbEmpruntsTotal();//ok
        double getTARIF();//ok
        bool emprunter();//ok
        virtual int dureeEmprunt();
        virtual int GetNbe();
         virtual string GetMention();
        virtual int GetDuree();
        virtual int GetNbp();
        // virtual double tarifEmprunt();
        virtual void afficher();//ok
};

#endif // VIDEO_H
