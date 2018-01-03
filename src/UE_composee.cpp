#include "UE_composee.h"

UE_composee::UE_composee():
    UE(),
    d_ECUE{}
{}

UE_composee::UE_composee(int code, std::string intitule, int ects, vector<ECUE*> ECUE):
    UE(code, intitule, ects),
    d_ECUE{ECUE}
{}

UE_composee::~UE_composee()
{

}

void UE_composee::afficher_UE()
{
    std::cout << "code UE : " << d_code << std::endl;
    std::cout << "intitule UE : " << d_intitule << std::endl;
    std::cout << "nombre d'ECTS : " << d_ECTS << std::endl;
    for(int i=0; i < d_ECUE.size(); i++)
        d_ECUE[i].afficher_ECUE;
}

void UE_composee::modifier_ECUEs(vector<ECUE*> ecues)
{
    d_ECUE.clear;
    for(int i=0; i < ecues.size(); i++)
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
