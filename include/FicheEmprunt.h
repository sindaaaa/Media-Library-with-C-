#ifndef FICHEEMPRUNTS_H
#define FICHEEMPRUNTS_H
#include "Date.h"
#include "Client.h"
#include "Document.h"
class Client;
class Date;
//class Document;
class FicheEmprunts
{
     friend class Mediatheque;
private:
    Client* client;
    Document* document;
    Date* dateEmprunts,dateLimite,dateRappel;
    bool depasse=false;
    int nbEmpruntsTotal=0;
public:
    FicheEmprunts(Client*,Document*);
    ~FicheEmprunts();
    string getDe();
    string getDl();
    bool getD();
    bool verifier();
    void premierRappel();
    void relancer();
    void restituer();
    bool correspond(Client*,Document*);
    void afficherStatistiques();
    void afficher();
    void afficher1();
};

#endif // FICHEEMPRUNTS_H
