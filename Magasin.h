#ifndef MAGASIN_H
#define MAGASIN_H
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Produit.h"
#include "Commande.h"
#include "Client.h"


class Magasin
{
    public:
        /** Default constructor */
        Magasin(vector<Produit> prod,vector<Client> cli,vector<Commande> cmd)
        {
        produits=prod;
        clients=cli;
        commandes=cmd;
        }

        Magasin(){}

        /** Default destructor */
        virtual ~Magasin();

        /** Access produits
         * \return The current value of produits
         */
        vector<Produit> Getproduits() { return produits; }
        /** Set produits
         * \param val New value to set
         */
        void Setproduits(vector<Produit> val) { produits = val; }
        /** Access clients
         * \return The current value of clients
         */
        vector<Client> Getclients() { return clients; }
        /** Set clients
         * \param val New value to set
         */
        void Setclients(vector<Client> val) { clients = val; }
        /** Access commandes
         * \return The current value of commandes
         */
        vector<Commande> Getcommandes() { return commandes; }
        /** Set commandes
         * \param val New value to set
         */
        void Setcommandes(vector<Commande> val) { commandes = val; }

        //!< Method
        //!< add client

        void add_client(string prenom,string nom)
        {
        Client cli;
        cli.Setid(clients.size()+1);
        cli.Setnom(nom);
        cli.Setprenom(prenom);
        clients.push_back(cli);
        }

          //!< Display clients
        void display_clients()
        {
            for(unsigned int i=0;i<clients.size();i++)
            {
            std::cout<<i+1<<"             ";
            clients[i].Display();
            std::cout<<"/n";
            }
        }

         //!< Display client by  first and last name
        void display_client(string prenom,string nom)
        {
            for(unsigned int i=0;i<clients.size();i++)
            {
            if(clients[i].Getnom()==nom && clients[i].Getprenom()==prenom)
                {
            clients[i].Display();
                }
            }
        }

        //!< Display client by id
        void display_client(int id)
        {
            for(unsigned int i=0;i<clients.size();i++)
            {
            if(clients[i].Getid()==id)
                {
            clients[i].Display();
                }
            }
        }

        //!< Add product to shopping cart for client by his name
        void add_product_to_shopping_cart(string titre_produit,string prenom_client,string nom_client)
        {

        for(unsigned int i=0;i<clients.size();i++)
            {
            if(clients[i].Getnom()==nom_client && clients[i].Getprenom()==prenom_client)
                {
            clients[i].shop(titre_produit);
                }
            }

        }

         //!< add product to shopping cart for client by his id
        void add_product_to_shopping_cart(string titre_produit,int id_client)
        {

        for(unsigned int i=0;i<clients.size();i++)
            {
            if(clients[i].Getid()==id_client)
                {
            clients[i].shop(titre_produit);
                }
            }

        }

        //!< update product quantity to shopping cart for client by his id
        void add_product_to_shopping_cart(string titre_produit,unsigned int new_quantity,int id_client)
        {

        for(unsigned int i=0;i<clients.size();i++)
            {
            if(clients[i].Getid()==id_client)
                {
            clients[i].update_product_quantity_in_cart(titre_produit,new_quantity);
                }
            }


        }

        //!< Method
        //!< validate command

        void validate_command(Client cli,string status)
        {Commande cmd;
        cmd.Setclient(cli);
        cmd.Setproduits(cli.Getpanier());
        cmd.Setstatus(status);
        }


        //!< Method
        //!< Update command state

        void update_command_state(Commande cmd,string status)
        {
        cmd.Setstatus(status);
        }

        //!< Method
        //!< List all commands

        void List_all_command()
        {
          for(unsigned int i=0;i<commandes.size();i++)
            {
                {
            std::cout<<"---("<<i+1<<")---";
            commandes[i].Display();
                }
            }
        }

        //!< Method
        //!< List all commands for specific client by his id

        void List_all_client_command(int client_id)
        {

                    for(unsigned int j=0;j<commandes.size();j++)
                        {
                            if(commandes[j].Getclient().Getid()==client_id)
                            {
                             commandes[j].Display();
                            }
                        }

        }



    protected:

    private:
        vector<Produit> produits; //!< Member variable "produits"
        vector<Client> clients; //!< Member variable "clients"
        vector<Commande> commandes; //!< Member variable "commandes"
};

#endif // MAGASIN_H
