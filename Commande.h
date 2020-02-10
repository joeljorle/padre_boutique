#ifndef COMMANDE_H
#define COMMANDE_H
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Produit.h"
#include "Client.h"



class Commande
{
    public:
        /** Default constructor */
        Commande(Client cli,vector<Produit> produits,string status)
        {
        client=cli;
        produits=produits;
        status=status;
        }

        Commande(){}

        /** Default destructor */
        virtual ~Commande()
        {
        //dtor
        }

        /** Access client
         * \return The current value of client
         */
        Client Getclient() { return client; }
        /** Set client
         * \param val New value to set
         */
        void Setclient(Client val) { client = val; }
        /** Access produits
         * \return The current value of produits
         */
        vector<Produit> Getproduits() { return produits; }
        /** Set produits
         * \param val New value to set
         */
        void Setproduits(vector<Produit> val) { produits = val; }
        /** Access status
         * \return The current value of status
         */
        string Getstatus() { return status; }
        /** Set status
         * \param val New value to set
         */
        void Setstatus(string val) { status = val; }

        //!< Method
        //!< Display this command

        void Display()
        {
        std::cout<<" Client : "<<client.Getprenom()<<" "<<client.Getnom()<<" /n "<<" produit :";
          for(unsigned int i=0;i<produits.size();i++)
         {
         std::cout<<"["<<i+1<<"]-"<<produits[i].Gettitre()<<"/n";
         }
        std::cout<<"status : "<<status<<"/n";
        }


        //!< Method
        //!< Surcharge del'operateur
        ostream& operator <<(ostream& ostr)
        {
        return ostr<<" Client : "<<client.Getprenom()<<" "<<client.Getnom()<<" /n "<<" produit :"<<"status : "<<status<<"/n";
        }







        protected:

        private:
        Client client; //!< Member variable "client"
        vector<Produit> produits; //!< Member variable "produits"
        string status; //!< Member variable "status"
};

#endif // COMMANDE_H
