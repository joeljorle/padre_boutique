#ifndef CLIENT_H
#define CLIENT_H


class client
{
    public:
        /** Default constructor */
        client(string titre,string description,int prix_unitaire,int quantite);
        /** Default destructor */
        virtual ~client();

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
        string Getprix_unitaire() { return prix_unitaire; }
        /** Set prix_unitaire
         * \param val New value to set
         */
        void Setprix_unitaire(string val) { prix_unitaire = val; }
        /** Access quantite
         * \return The current value of quantite
         */
        int Getquantite() { return quantite; }
        /** Set quantite
         * \param val New value to set
         */
        void Setquantite(int val) { quantite = val; }

    protected:

    private:
        string titre; //!< Member variable "titre"
        string description; //!< Member variable "description"
        string prix_unitaire; //!< Member variable "prix_unitaire"
        int quantite; //!< Member variable "quantite"
};

#endif // CLIENT_H
