#ifndef MAQUETTE_H
#define MAQUETTE_H
#include"UE.h"
#include"UE_choix.h"

#include <vector>

class maquette
{
public:
    maquette();
    maquette(std::vector<UE*> &UE,
             UE_choix* UE_choix,
             std::string domaine,
             std::string mention,
             std::string parcours,
             int annee,
             int semestre
    );
    ~maquette();
    
    maquette& operator=(const maquette &maq);
    
    void remplacer_UEs(std::vector<UE*> UEs);
    void ajouter_UE(UE& ue);
    void supprimer_derniere_UE();
    void supprimer_UE(int index);
    std::vector<UE*> retourner_UEs();
    void remplacer_UEs_choix(std::vector<UE_choix*> _choix);
    void ajouter_UE_choix(UE_choix& ue_choix);
    void supprimer_derniere_UE_choix();
    void supprimer_UE_choix(int index);
    std::vector<UE_choix*> retourner_UEs_choix();
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
    std::vector<UE*> d_UE;
    std::vector<UE_choix*> d_UE_choix;
    std::string d_domaine;
    std::string d_mention;
    std::string d_parcours;
    unsigned int d_annee;
    unsigned int d_semestre;
};

#endif
