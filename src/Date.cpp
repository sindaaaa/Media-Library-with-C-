#include <iostream>
#include <ctime>
#include "Date.h"
#include <string>
#include<sstream>
using namespace std;

Date::Date(int j,int m,int a){
jour=j;
mois=m;
an=a;
}
Date::Date(){
time_t t=time(0);
tm *ltm=localtime(&t);
jour=ltm->tm_mday;
mois=1+ltm->tm_mon;
an=1900+ltm->tm_year;
}
void Date::saisir()
{char c;
 do{
   cout<<"\nEntrez la date au format jj/mm/aaaa : ";
   cin>>this->jour>>c>>this->mois>>c>>this->an;
   }
 while(!valide());
}
void Date::afficher(void)
{
 cout<<"Le "<<jour<<"/"<<mois<<"/"<<an;
}
int Date::comparer_a(Date d)
{
 int r;
 if(d.an>an)r=1;
 else if(d.an<an)r=-1;
 else if(d.mois>mois)r=1;
 else if(d.mois<mois)r=-1;
 else if(d.jour>jour)r=1;
 else if(d.jour<jour)r=-1;
 else r=0;
 return r;
}

Date Date::ajouter(int nbjours,Date d)
{
 jour=nbjours+d.jour;
 while(jour>longueur_mois())
  {
   jour=jour-longueur_mois();
   mois++;
   if(mois>12)
    {mois=1;an++;}
  }
 while(jour<1)
  {
   mois--;
   if(mois<1){mois=12;an--;}
   jour=jour+longueur_mois();
  }
  return(*this);
}

int lng_mois[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void Date::maintenant(void)
{
 time_t t=time(NULL);
 t/=86400;
 an=(t*4)/(365*4+1) + 1970;
 t-=(an-1970)*365;
 t-=(an-1970)/4; //pour annee bissextile, marche jusqu'en 2100 au moins
 mois=0;
 while(t>lng_mois[mois]) {t-=lng_mois[mois];mois++;}
 mois++; //car on commence a 1, pas a 0
 jour=t;
}

int Date::bissextile()
{
 return((an%4)==0); //retourne 0 ou 1
}
int Date::longueur_mois()
{
 int l;
 l=lng_mois[mois-1];
 if(mois==2) l+=bissextile(); //ajoute 1 ou 0
 return l;
}
int Date::valide()
{
 int ok=1;
 if (mois<=0 || mois>12)
  {cout<<"mois invalide\n";ok=0;}
 if(jour<0 || jour>longueur_mois())
  {cout<<"jour invalide\n";ok=0;}
 return ok;
}
//surcharges des operateurs
ostream& operator<< (ostream &f, Date &d)
{d.afficher();return f;}
istream& operator>> (istream&f, Date &d)
{d.saisir();return f;}
Date operator+ (Date d, int nbjours)
{
 Date res;
 //res=d;
 res.ajouter(nbjours,d);
 return res;
}
string Date::getDate(){
int a;
std::stringstream ss;
std::stringstream tt;
std::stringstream uu;
ss<<jour;
string ch="" ;
ch+=ss.str();ch+="/";
tt<<mois;ch+=tt.str();ch+="/";
uu<<an;ch+=uu.str();
return ch;}
Date operator- (Date d, int nbjours)
{return d+(-nbjours);}
int operator== (Date &d1, Date &d2)
{return d1.comparer_a(d2)==0;}
int operator!= (Date &d1, Date &d2)
{return d1.comparer_a(d2)!=0;}
int operator< (Date &d1, Date &d2)
{return d1.comparer_a(d2)>0;}
int operator<= (Date &d1, Date &d2)
{return d1.comparer_a(d2)>=0;}
int operator> (Date d1, Date d2)
{return d1.comparer_a(d2)<0;}
int operator>= (Date &d1, Date &d2)
{return d1.comparer_a(d2)<0;}
