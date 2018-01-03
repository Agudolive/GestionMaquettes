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

UE_seule::void afficher_UE()
{
    std::cout << "code UE : " << d_code << std::endl;
    std::cout << "intitule UE : " << d_intitule << std::endl;
    std::cout << "nombre d'ECTS : " << d_ECTS << std::endl;
    std::cout << "nombre heures TD : " << d_heure_TD << std::endl;
    std::cout << "nombre heures TP : " << d_heure_TP << std::endl;
    std::cout << "nombre heures CM : " << d_heure_CM << std::endl;
}

void ECUE::modifier_heure_td(int heure_td)
{
    d_heure_TD = heure_td;
}

void ECUE::modifier_heure_tp(int heure_tp)
{
    d_heure_TP = heure_tp;
}

void ECUE::modifier_heure_cm(int heure_cm)
{
    d_heure_CM = heure_cm;
}

int ECUE::retourner_heure_td()
{
    return d_heure_TD;
}

int ECUE::retourner_heure_tp()
{
    return d_heure_TP;
}

int ECUE::retourner_heure_cm()
{
    return d_heure_CM;
}
