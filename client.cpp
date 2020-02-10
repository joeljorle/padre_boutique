#include "client.h"

client::client(string titre,string description,int prix_unitaire,int quantite)
{
    client::description=description;
    client::titre=titre;
    client::prix_unitaire=prix_unitaire;
    client::quantite=quantite;
}

client::~client()
{
    //dtor
}
