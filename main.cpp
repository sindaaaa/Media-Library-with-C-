#include <string.h>
#include <cstdlib>
#include <conio.h>
#include<iostream>
#include "Mediatheque.h"


using namespace std;

int menu()
{
    system("COLOR F4");

    int n;
    cout<<"\n\n\n";
    cout<<"\t\t\t\t ========================================\n";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t *            Bienvenue a la            *\n";
    cout<<"\t\t\t\t *              Mediatheque             *\n ";
    cout<<"\t\t\t\t *            Maison de lecture         *\n ";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t ========================================\n\n";
    cout<<"\t\t\t\t Etes vous connecte en tant que employee ou Adherant ? \n\t\t\t\t    Tapez 1 si vous etes employee. \n\t\t\t\t    Tapez 2 si vous etes Adherant. \n\n";
    cout<<"\t\t\t\t\t Votre choix : ";
    cin>>n;
    system("cls");
    return n ;
}
int employee()
{
    int k;
    system("COLOR E1");
    cout<<"\n\n\n";
    cout<<"\t\t\t\t ========================================\n";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t *            Bienvenue au              *\n";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t *           Espace Employee            *\n ";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t ========================================\n\n";
    cout<<"\t\t\t\t\tVous voulez consulter:\n\t\t\t\t\t1.L'espace Gestion Adherents.\n\t\t\t\t\t2.L'espace Gestion Documents.\n\t\t\t\t\t3.Menu precedent.\n\t\t\t\t\t4.Sauvegarder les donnees.\n\t\t\t\t\t5.Charger les donnees.\n\t\t\t\t\t6.Quitter.\n\n\t\t\t\t  Votre choix: ";
    cin>>k;
    system("cls");
    return k ;
}
int adherents()
{
    system("COLOR 81");
    int m;
    cout<<"\n\n\n";
    cout<<"\t\t\t\t    ========================================\n";
    cout<<"\t\t\t\t    *                                      *\n ";
    cout<<"\t\t\t\t    *            Bienvenue au              *\n";
    cout<<"\t\t\t\t    *                                      *\n ";
    cout<<"\t\t\t\t    *       Espace Gestion Adherent        *\n ";
    cout<<"\t\t\t\t    *                                      *\n ";
    cout<<"\t\t\t\t    *                                      *\n ";
    cout<<"\t\t\t\t    ========================================\n\n";
    cout<<"\t\t\t\t\t1.Ajouter un categorie au adherents.\n\t\t\t\t\t2.Modifier la categorie du adherents.\n\t\t\t\t\t3.Supprimer la categorie du adherents\n\t\t\t\t\t4.Inscrire un adherents.\n\t\t\t\t\t5.Changer La categorie du adherents\n\t\t\t\t\t6.Afficher les caracteristiques des adherents\n\t\t\t\t\t7.Renouvler l'inscription du adherents\n\t\t\t\t\t8.Resilier adherents\n\t\t\t\t\t9.Menu precedent\n\t\t\t\t\t10.Quitter\n\n\t\t\t\t    Votre choix: ";
    cin>>m;
    system("cls");
    return m;

}
int documents()
{
    int d;
    system("COLOR 84");

    cout<<"\n\n\n";
    cout<<"\t\t\t\t    ========================================\n";
    cout<<"\t\t\t\t    *                                      *\n ";
    cout<<"\t\t\t\t    *            Bienvenue au              *\n";
    cout<<"\t\t\t\t    *                                      *\n ";
    cout<<"\t\t\t\t    *       Espace Gestion Document        *\n ";
    cout<<"\t\t\t\t    *                                      *\n ";
    cout<<"\t\t\t\t    *                                      *\n ";
    cout<<"\t\t\t\t    ========================================\n\n";
    cout<<"\t\t\t\t\t1.Ajouter une audio\n\t\t\t\t\t2.Ajouter un livre\n\t\t\t\t\t3.Ajouter une video\n\t\t\t\t\t4.Rendre le document consultable\n\t\t\t\t\t5.Rendre le document empruntable\n\t\t\t\t\t6.Retirer un document\n\t\t\t\t\t7.Emprunter un document\n\t\t\t\t\t8.Restituer un document\n\t\t\t\t\t9.Consulter les documents en retard\n\t\t\t\t\t10.Afficher les statistiques\n\t\t\t\t\t99.Charger\n\t\t\t\t\t11.Menu precedent\n\t\t\t\t\t12.Quitter\n\n\t\t\t\t    Votre choix: ";
    cin>>d;
    system("cls");
    return d;
}
int Adherant()
{
    int k;
    system("COLOR F1");
    cout<<"\n\n\n";
    cout<<"\t\t\t\t ========================================\n";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t *            Bienvenue au              *\n";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t *           Espace Adherant             *\n ";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t *                                      *\n ";
    cout<<"\t\t\t\t ========================================\n\n";
    cout<<"\t\t\t\t\t1.Changer votre adresse.\n\t\t\t\t\t2.Consulter emprunts Adherant.\n\t\t\t\t\t3.Consulter catalogue document.\n\t\t\t\t\t4.Menu precedent.\n\t\t\t\t\t5.Quitter.\n   \n\t\t\t\t Votre choix:  ";
    cin>>k;
    system("cls");
    return k ;
}
int main(){
Mediatheque M("Al Maarifa");
int a=1,e=1,choix;
int ga=1,gd=1;
choix=menu();
while (a!=5 && e!=6 &&ga!=10&&gd!=12){
    if (ga==10||gd==12)
            system("exit");
    else if (choix==1){
        e=employee();
        if(e==3)
             choix=menu();
        else if(e==4)
        {
            cout<<"Chargement en cours.Veuillez patientez quelques secondes...\n\n\n";
            M.Save("save");
            cout<<"Le sauvegarde a ete effectue avec succees.Appuyezsur une touche pour continuer...";
            getch();
            system("cls");
        }
        else if (e==5)
        {
            cout<<"Chargement en cours.Veuillez patientez quelques secondes...\n\n\n";
            M.charger("save");
            cout<<"L'importation a ete effectue avec succees.Appuyezsur une touche pour continuer...";
            getch();
            system("cls");
        }
        else if(e==6)
             system("exit");
        else{
             while(ga!=10 && gd!=12 && e!=3){
                if(e==1){
                    ga=adherents();
                    switch(ga){
                   case 1:{
                    bool v;
                    string nomcat;int nbe;double cot,cd,ct;bool cdu;
                    cout<<"Veuillez entrer les donees de la nouvelle categorie !\n\n";
                    cout<<"Entrez le nom du categorie : ";cin>>nomcat;
                    cout<<"Etnrez le nombre d'emprunts maximum : ";cin>>nbe;
                    cout<<"Entrez la cotisation : ";cin>>cot;
                    cout<<"Entrez coef duree : ";cin>>cd;
                    cout<<"Entrez coef tarif : ";cin>>ct;
                    cout<<"Entrez 1 si la categorie possede une reduction 0 si non : ";cin>>cdu;
                    v=M.ajouterCategorieClient(nomcat,nbe,cot,cd,ct,cdu);
                    if(v==true){
                    cout<<"\n\nL'ajout de la nouvelle categorie est fait avec succes.Appuyez sur une touche pour continuer...";}
                    else {cout<<"\n\nLa categorie saisie est deja existante.Appuyez sur une touche pour continuez...";}

                    getch();
                    system("cls");
                    break;}
                    case 2:
                    {  bool v;
                    string nomcat;int nbe;double cot,cd,ct;bool cdu;
                    cout<<"Veuillez entrer les nouvelles donnees d'une categorie !\n\n";
                    cout<<"Entrez le nom du categorie a modifier : ";cin>>nomcat;
                    cout<<"\nEtnrez le nouveau nombre d'emprunts maximum : ";cin>>nbe;
                    cout<<"\nEntrez la nouvelle cotisation : ";cin>>cot;
                    cout<<"\nEntrez le nouveau coefficient duree : ";cin>>cd;
                    cout<<"\nEntrez le nouveau coefficient tarif : ";cin>>ct;
                    cout<<"\nEntrez 1 si la categorie possede une reduction 0 si non : ";cin>>cdu;
                    if(&(M.chercherCategorie(nomcat))!=nullptr){
                            M.modifierCategorieClient(nomcat,nbe,cot,cd,ct,cdu);
                            cout<<"\n\nLa modification de la categorie est fait avec succes.Appuyez sur une touche pour continuer...";
                    }
                    else {cout<<"\n\nLa categorie saisie n'est existe pas.Appuyez sur une touche pour continuez..."; }

                    getch();
                    system("cls");
                    break;

                    }
                    case 3:
                    {
                    string nomcat;
                    cout<<"Veuillez entrer le nom de la categorie a supprimer !\n\n";
                    cout<<"Entrez le nom du categorie a supprimer : ";cin>>nomcat;
                    if(&(M.chercherCategorie(nomcat))!=nullptr){
                    M.supprimerCategorieClient(nomcat);
                    cout<<"\n\nLa suppression de la categorie est fait avec succes.Appuyez sur une touche pour continuer...";
                    }
                    else {cout<<"\n\nLa categorie saisie n'est existe pas.Appuyez sur une touche pour continuez..."; }

                    getch();
                    system("cls");
                    break;

                    }
                    case 4:
                    {string n,p,a,nc;bool v4=false;
                    cout<<"Veuillez entrer les donnees du nouveau client !\n\n";
                    cout<<"Entrez votre nom : ";cin>>n;
                    cout<<"Entrez votre prenom : ";cin>>p;
                    cout<<"Entrez votre adresse : ";cin>>a;
                    cout<<"Entrez le nom du categorie : ";cin>>nc;
                    v4=M.inscrireClient(n,p,a,nc);
                    if(v4){cout<<"\n\nL'inscription du client est faite avec succes.Appuyez sur une touche pour continuer...";}
                    else {cout<<"\n\nVeuillez verifier les donnees saisies.Appuyez sur une touche pour continuer...";}
                    getch();
                    system("cls");
                    break;
                    }
                    case 5:
                    {string n,p,nvc;bool v5=false;
                    cout<<"Veuillez entrer les donnees du client et la nouvelle categorie!\n\n";
                    cout<<"Entrez votre nom : ";cin>>n;
                    cout<<"Entrez votre prenom : ";cin>>p;
                    cout<<"Entrez la nouvelle categorie : ";cin>>nvc;
                    v5=M.changerCategorieClient(n,p,nvc);
                    if(v5==true){cout<<"\n\nLe changement pour M."<<n<<" "<<p<<" est effectue avec succes. Appuyez sur une touche pour continuer...";}
                    else { cout<<"\n\nVeuillez verifiez les donnees que vous avez entre.Appuyez sur une touche pour continuer...";}
                    getch();
                    system("cls");
                    break;
                    }
                    case 6:
                    {cout<<"===========Les caracteristiques des clients de la mediatheque===========\n\n\n"<<endl;
                    M.listerClients();
                    cout<<"\n\nAppuyez sur une touche pour continuer...";
                    getch();
                    system("cls");
                    break ;
                    }
                    case 7:
                    {

                        cout<<"Voici la liste des clients dont l'inscription est a renouveler"<<endl;
                        M.listerclient_a_renou();
                        cout<<"Veuillez entrer les donnees du client a reinscrire!"<<endl;
                        string n,p;Client* c;bool v4=false;Date* d=new Date();Date d2;
                        cout<<"Entrez votre nom : ";cin>>n;
                        cout<<"Entrez votre prenom : ";cin>>p;
                        *c=M.chercherClient(n,p);
                        c->peutEmprunter();
                        c->setDateInscription(*d);
                        d2.ajouter(365,c->getDateInscription());
                        c->setDateRenouvellement(d2);
                        c->afficherStatClient();
                        cout<<"\n\nAppuyez sur une touche pour continuer...";
                        getch();
                        system("cls");
                        break;

                    }

                    case 8:
                    {string n,p;bool v8;
                    cout<<"Veuillez les donnees du client a resilier!\n\n";
                    cout<<"Entrez votre nom : ";cin>>n;
                    cout<<"Entrez votre prenom : ";cin>>p;
                    v8=M.resilier(n,p);
                    if(v8==true){cout<<"\n\nLa suppression pour M."<<n<<" "<<p<<" est effectue avec succes. Appuyez sur une touche pour continuer...";}
                    else { cout<<"\n\nVeuillez verifiez les donnees que vous avez entre.Appuyez sur une touche pour continuer...";}
                    getch();
                    system("cls");
                    break;

                    }


                    case 9:
                        e=employee();
                        if(e==3)
                            choix=menu();
                        else if(e==6)
                            system("exit");
                    case 10:
                       system("exit");
                       break;
                    }}
                else{
                    gd=documents();
                    switch(gd){
                    case 1:
                    {string c,r,s,t,au,an,nomgenre,cl;
                    bool v1;
                    cout<<"Veuillez entrer les donees du nouveau audio!\n\n";
                    cout<<"Entrer le code :";cin>>c;
                    cout<<"Entrer le rayon :";cin>>r;
                    cout<<"Entrer la salle :";cin>>s;
                    cout<<"Entrer le titre :";cin>>t;
                    cout<<"Entrer l'auteur :";cin>>au;
                    cout<<"Entrer l'annee :";cin>>an;
                    cout<<"Entrer le genre :";cin>>nomgenre;
                    cout<<"Entrer la classification :";cin>>cl;
                    v1=M.ajouterAudio(c,r,s,t,au,an,nomgenre,cl);
                    if(v1==true){
                    cout<<"\n\nL'ajout d'audio est fait avec succes.Appuyez sur une touche pour continuer...";}
                    else {cout<<"\n\nLe code document entree est deja existant.Appuyez sur une touche pour continuez...";}
                    getch();
                    system("cls");
                    break;}
                    case 2:
                    {string c,r,s,t,au,an,nomgenre;int nbpage;bool v2;
                    cout<<"Veuillez entrer les donees du nouveau livre!\n\n";
                    cout<<"Entrer le code :";cin>>c;
                    cout<<"Entrer le rayon :";cin>>r;
                    cout<<"Entrer la salle :";cin>>s;
                    cout<<"Entrer le titre :";cin>>t;
                    cout<<"Entrer l'auteur :";cin>>au;
                    cout<<"Entrer l'annee :";cin>>an;
                    cout<<"Entrer le genre :";cin>>nomgenre;
                    cout<<"Entrer le nombre de pages :";cin>>nbpage;
                    v2=M.ajouterLivre(c,r,s,t,au,an,nomgenre,nbpage);
                    if(v2){cout<<"\n\nL'ajout du livre est fait avec succes.Appuyez sur une touche pour continuer...";}
                    else {cout<<"\n\nLe code document entree est deja existant.Appuyez sur une touche pour continuez...";}
                    getch();
                    system("cls");
                    break;}
                    case 3:
                    {string c,r,s,t,au,an,nomgenre,mention;int duree;bool v3;
                    cout<<"Veuillez entrer les donees du nouveau video!\n\n";
                    cout<<"Entrer le code :";cin>>c;
                    cout<<"Entrer le rayon :";cin>>r;
                    cout<<"Entrer la salle :";cin>>s;
                    cout<<"Entrer le titre :";cin>>t;
                    cout<<"Entrer l'auteur :";cin>>au;
                    cout<<"Entrer l'annee :";cin>>an;
                    cout<<"Entrer la duree :";cin>>duree;
                    cout<<"Entrer lal mention legale :";cin>>mention;
                    v3=M.ajouterVideo(c,r,s,t,au,an,nomgenre,duree,mention);
                    if(v3){cout<<"\n\nL'ajout du video est fait avec succes.Appuyez sur une touche pour continuer...";}
                    else {cout<<"\n\nLe code document entree est deja existant.Appuyez sur une touche pour continuez...";}
                    getch();
                    system("cls");
                    break;}
                    case 4:
                    {
                        string c;bool v4;
                        cout<<"Veuillez enter le code du document!\n\n";
                        cout<<"ENtrer le code : ";cin>>c;
                        v4=M.setConsultable(c);
                        if(v4){cout<<"\n\n Le document ayant le code "<<c<<" est desormais consultable. Appuyez sur une touche pour continuez...";}
                        else {cout<<"\n\nEchec de l'operation. Appuyez sur une touche continuer...";}
                        getch();
                        system("cls");
                        break ;
                    }
                    case 5:
                    {    string c;bool v5;
                        cout<<"Veuillez enter le code du document!\n\n";
                        cout<<"Entrer le code : ";cin>>c;
                        v5=M.setEmpruntble(c);
                        if(v5){cout<<"\n\n Le document ayant le code "<<c<<" est desormais empruntable. Appuyez sur une touche pour continuez...";}
                        else {cout<<"\n\nEchec de l'operation. Appuyez sur une touche continuer...";}
                        getch();
                        system("cls");
                        break ;
                    }
                    case 6:
                    {
                        string c;bool v6;
                        cout<<"Veuillez enter le code du document a retirer!\n\n";cin>>c;
                        v6=M.retirerDoc(c);
                        if(v6){cout<<"\n\n Le document ayant le code "<<c<<" a ete retire avec succes. Appuyez sur une touche pour continuez...";}
                        else {cout<<"\n\nEchec de l'operation.Veuillez verifier le code document entre. Appuyez sur une touche continuer...";}
                        getch();
                        system("cls");
                        break ;

                    }
                    case 7:
                    {
                        string c,n,p;bool v7;
                        cout<<"Veuillez enter les donnees de l'emprunteur et le document!\n\n";
                        cout<<"Enter le nom de l'emprunteur: ";cin>>n;
                        cout<<"Enter le prenom de l'emprunteur: ";cin>>p;
                        cout<<"Enter le code du document a emprunter: ";cin>>c;
                        v7=M.emprunter(n,p,c);
                        if(v7){cout<<"\n\n Le document ayant le code "<<c<<" a ete emprunte avec succes. Appuyez sur une touche pour continuez...";}
                        else {cout<<"\n\nEchec de l'operation.Veuillez verifier le code document entre. Appuyez sur une touche continuer...";}
                        getch();
                        system("cls");
                        break ;

                    }
                    case 8:
                    {string n,p,c;bool v8;
                    cout<<"Veuillez entrer les donnees de l'adherent et le document a restituer!\n\n";
                    cout<<"Enter le nom de l'emprunteur: ";cin>>n;
                    cout<<"Enter le prenom de l'emprunteur: ";cin>>p;
                    cout<<"Enter le code du document a restituer: ";cin>>c;
                    v8=M.restituerDoc(n,p,c);
                    if(v8){cout<<"\n\n Le document ayant le code "<<c<<" a ete restituer avec succes. Appuyez sur une touche pour continuez...";}
                    else{cout<<"\n\nEchec de l'operation.Veuillez verifier le code document entre. Appuyez sur une touche continuer...";}
                    getch();
                    system("cls");
                    break;
                    }
                    case 9:
                    {
                        cout<<"===============Voici la liste des documents en retard===============\n\n"<<endl;
                        M.listerEmprunt_en_retard();
                        cout<<"\n\nAppuyez sur une touche continuer...";
                        getch();
                        system("cls");
                        break;
                    }

                    case 10:
                        {
                            cout<<"===============Voici la liste des documents===============\n\n"<<endl;
                            M.listerDocuments();
                            cout<<"\n\n\n";

                            cout<<'\n'<<'\n'<<"Appuyez sur une touche pour continuer...";
                            getch();
                            system("cls");
                            break;
                        }

                    case 11:
                       {e=employee();
                       if(e==3)
                            choix=menu();
                       else if(e==6)
                            system("exit");break ;}
                    case 12:
                       {system("exit");
                       break;}

                    }
                    }
             }}}
    else{
        a=Adherant();
        switch(a){
            case 1:{
            string n,p,adr;bool v1;
            cout<<"Veuillez entrer votre nouvelle adresse!\n\n";
            cout<<"Entrez votre nom : ";cin>>n;
            cout<<"Entrez votre prenom : ";cin>>p;
            cout<<"Entrez votre nouvelle adresse : ";cin>>adr;
            v1=M.changerAdresse(n,p,adr);
            if (v1){cout<<"\n\nLe changement de votre adresse a ete effectue avec succes! Merci de visiter notre mediatheque.\nAppuyez sur une touche pour continuer...";  }
            else {cout<<"\n\nVeuillez verifiez votre donnes! Appuyez sur une touche pour continuer";  }
            getch();
            system("cls");
            break;
            }
            case 2:{
                string n,p;

                cout<<"================ Vos Emprunrs ================\n\n";
                cout<<"Entrer votre nom:";cin>>n;
                cout<<"Enteer votre prenom:";cin>>p;
                cout<<"\n\n";
                Client *C=&(M.chercherClient(n,p));
                C->listerEmprunts();
                cout<<"\n\nAppuyez sur une touche pour continuer...";
                getch();
                system("cls");
                break;
            }


            case 3:
            {
                cout<<"================ Catalogue des documents ================\n\n";
                M.listerDocuments();
                cout<<"\n\nAppuyez sur une touche pour continuer...";
                getch();
                system("cls");
                break;
            }
            case 4:
                 choix=menu();
                 break;
            case 5:
                system("exit");
                break;
        }}}
    return 0;

}
