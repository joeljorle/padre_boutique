#ifndef PRODUIT_H
#define PRODUIT_H
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

class Produit
{
    public:
        /** Default constructor */
        Produit(string tit,string desc,unsigned int pu,unsigned int qte)
        {
            titre=tit;
            description=desc;
            prix_unitaire=pu;
            quantite=qte;
        }

        Produit(){}

        /** Default destructor */
        virtual ~Produit()
        {
            //dtor
        }


        /** Access titre
         * \return The current value of titre
         */
        string Gettitre() { return titre; }
        /** Set titre
         * \param val New value to set
         */
        void Settitre(string val) { titre = val; }
        /** Access description
         * \return The current value of description
         */
        string Getdescription() { return description; }
        /** Set description
         * \param val New value to set
         */
        void Setdescription(string val) { description = val; }
        /** Access prix_unitaire
         * \return The current value of prix_unitaire
         */
        unsigned int Getprix_unitaire() { return prix_unitaire; }
        /** Set prix_unitaire
         * \param val New value to set
         */
        void Setprix_unitaire(unsigned int val) { prix_unitaire = val; }
        /** Access quantite
         * \return The current value of quantite
         */
        unsigned int Getquantite() { return quantite; }
        /** Set quantite
         * \param val New value to set
         */
        void Setquantite(unsigned int val) { quantite = val; }

        ostream& operator <<(ostream& ostr)
        {
        return ostr<<" titre : "<<titre<<" description : "<<description<<"prix unitaire: "<<prix_unitaire<<"quantite: "<<quantite;
        }

        //!< Method
        //!< Display this product

        void display()
        { cout<<" titre : "<<titre<<" description : "<<description<<"prix unitaire: "<<prix_unitaire<<"quantite: "<<quantite;}

    protected:

    private:
        string titre; //!< Member variable "titre"
        string description; //!< Member variable "description"
        unsigned int prix_unitaire; //!< Member variable "prix_unitaire"
        unsigned int quantite; //!< Member variable "quantite"
};

#endif // PRODUIT_H
