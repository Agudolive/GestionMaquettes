#include "UE_composee.h"

UE_composee::UE_composee():
    UE(),
    d_ECUE{}
{}

UE_composee::UE_composee(int code, std::string intitule, int ects, std::vector<ECUE*> ECUE):
    UE(code, intitule, ects),
    d_ECUE{ECUE}
{}

UE_composee::~UE_composee()
{

}

void UE_composee::afficher_UE()
{
    std::cout << "code UE : " << retourner_code() << std::endl;
    std::cout << "intitule UE : " << retourner_intitule() << std::endl;
    std::cout << "nombre d'ECTS : " << retourner_ects() << std::endl;
    for(unsigned int i=0; i < d_ECUE.size(); i++)
        d_ECUE[i]->afficher_ECUE();
}

void UE_composee::modifier_ECUEs(std::vector<ECUE*> ecues)
{
    d_ECUE.clear();
    for(unsigned int i=0; i < ecues.size(); i++)
        d_ECUE[i] = ecues[i];
}

void UE_composee::ajouter_ECUE(ECUE* ecue)
{
    d_ECUE.push_back(ecue);
}

void UE_composee::supprimer_dernier_ECUE()
{
    d_ECUE.pop_back();
}
