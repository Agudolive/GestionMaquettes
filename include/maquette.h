#ifndef MAQUETTE_H
#define MAQUETTE_H

class maquette
{
public:
    maquette();
    ~maquette();
    void ajouter_UE(UE& ue);
    void supprimer_UE();
    void vider_UE();
    /*
    TOUS LES SETTERS GETTERS
    */

private:
    vector<UE*> d_UE;
    vector<bool> d_UE_choix;

    string d_domaine;
    string d_mention;
    string d_parcours;
    int d_annee;
    int d_semestre;
};

#endif
