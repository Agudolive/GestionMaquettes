#include "ECUE.h"
#include <iostream>

ECUE::ECUE():
    d_code{0},
    d_intitule{""},
    d_heure_TD{0},
    d_heure_TP{0},
    d_heure_CM{0}
{}

ECUE::ECUE(int code, std::string intitule, int heure_td, int heure_tp, int heure_cm):
    d_code{code},
    d_intitule{intitule},
    d_heure_TD{heure_td},
    d_heure_TP{heure_tp},
    d_heure_CM{heure_cm}
{}

ECUE::~ECUE()
{

}

void ECUE::afficher_ECUE()
{
    std::cout << "code ECUE : " << d_code << std::endl;
    std::cout << "intitule ECUE : " << d_intitule << std::endl;
    std::cout << "nombre heures TD : " << d_heure_TD << std::endl;
    std::cout << "nombre heures TP : " << d_heure_TP << std::endl;
    std::cout << "nombre heures CM : " << d_heure_CM << std::endl;
}

void ECUE::modifier_code(int code)
{
    d_code = code;
}

void ECUE::modifier_intitule(std::string intitule)
{
    d_intitule = intitule;
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

int ECUE::retourner_code()
{
    return d_code;
}

std::string ECUE::retourner_intitule()
{
    return d_intitule;
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
