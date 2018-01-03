#ifndef UE_SEULE_H
#define UE_SEULE_H
#include<iostream>

#include "UE.h"

class UE_seule : public UE
{
public:
    UE_seule();
    UE_seule(int code,
         std::string intitule,
         int ects,
         int heure_td,
         int heure_tp,
         int heure_cm
    );
    ~UE_seule();
    void afficher_UE() override;

    void modifier_heure_td(int heure_td);
    void modifier_heure_tp(int heure_tp);
    void modifier_heure_cm(int heure_cm);

    int retourner_heure_td();
    int retourner_heure_tp();
    int retourner_heure_cm();

private:
    int d_heure_TD,
        d_heure_TP,
        d_heure_CM;

};

#endif
