#ifndef UE_composee_H
#define UE_composee_H
#include<vector>
#include <iostream>

#include "UE.h"
#include "ECUE.h"

class UE_composee : public UE
{
public:
    UE_composee();
    UE_composee(int code,
                std::string intitule,
                int ects,
                std::vector<ECUE*> ECUE
    );
    ~UE_composee();
    void afficher_UE() override;
    void modifier_ECUEs(std::vector<ECUE*> ecues);
    void ajouter_ECUE(ECUE* ecue);
    void supprimer_dernier_ECUE();

private:
    std::vector<ECUE*> d_ECUE;
};

#endif
