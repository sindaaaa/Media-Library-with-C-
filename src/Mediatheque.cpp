#include "Mediatheque.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <typeinfo>
using namespace std;

Mediatheque::Mediatheque(string n=""):nom(n){
//vector <Client*> ClientList;
//vector <Document*> DocumentList;
//vector <FicheEmprunts*> EmpruntsList;
//vector <CategorieClient*> CategorieList;
//vector <Genre*> GenreList;
//vector <Localisation*> LocalisationList;
}
Mediatheque::~Mediatheque(){}
string Mediatheque::getNom(){
return nom;
}
bool Mediatheque::existeDocument(string code)
{
    unsigned i=0;
    bool t=false;
    while(t==false && i< DocumentList.size()){
    if (DocumentList[i]->getCode()!=code){
    t=true;
    }
    else {i++;}
}
}

Document& Mediatheque::chercherDocument(string code)
{
Document *d=nullptr;
unsigned int i=0;
while(d==nullptr && i< DocumentList.size()){
    if ((DocumentList[i]->getCode())==code){
        d=DocumentList[i];}
    else{i++;}
}
return *d;
/*for(int i=0;i<DocumentList.size();i++)
{
    if (DocumentList[i]->getCode()==code){
        //vector<Document*>::iterator position=find(DocumentList.begin(),DocumentList.end(),DocumentList[i]);
        //return (**position);
        return *DocumentList[i];
    }
    //else { return nullptr ;}
}*/

}
Client& Mediatheque::chercherClient(string nom,string prenom)
{
Client* c=nullptr;
unsigned int i=0;
while(c==nullptr && i<ClientList.size()){
    if ((ClientList[i]->getNom()==nom)&&(ClientList[i]->getPrenom()==prenom)){
        c=ClientList[i];}
    else{i++;}
}
return *c;
/*for(int i=0;i<ClientList.size();i++)
{
    if (ClientList[i]->getNom()==nom && ClientList[i]->getPrenom()==prenom ){
        //vector<Client*>::iterator position=find(ClientList.begin(),ClientList.end(),ClientList[i]);
        //return (**position);
        return *ClientList[i];
    }
    //else { return nullptr;}
}*/
}
Genre& Mediatheque::chercherGenre(string genre){
Genre* g=nullptr;
unsigned int i=0;
while(g==nullptr && i<GenreList.size()){
    if (GenreList[i]->getNom()==genre){
        g=GenreList[i];}
    else{i++;}
}
return *g;
}
Localisation& Mediatheque::chercherLocalisation(string rayon,string salle){
Localisation* L=nullptr;
unsigned int i=0;
while(L==nullptr && i<LocalisationList.size()){
    if ((LocalisationList[i]->getRayon()==rayon)&&(LocalisationList[i]->getSalle()==salle)){
        L=LocalisationList[i];}
    else{i++;}
}
return *L;
}
CategorieClient& Mediatheque::chercherCategorie(string cat){
CategorieClient* CC=nullptr;
unsigned int i=0;
while(CC==nullptr && i<CategorieList.size()){
    if (CategorieList[i]->getCatNom()==cat){
        CC=CategorieList[i];}
    else{i++;}
}
return *CC;
}
void Mediatheque::listerDocuments(){
for (unsigned int i=0;i<DocumentList.size();i++)
{cout<<"Document "<<i+1<<" :"<<endl;
DocumentList[i]->afficher();
if(DocumentList[i]->estEmpruntable()){cout<<"Le document est empruntable!"<<endl;}
else{cout<<"Le Document n'est pas empruntable!"<<endl;}
if(DocumentList[i]->estEmprunte()){cout<<"Le document est emprunte"<<endl;}
else{cout<<"Le document n'est pas emprunte"<<endl;}
cout<<"=================================================="<<endl;
}}
void Mediatheque::listerClients(){
for (unsigned int i=0;i<ClientList.size();i++)
{

cout<<"Client "<<i+1<<" :"<<endl;
ClientList[i]->afficherStatClient();
cout<<"=================================================="<<endl;}
}
void Mediatheque::listerCategories(){
cout<<"liste categories"<<endl;
for (unsigned int i=0;i<CategorieList.size();i++)
{
CategorieList[i]->afficher();}
}
void Mediatheque::listerFicheEmprunts(){
cout<<"liste des fiches"<<endl;
for (unsigned int i=0;i<EmpruntsList.size();i++)
EmpruntsList[i]->afficher();
}
//void Mediatheque::listerGenres(){
//cout<<"liste genres"<<endl;
//for (unsigned int i=0;i<GenreList.size();i++)
//GenreList[i]->afficher();
//}
//void Mediatheque::listerLocalisations(){
//cout<<"liste localisations"<<endl;
//for (unsigned int i=0;i<LocalisationList.size();i++)
//LocalisationList[i]->afficher();
//}
bool Mediatheque::ajouterAudio(string code,string salle ,string rayon,string titre,string auteur,string annee,string nomGenre,string clasification){
bool t;
if (&chercherDocument(code)==nullptr){
    Localisation *L=new Localisation(salle,rayon);
    Genre *G=new Genre(nomGenre);
    ajouterGenre(nomGenre);
    ajouterLocalisation(rayon,salle);
    Document *A=new Audio(code,L,titre,auteur,annee,G,clasification);
    DocumentList.push_back(A);
    t= true;
    return t;
   }
else {t=false;
return t;}
}
bool Mediatheque::ajouterLivre(string code,string salle ,string rayon,string titre,string auteur,string annee,string nomGenre,int nbpage){
if (&chercherDocument(code)==nullptr){
    Localisation *L=new Localisation(salle,rayon);
    Genre *G=new Genre(nomGenre);
    if(&chercherGenre(nomGenre)==nullptr){ajouterGenre(nomGenre); }
    if(&chercherLocalisation(rayon,salle)==nullptr){ajouterLocalisation(rayon,salle);}
    Document *B=new Livre(code,L,titre,auteur,annee,G,nbpage);
    DocumentList.push_back(B);
    return true;
   }
else {return false;}
}
bool Mediatheque::ajouterVideo(string code,string salle ,string rayon,string titre,string auteur,string annee,string nomGenre,int duree,string mention){
if (&chercherDocument(code)==nullptr){
    Localisation *L=new Localisation(salle,rayon);
    Genre *G=new Genre(nomGenre);
    if(&chercherGenre(nomGenre)==nullptr){ajouterGenre(nomGenre); }
    if(&chercherLocalisation(rayon,salle)==nullptr){ajouterLocalisation(rayon,salle);}
    Document *V=new Video(code,L,titre,auteur,annee,G,duree,mention);
    DocumentList.push_back(V);
    return true ;
   }
else {return false;}
}
bool Mediatheque::setEmpruntble(string c){
if(&chercherDocument(c)!=nullptr){
unsigned i=0;bool t=false;
while (t==false && i<DocumentList.size())
{
    if (DocumentList[i]->getCode()==c){
       t=true;}
    else{i++;}
}
bool v;
if(t==true){
    v=DocumentList[i]->metEmpruntable();
    return v;
}
else {return false ;}

}
else{return false;}
}

bool Mediatheque::setConsultable(string c){
if(&chercherDocument(c)!=nullptr){
unsigned i=0;bool t=false;
while (t==false && i<DocumentList.size())
{
    if (DocumentList[i]->getCode()==c){
       t=true;}
    else{i++;}
}
bool v;
if(t==true){
    v=DocumentList[i]->metConsultable();
    return v;
}
else {return false ;}

}
else{return false;}
}
bool Mediatheque::restituerDoc(string nom,string prenom,string code){
Client *c=&chercherClient(nom,prenom);
Document *d=&chercherDocument(code);
if((c!=nullptr)&&(d!=nullptr)){
vector<FicheEmprunts*>::iterator m;
m=EmpruntsList.begin();
bool t=false;unsigned int i=0;
while(t==false && m!=EmpruntsList.end()){
    if(EmpruntsList[i]->correspond(c,d)){
        EmpruntsList[i]->restituer();
        EmpruntsList.erase(m);
        t=true;
        return true;
         }
    else{i++;m++;}
    }
}
else{return false;}
}

bool Mediatheque::emprunter(string nom,string prenom,string code){
Document* d=&chercherDocument(code);
Client* c=&chercherClient(nom,prenom);

if((&chercherDocument(code)!=nullptr)&&(&chercherClient(nom,prenom)!=nullptr)&&(c->peutEmprunter())&&(d->estEmpruntable())&&!(d->estEmprunte())){
    FicheEmprunts *emprunt=new FicheEmprunts(c,d);
    EmpruntsList.push_back(emprunt);
    c->EmpruntsList.push_back(emprunt);
    d->emprunter();
    c->emprunter();
    string ch;
    ch=d->getGenre().getNom();
    Genre* g=&chercherGenre(ch);
    g->emprunter();
    return true;
}
else
{return false;}
}
bool Mediatheque::retirerDoc(string c){
unsigned int i=0;
bool t=false;
vector<Document*>::iterator m;
m=DocumentList.begin();
while((t==false)&&(m!=DocumentList.end())){
    if (DocumentList[i]->getCode()==c){
        t=true;
    }
    else {m++;i++;}
}
if (t==true && !(DocumentList[i]->estEmprunte())){
    DocumentList.erase(m);
    return true;
}
else
{
    return false;
}


}

bool Mediatheque::inscrireClient(string nom,string prenom,string adresse,string nomcat){
if((&chercherCategorie(nomcat)!=nullptr)&&(&chercherClient(nom,prenom)==nullptr)){
    unsigned i=0;bool t=false;
    while((t==false)&&(i<CategorieList.size())){
    if (CategorieList[i]->getCatNom()==nomcat){
    Client *C=new Client(nom,prenom,adresse,CategorieList[i]);
    t =true;
    ClientList.push_back(C);
    return true;}
    else {i++;}}}
else {return false; }
}

bool Mediatheque::changerAdresse(string nom,string prenom,string adresse){
if(&chercherClient(nom,prenom)!=nullptr){
    unsigned i=0;bool t;
    while(t==false &&i<ClientList.size()){
        if(ClientList[i]->getNom()==nom && ClientList[i]->getPrenom()==prenom){
            ClientList[i]->setAdresse(adresse);
            t=true;
            return true;
        }
        else{i++;}
    }
}
else{return false;}

}

bool Mediatheque::ajouterCategorieClient(string nom,int m,double cot,double cDuree,double ctarif,bool codeRedActif){
if (&chercherCategorie(nom)==nullptr){
    CategorieClient *cc=new CategorieClient(nom,m,cot,cDuree,ctarif,codeRedActif);
    CategorieList.push_back(cc);
    return true;}
else { return false;}
}
void Mediatheque::supprimerCategorieClient(string nom){
unsigned int i=0;
bool t=false;
vector<CategorieClient*>::iterator m;
m=CategorieList.begin();
while((t==false)&&(m!=CategorieList.end())){
    if (CategorieList[i]->getCatNom()==nom){
        t=true;
    }
    else {m++;i++;}
}
if (t==true){
    CategorieList.erase(m);
}
}

bool Mediatheque::resilier(string nom,string prenom){
unsigned int i=0;
bool t=false;
vector<Client*>::iterator m;
m=ClientList.begin();
while((t==false)&&(m!=ClientList.end())){
    if ((ClientList[i]->getNom()==nom)&&(ClientList[i]->getPrenom()==prenom)){
        t=true;
    }
    else {m++;i++;}
}
if ((t==true)&&(ClientList[i]->getnbEmpruntsDepasse()==0)&&(ClientList[i]->getnbEmpruntsEnCours()==0)){
    ClientList.erase(m);
    return true ;
}
else{return false ;}
}
bool Mediatheque::changerCategorieClient(string nom,string prenom,string nomCat){
unsigned int i=0,j=0;
bool t=false,v=false;
while((t==false)&&(i<ClientList.size())){
    if ((ClientList[i]->getNom()==nom)&&(ClientList[i]->getPrenom()==prenom)){
        t=true;
    }
    else {i++;}
}
while((v==false)&&(j<CategorieList.size())){
    if (CategorieList[j]->getCatNom()==nomCat){
        v=true;
    }
    else {j++;}
}
if(t==true && v==true){
        ClientList[i]->setCategorie(CategorieList[j]);
        return true;
}
else {return false;}
}
void Mediatheque::modifierCategorieClient(string nom,int nmax,double cot,double cd,double ct,bool cr){
unsigned int i=0;
bool t=false;
while(t==false&& i<CategorieList.size()){
    if ((CategorieList[i]->getCatNom()==nom)){;
        CategorieList[i]->setCodeRedUtilise(cr);
        CategorieList[i]->setCoefDuree(cd);
        CategorieList[i]->setCoefTarif(ct);
        CategorieList[i]->setCotisation(cot);
        CategorieList[i]->setnbMaxEmprunt(nmax);
        t=true;
    }
    else {i++;}
}

}
void Mediatheque::changerCategorieClient(string nom,string prenom,string nomCat,int codereduc){
unsigned int i=0,j=0;
bool t=false,v=false;
while((t==false)&&(i<ClientList.size())){
    if ((ClientList[i]->getNom()==nom)&&(ClientList[i]->getPrenom()==prenom)){
        t=true;
    }
    else {i++;}
}
while((v==false)&&(j<CategorieList.size())){
    if (CategorieList[j]->getCatNom()==nomCat){
        v=true;
    }
    else {j++;}
}
if(t==true && v==true){
        ClientList[i]->setCategorie(CategorieList[j],codereduc);
}
}
void Mediatheque::changerCodeReduction(string nom,string prenom,int code){
unsigned int i=0;
bool t=false;
while((t==false)&&(i<ClientList.size())){
    if ((ClientList[i]->getNom()==nom)&&(ClientList[i]->getPrenom()==prenom)){
        t=true;
    }
    else {i++;}
}
if(t==true){
    ClientList[i]->setCodeRed(code);
}
}
bool Mediatheque::ajouterGenre(string nomg){
if(&chercherGenre(nomg)==nullptr){
     Genre* g1=new Genre(nomg);
     GenreList.push_back(g1);
     return true;
    }
else return false;
}
bool Mediatheque::existeDocument(Genre* g){
unsigned i=0;
bool t=false;
while(t==false && i< DocumentList.size()){
      if (&DocumentList[i]->getGenre()!=nullptr){
        t=true;
      }
      else {i++;}

}
}
bool Mediatheque::modifierGenre(string old,string nv){
Genre* g=&chercherGenre(nv);
Genre *g1=&chercherGenre(old);
if ((g==nullptr)&&(g1!=nullptr)){
        unsigned int i=0;
        bool t=false;
        while((t==false)&&(i<GenreList.size())){
                if (GenreList[i]->getNom()==old){
                    t=true;
                 }
                else {i++;}
         }
         if (t==true){ GenreList[i]->modifier(nv); }
         return true ;
}
else return false;
}
bool Mediatheque::supprimerGenre(string n){
unsigned int i=0;
bool t=false;
while((t==false)&&(i<GenreList.size())){
    if (GenreList[i]->getNom()==n){
        t=true;
    }
    else {i++;}
}
vector<Genre*>::iterator m;
*m=GenreList[i];
if ((t==true)&&(existeDocument(GenreList[i]))){
    GenreList.erase(m);
}
}
bool Mediatheque::ajouterLocalisation(string r,string s){
Localisation *L=&chercherLocalisation(r,s);
if(&chercherLocalisation(r,s)==nullptr){
     Localisation* L1=new Localisation(r,s);
     LocalisationList.push_back(L1);
     return true;
    }
else return false;
}
bool Mediatheque::existeDocument(Localisation* L){
unsigned i=0;
bool t=false;
while(t==false && i< DocumentList.size()){
      if (&(DocumentList[i]->getLocalisation())!=nullptr){
        t=true;
      }
      else {i++;}

}
}
bool Mediatheque::supprimerLocalisation(string r,string s){
unsigned int i=0;
bool t=false;
while((t==false)&&(i<LocalisationList.size())){
    if ((LocalisationList[i]->getRayon()==r)&&(LocalisationList[i]->getSalle()==s)){
        t=true;
    }
    else {i++;}
}
vector<Localisation*>::iterator m;
*m=LocalisationList[i];
if ((t==true)&&(existeDocument(LocalisationList[i]))){
    LocalisationList.erase(m);
}
}
void Mediatheque::listerclient_a_renou()
{
    for(int i=0;i<ClientList.size();i++)
    {
        if (ClientList[i]->Renouveler())
        {ClientList[i]->afficherStatClient();}
        cout<<"===================================================="<<endl;
    }
}
void Mediatheque::listerEmprunt_en_retard()
{
    for(int i=0;i<EmpruntsList.size();i++)
    {
        if(EmpruntsList[i]->verifier())
        {
          EmpruntsList[i]->premierRappel();
          cout<<"Une Lettre de rappel a ete envoyee"<<endl;
          EmpruntsList[i]->document->afficher();
        }
    }
}
bool Mediatheque::charger(string nom_fichier){
string fichier=nom_fichier+".txt";
ifstream flux(fichier.c_str());
if(flux){
char type;
while(flux>>type){

        if(type=='A'||type=='a'){ajouterElement<Document>(flux,type);}
        if(type=='V'||type=='v'){ajouterElement<Document>(flux,type);}
        if(type=='L'||type=='l'){ajouterElement<Document>(flux,type);}
        if(type=='E'||type=='e'){ajouterCategorieF<CategorieClient>(flux,type);}
        if(type=='C'||type=='c'){ajouterClientF<Client>(flux,type);}
        if(type=='G'||type=='g'){ajouterGenreF<Genre>(flux,type);}
        if(type=='P'||type=='p'){ajouterLocalisationF<Localisation>(flux,type);}


}
return true ;
}
else{return false ;}
}
template<typename T>
bool Mediatheque::ajouterElement(istream& flux,char type){
string nom,prenom,adresse,code,salle,rayon,titre,auteur,annee,ng,cl,mention;
int duree,nbp,nomCat,nbe,cot,cd,ct;bool cdu,empruntee,empruntable,nbemp;
if(type=='A'||type=='a'){
flux>>code>>rayon>>salle>>titre>>auteur>>annee>>ng>>cl>>empruntable>>empruntee>>nbemp;
if(&chercherDocument(code)==nullptr)
{Localisation *L=new Localisation(salle,rayon);
Genre *G=new Genre(ng);
ajouterLocalisation(rayon,salle);
ajouterGenre(ng);
T *A=new Audio(code,L,titre,auteur,annee,G,cl);
if(empruntable){A->metEmpruntable();}
if(empruntee){A->emprunter();}
DocumentList.push_back(A);
}return true ;}
if(type=='V'||type =='v'){
flux>>code>>rayon>>salle>>titre>>auteur>>annee>>ng>>duree>>mention>>empruntable>>empruntee>>nbemp;
if(&chercherDocument(code)==nullptr)
{Localisation *L=new Localisation(salle,rayon);
Genre *G=new Genre(ng);
ajouterLocalisation(rayon,salle);
ajouterGenre(ng);
T *V=new Video(code,L,titre,auteur,annee,G,duree,mention);
if(empruntable){V->metEmpruntable();}
if(empruntee){V->emprunter();}
DocumentList.push_back(V);
}return true;}
if(type=='L'||type=='l'){
flux>>code>>rayon>>salle>>titre>>auteur>>annee>>ng>>nbp>>empruntable>>empruntee>>nbemp;
if(&chercherDocument(code)==nullptr)
{Localisation *L=new Localisation(salle,rayon);
Genre *G=new Genre(ng);
ajouterLocalisation(rayon,salle);
ajouterGenre(ng);
T *b=new Livre(code,L,titre,auteur,annee,G,nbp);
if(empruntable){b->metEmpruntable();}
if(empruntee){b->emprunter();}
DocumentList.push_back(b);
return true;
}return true;}
}
template<typename U>
bool Mediatheque::ajouterCategorieF(istream& flux,char type)
{string nomCat;int nem;double cot,cduree,ctarif;bool cra;
if(type=='E'||type=='e'){
flux>>nomCat>>nem>>cot>>cduree>>ctarif>>cra;
if(&chercherCategorie(nomCat)==nullptr){
U* CC=new U(nomCat,nem,cot,cduree,ctarif,cra);
CategorieList.push_back(CC);
return true;}
return true;
}
return false;
}
template<typename X>
bool Mediatheque::ajouterClientF(istream& flux,char type)
{string n,p,a,nomCat,di,dr;int nbe,nbec,nbd;bool cod;
if(type=='C'||type =='c'){
flux>>n>>p>>a>>nomCat>>nbec>>nbe>>nbd>>di>>dr>>cod;
if((&chercherCategorie(nomCat)!=nullptr)&&(&chercherClient(n,p)==nullptr) ){
    unsigned i=0;bool t=false;
    while((t==false)&&(i<CategorieList.size())){
    if (CategorieList[i]->getCatNom()==nomCat){
    X *C=new X(n,p,a,CategorieList[i]);
    C->setnbe(nbe);C->setnbec(nbec);C->setnbd(nbd);
    C->setDINS(di);C->setDREN(dr);
    C->setCodeRed(cod);
    t =true;
    ClientList.push_back(C);
    return true;
    }
    else{i++;}
}}
else {return false;}
}
}
template<typename Y>
bool Mediatheque::ajouterGenreF(istream&flux,char type){
if(type=='G'||type=='g'){
string nomg;
int nbe;
flux>>nomg>>nbe;
if(&chercherGenre(nomg)==nullptr){
     Y* g1=new Genre(nomg);

     GenreList.push_back(g1);
     return true;
    }
else return false;
}
}
template<typename Z>
bool Mediatheque::ajouterLocalisationF(istream& flux,char type)
{
if(type=='P'||type=='p'){
string s,r;flux>>r>>s;
if(&chercherLocalisation(r,s)==nullptr){
     Z* L1=new Localisation(r,s);
     LocalisationList.push_back(L1);
     return true;
    }
else return false;
}}

bool Mediatheque::Save(string nom_fichier){
string const fichier=nom_fichier+".txt";
ofstream flux(fichier.c_str());
if(flux)
{
for(int i=0;i<DocumentList.size();i++){
string ch=(DocumentList[i]->getclass());
if(ch=="Audio")
{flux<<ch[0]<<" "<<DocumentList[i]->getCode()<<" "<<DocumentList[i]->getLocalisation().getSalle()<<" "<<DocumentList[i]->getLocalisation().getRayon()<<" "<<DocumentList[i]->getTitre()<<" "<<DocumentList[i]->getAuteur()<<" "<<DocumentList[i]->getAnnee()<<" "<<DocumentList[i]->getGenre().getNom()<<" "<<DocumentList[i]->GetClassification()<<" "<<DocumentList[i]->estEmpruntable()<<" "<<DocumentList[i]->estEmprunte()<<" "<<DocumentList[i]->GetNbe()<<"\n";}
if(ch=="Livre")
{flux<<ch[0]<<" "<<DocumentList[i]->getCode()<<" "<<DocumentList[i]->getLocalisation().getSalle()<<" "<<DocumentList[i]->getLocalisation().getRayon()<<" "<<DocumentList[i]->getTitre()<<" "<<DocumentList[i]->getAuteur()<<" "<<DocumentList[i]->getAnnee()<<" "<<DocumentList[i]->getGenre().getNom()<<" "<<DocumentList[i]->GetNbp()<<" "<<DocumentList[i]->estEmpruntable()<<" "<<DocumentList[i]->estEmprunte()<<" "<<DocumentList[i]->GetNbe()<<"\n";}
if(ch=="Video")
{flux<<ch[0]<<" "<<DocumentList[i]->getCode()<<" "<<DocumentList[i]->getLocalisation().getSalle()<<" "<<DocumentList[i]->getLocalisation().getRayon()<<" "<<DocumentList[i]->getTitre()<<" "<<DocumentList[i]->getAuteur()<<" "<<DocumentList[i]->getAnnee()<<" "<<DocumentList[i]->getGenre().getNom()<<" "<<DocumentList[i]->GetDuree()<<" "<<DocumentList[i]->GetMention()<<DocumentList[i]->estEmpruntable()<<" "<<DocumentList[i]->estEmprunte()<<" "<<DocumentList[i]->GetNbe()<<"\n";}
}
for(int j=0;j<LocalisationList.size();j++)
{
flux<<"P"<<" "<<LocalisationList[j]->getRayon()<<" "<<LocalisationList[j]->getSalle()<<"\n";
}
for(int k=0;k<GenreList.size();k++)
{
flux<<"G"<<" "<<GenreList[k]->getNom()<<" "<<GenreList[k]->getNbEmprunts()<<"\n";
}
for(int l=0;l<CategorieList.size();l++)
{
flux<<"E"<<" "<<CategorieList[l]->getCatNom()<<" "<<CategorieList[l]->getnbMaxEmprunt()<<" "<<CategorieList[l]->getCotisation()<<" "<<CategorieList[l]->getCoefDuree()<<" "<<CategorieList[l]->getCoefTarif()<<" "<<CategorieList[l]->getCodeRedUtilise()<<"\n";
}
for(int m=0;m<ClientList.size();m++){
string ch=ClientList[m]->getDateI();
string ch1=ClientList[m]->getDateR();
flux<<"C"<<" "<<ClientList[m]->getNom()<<" "<<ClientList[m]->getPrenom()<<" "<<ClientList[m]->getAdresse()<<" "<<ClientList[m]->getCategorie().getCatNom()<<" "<<ClientList[m]->getnbEmpruntsEnCours()<<" "<<ClientList[m]->getnbEmpruntsEffectue()<<" "<<ClientList[m]->getnbEmpruntsDepasse()<<" "<<ch<<" "<<ch1<<" "<<ClientList[m]->getCode()<<"\n";
}
for(int n=0;n<EmpruntsList.size();n++){
string ch =EmpruntsList[n]->getDl();
string ch1=EmpruntsList[n]->getDe();
flux<<"F"<<" "<<EmpruntsList[n]->client->getNom()<<" "<<EmpruntsList[n]->client->getPrenom()<<" "<<EmpruntsList[n]->document->getCode()<<" "<<EmpruntsList[n]->document->getTitre()<<" "<<ch1<<" "<<ch<<" "<<EmpruntsList[n]->getD()<<"\n";
}




}
else{cout<<"ERREUR";}
}
