#include "UE_seule.h"

UE_seule::UE_seule():
    UE(),
    d_heure_TD{0},
    d_heure_TP{0},
    d_heure_CM{0}
{}

UE_seule::UE_seule(int code, std::string intitule, int ects, int heure_td, int heure_tp, int heure_cm):
    UE(code, intitule, ects),
    d_heure_TD{0},
    d_heure_TP{0},
    d_heure_CM{0}
{}

UE_seule::~UE_seule()
{

}

void UE_seule::afficher_UE()
{
    std::cout << "code UE : " << retourner_code() << std::endl;
    std::cout << "intitule UE : " << retourner_intitule() << std::endl;
    std::cout << "nombre d'ECTS : " << retourner_ects() << std::endl;
    std::cout << "nombre heures TD : " << d_heure_TD << std::endl;
    std::cout << "nombre heures TP : " << d_heure_TP << std::endl;
    std::cout << "nombre heures CM : " << d_heure_CM << std::endl;
}

void UE_seule::modifier_heure_td(int heure_td)
{
    d_heure_TD = heure_td;
}

void UE_seule::modifier_heure_tp(int heure_tp)
{
    d_heure_TP = heure_tp;
}

void UE_seule::modifier_heure_cm(int heure_cm)
{
    d_heure_CM = heure_cm;
}

int UE_seule::retourner_heure_td()
{
    return d_heure_TD;
}

int UE_seule::retourner_heure_tp()
{
    return d_heure_TP;
}

int UE_seule::retourner_heure_cm()
{
    return d_heure_CM;
}
