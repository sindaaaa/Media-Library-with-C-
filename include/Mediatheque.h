#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H
#include "Document.h"
#include "Client.h"
#include "Audio.h"
#include "Video.h"
#include "Livre.h"
#include <string>
#include <vector>

using namespace std;

class Mediatheque
{
private:
    string nom ;
    vector <Client*> ClientList;
    vector <Document*> DocumentList;
    vector <FicheEmprunts*> EmpruntsList;
    vector <CategorieClient*> CategorieList;
    vector <Genre*> GenreList;
    vector <Localisation*> LocalisationList;
public:
    //Constructeur
    Mediatheque(string );
    //Destructeur
    ~Mediatheque();
    //get fonction
    string getNom();//ok
    //Operations de cas d'utilisation
    bool ajouterAudio(string,string,string,string,string,string,string,string); //ok
    bool ajouterLivre(string,string,string,string,string,string,string,int);//ok
    bool ajouterVideo(string,string,string,string,string,string,string,int,string);//ok
    bool setEmpruntble(string);//ok
    bool setConsultable(string);//ok
    bool retirerDoc(string);//ok
    bool emprunter(string,string,string);//ok
    bool restituerDoc(string,string,string);//ok
    bool inscrireClient(string,string,string,string);//ok
    bool ajouterCategorieClient(string,int,double,double,double,bool);//ok
    bool resilier(string,string);//ok
    bool changerAdresse(string,string,string);
    bool changerCategorieClient(string,string,string);//ok
    void changerCategorieClient(string,string,string,int);//ok
    void changerCodeReduction(string,string,int);//ok
    void modifierCategorieClient(string,int,double,double,double,bool);//ok
    void supprimerCategorieClient(string);

     //void verifier();
    //operations pour les nouveaux cas d'utilisation
    void listerEmprunt_en_retard();//ok
    void listerclient_a_renou();//ok
    void listerClients();//ok
    void listerCategories();//ok
    void listerDocuments();//ok
    void listerFicheEmprunts();//ok
    void listerGenres();//ok
    void listerLocalisations();//ok
    bool ajouterLocalisation(string,string);//ok
    bool supprimerLocalisation(string,string);//ok
    bool existeDocument(Localisation *);//ok
    bool ajouterGenre(string);//ok
    bool modifierGenre(string,string);//ok
    bool supprimerGenre(string);//ok
    bool existeDocument(Genre *);//ok
    bool existeDocument(string);//ok
    //bool existeClient(string,string);//ok
    // les operations de recherche
    Client& chercherClient(string,string);//ok
    Document& chercherDocument(string);//ok
    Genre& chercherGenre(string);//ok
    Localisation& chercherLocalisation(string,string);//ok
    CategorieClient& chercherCategorie(string);//ok
    bool charger(string);
    template<typename T>bool ajouterElement(istream&,char);
    template<typename U>bool ajouterCategorieF(istream&,char);
    template<typename X>bool ajouterClientF(istream&,char);
    template<typename Y>bool ajouterGenreF(istream&,char);
    template<typename Z>bool ajouterLocalisationF(istream&,char);
    bool Save(string);


};

#endif // MEDIATHEQUE_H
