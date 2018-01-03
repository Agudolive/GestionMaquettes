#ifndef UE_choix_H
#define UE_choix_H
#include <iostream>

#include "UE.h"

class UE_choix : public UE
{
public:
    UE_choix();
    UE_choix(int code,
       std::string intitule,
       int ects, int heure_td,
       int heure_tp,
       int heure_cm
    );
    ~UE_choix();
    void afficher_UE() override;
};

#endif
