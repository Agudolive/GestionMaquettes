#ifndef MAQUETTE_H
#define MAQUETTE_H

class maquette
{
public:
    maquette();
    maquette(vector<UE*> &UE,
             UE_choix* UE_choix,
             std::string domaine,
             std::string mention,
             std::string parcours,
             int annee,
             int semestre
    );
    ~maquette();
    void remplacer_UEs(vector<UE*> UEs);
    void ajouter_UE(UE& ue);
    void supprimer_derniere_UE();
    void supprimer_UE(int index);
    void retourner_UE();
    void modifier_UE_choix(UE& ue);
    void retourner_UE_choix();
    void modifier_domaine(std::string domaine);
    std::string retourner_domaine();
    void modifier_mention(std::string mention);
    std::string retourner_mention();
    void modifier_parcours(std::string parcours);
    std::string retourner_parcours();
    void modifier_annee(unsigned int annee);
    unsigned int retourner_annee();
    void modifier_semestre(unsigned int semestre);
    unsigned int retourner_semestre();

private:
    vector<UE*> d_UE;
    UE_choix* d_UE_choix;
    std::string d_domaine;
    std::string d_mention;
    std::string d_parcours;
    unsigned int d_annee;
    unsigned int d_semestre;
};

#endif
