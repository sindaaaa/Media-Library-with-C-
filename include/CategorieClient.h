#ifndef CATEGORIECLIENT_H
#define CATEGORIECLIENT_H

#include <string>

using namespace std;
class CategorieClient
{
   friend class Client;
private:
    string catNom;
    int nbEmpruntsMax;
    double cotisation,coefDuree,coefTarif;
    bool codeRedUtilise;
public:

    CategorieClient(string,int,double,double,double,bool);//ok
    ~CategorieClient();//ok
    bool getCodeRedUtilise();//ok
    void setCodeRedUtilise(bool);
    double getCoefDuree();//ok
    void setCoefDuree(double);
    double getCoefTarif();//ok
    void setCoefTarif(double);
    double getCotisation();//ok
    void setCotisation(double);
    int getnbMaxEmprunt();//ok
    void setnbMaxEmprunt(int);
    string getCatNom();//ok
    void afficher();
};

#endif // CATEGORIECLIENT_H
