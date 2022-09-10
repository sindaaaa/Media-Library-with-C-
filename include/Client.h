#ifndef CLIENT_H
#define CLIENT_H

#include "CategorieClient.h"
#include "FicheEmprunt.h"
#include <string>
#include <vector>
#include "Date.h"

class FicheEmprunts;
class Client
{
    friend class Mediatheque;
    friend class FicheEmprunts;
private:
    CategorieClient* catClient;
    vector<FicheEmprunts*> EmpruntsList;
    string nom,prenom,adresse;
    int nbEmpruntsEnCours=0,nbEmpruntsDepasse=0,nbEmpruntsEffectue=0;
    Date  dateRenouvellement,*dateInscription;
    int codeReduction=0;
public:

    Client(string,string,string,CategorieClient*);
    Client(string,string,string,CategorieClient*,int);
   ~Client();
    Date getDateInscription();
    Date getDateRenouvellement();
    void setDateInscription(Date);
    void setDateRenouvellement(Date);
    int getnbEmpruntsEnCours();//ok
    int getnbEmpruntsDepasse();//ok
    int getnbEmpruntsEffectue();//ok
    bool aDesEmpruntsEncours();//ok
    void afficherStatClient();//ok
    Date dateRetour(Date,int);//ok
    bool emprunter();//ok
    bool emprunter(FicheEmprunts* );//ok
    string getAdresse();//ok
    CategorieClient& getCategorie();//ok
    Date getDateCotisation();
    string getNom();//ok
    string getPrenom();//ok
    string getDateI();
    string getDateR();
    void setAdresse(string);
    void setNom(string);
    void setPrenom(string);
    void marquer();//ok
    int  nbMaxEmprunts();//ok
    bool peutEmprunter();//ok
    void restituer(bool );//ok
    void restituer(FicheEmprunts* );
    void setCategorie(CategorieClient *);//ok
    void setCategorie(CategorieClient *,int);//ok
    void setCodeRed(int);//ok
    double sumDue(double);//ok
    double tarifInscription();//ok
    bool Renouveler();
    void setnbec(int);
    void setnbe(int);
    void setnbd(int);
    //int getnbM();
    int getCode();
    void setDINS(string di);
    void setDREN(string dr);
    void listerEmprunts();


};

#endif // CLIENT_H

