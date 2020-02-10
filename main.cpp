#include <iostream>
#include "Magasin.h"
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Produit.h"
#include "Client.h"
#include "Commande.h"
using namespace std;

vector<Client> liste_clients;
vector<Magasin> liste_magasins;
vector<Produit> liste_produits;
vector<Commande> liste_commandes;


void menu_produit();
void menu_client();
void menu_commande();
void menu_magasin();
void menu_principal();
void nouvel_utilisateur();
void listing_utilisateur();
void modifier_utilisateur();
void nouvel_produit();
void listing_produit();
void modifier_produit();
void nouvel_magasin();
void listing_magasin();
void modifier_magasin();
void gerer_magasin();
void nouvel_commande();
void listing_commande();
void modifier_commande();

int main()
{
    menu_principal();
    return 0;
}

void menu_client(){

std::cout<<"------------------------------------ \n";
std::cout<<"-------GESTION DES UTILISATEURS---------\n";
std::cout<<" ---------------------------------- \n";

std::cout<<" Sectionner une action a faire svp : \n";
std::cout<<" [ 1 ] ajouter des  Utilisateurs: \n";
std::cout<<" [ 2 ] afficher les utilisateur \n";
std::cout<<" [ 3 ] modifier un utilisateur \n";
std::cout<<" [ 4 ] menu  principal \n";
action_utilisateurs:
int choix=0;
std::cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :nouvel_utilisateur(); menu_client();break;
case 2  :listing_utilisateur(); menu_client(); break;
case 3  :modifier_utilisateur(); menu_client();break;
case 4  :menu_principal();break;
default : std::cout<<" entre [1] , [2] , [3] et [4] svp \n";
         goto action_utilisateurs;
break;
}

}

void menu_produit(){

std::cout<<"------------------------------------ \n";
std::cout<<"-------GESTION DES PRODUITS---------\n";
std::cout<<" ---------------------------------- \n";

std::cout<<" Sectionner une action a faire svp : \n";
std::cout<<" [ 1 ] ajouter des  produits: \n";
std::cout<<" [ 2 ] afficher les produits \n";
std::cout<<" [ 3 ] modifier un produit \n";
std::cout<<" [ 4 ] menu  principal \n";
action_produit:
int choix=0;
std::cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :nouvel_produit(); menu_produit();break;
case 2  :listing_produit(); menu_produit(); break;
case 3  :modifier_produit(); menu_produit();break;
case 4  :menu_principal();break;
default : std::cout<<" entre [1] , [2] , [3] et [4] svp \n";
         goto action_produit;
break;
}

}

void menu_magasin(){
std::cout<<"------------------------------------ \n";
std::cout<<"-------GESTION DES MAGASINS---------\n";
std::cout<<" ---------------------------------- \n";

std::cout<<" Sectionner une action a faire svp : \n";
std::cout<<" [ 1 ] ajouter des  magasins: \n";
std::cout<<" [ 2 ] afficher les magasins \n";
std::cout<<" [ 3 ] modifier un magasin \n";
std::cout<<" [ 4 ] gerer un magasin \n";
std::cout<<" [ 5 ] menu  principal \n";
action_magasin:
int choix=0;
std::cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :nouvel_magasin(); menu_magasin();break;
case 2  :listing_magasin(); menu_magasin(); break;
case 3  :modifier_magasin(); menu_magasin();break;
case 4  :gerer_magasin();break;
case 5  :menu_principal();break;
default : std::cout<<" entre [1] , [2] , [3] , [4] et [5] svp \n";
         goto action_magasin;
break;
}
}
void menu_commande(){
std::cout<<"------------------------------------ \n";
std::cout<<"-------GESTION DES COMMANDES---------\n";
std::cout<<" ---------------------------------- \n";

std::cout<<" Sectionner une action a faire svp : \n";
std::cout<<" [ 1 ] ajouter des  commandes: \n";
std::cout<<" [ 2 ] afficher les commandes \n";
std::cout<<" [ 3 ] modifier une commande \n";
std::cout<<" [ 4 ] menu  principal \n";
action_commande:
int choix=0;
std::cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :nouvel_commande(); menu_commande();break;
case 2  :listing_commande(); menu_commande(); break;
case 3  :modifier_commande(); menu_commande();break;
case 4  :menu_principal();break;
default : std::cout<<" entre [1] , [2] , [3] et [4]  svp \n";
         goto action_commande;
break;
}
}

void menu_principal()
{
std::cout<<"------------------------------------ \n";
std::cout<<"   -------MENU PRINCIPAL---------\n";
std::cout<<" ---------------------------------- \n";

std::cout<<" Sectionner une action a faire svp : \n";
std::cout<<" [ 1 ] Gestion des  Utilisateurs: \n";
std::cout<<" [ 2 ] Gestion des  Magasins \n";
std::cout<<" [ 3 ] Gestion des  commandes \n";
action_principale:
int choix=0;
std::cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :menu_client();  break;
case 2  :menu_magasin(); break;
case 3  :menu_commande();break;
default : std::cout<<" entre [1] , [2] et [3] svp \n";
         goto action_principale;
break;

}


}



void nouvel_utilisateur(){
std::cout<<"   -------NOUVEL UTILISATEUR---------\n";
string nom,prenom;Client cli;
std::cout<<" entrer un nom : "; cin>>nom;
std::cout<<" entrer un prenom : "; cin>>prenom;
cli.Setnom(nom);
cli.Setprenom(prenom);
cli.Setid(liste_clients.size()+1);
liste_clients.push_back(cli);
std::cout<<"\n"<<nom<<"  "<<prenom<<" ok \n";
};
void listing_utilisateur(){
std::cout<<"   -------LISTE DES UTILISATEURS---------\n\n";
 for(unsigned int i=0;i<liste_clients.size();i++)
            {
            std::cout<<liste_clients[i].Getid()<<"             ";
            liste_clients[i].Display();
            std::cout<<"\n";
            }
  std::cout<<"\n";

};
void modifier_utilisateur(){

listing_utilisateur();
choix_client:
int choix=0;
std::cout<<" choisir un coututilisateur svp :  ";cin>>choix;
string nom,prenom;
for(unsigned int i=0;i<liste_clients.size();i++)
            {
           if(liste_clients[i].Getid()==choix)
          { std::cout<<"Vous avez choisi : ";
          liste_clients[i].Display();
std::cout<<"\n";
std::cout<<" entrer un nouveau nom : "; cin>>nom;
std::cout<<" entrer un nouveau prenom : "; cin>>prenom;
liste_clients[i].Setnom(nom);
liste_clients[i].Setprenom(prenom);
std::cout<<"\n"<<nom<<"  "<<prenom<<" ok \n";
             break;
          }
           else{
           std::cout<<" faire un choix honnete svp \n";
           goto choix_client;
           }
            }

};

void nouvel_produit(){
};
void listing_produit(){};
void modifier_produit(){};
void nouvel_commande(){};
void listing_commande(){};
void modifier_commande(){};
void nouvel_magasin(){};
void listing_magasin(){};
void modifier_magasin(){};
void gerer_magasin(){};





