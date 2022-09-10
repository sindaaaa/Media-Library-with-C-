#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;


class Date {
private:
 int jour,mois,an;
public:
 Date();
 Date(int,int,int);
 int get_jour();
 int get_mois() ;
 int get_an();
 string getDate();
 void saisir();
 void afficher();
 int comparer_a(Date);
 Date ajouter(int,Date);
 void maintenant();
 int bissextile();
 int longueur_mois();
 int valide();
 friend ostream& operator<< (ostream&, Date&);
 friend istream& operator>> (istream&, Date&);
 friend int operator< (Date&, Date&);
 friend Date operator+ (Date,int);
 friend int operator> (Date, Date);
};

#endif // DATE_H
