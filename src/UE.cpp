#include "UE.h"

UE::UE():
    d_code{0},
    d_intitule{""},
    d_ECTS{0}
{}

UE::UE(int code, std::string intitule, int ects):
    d_code{code},
    d_intitule{intitule},
    d_ECTS{ects}
{}

UE::~UE()
{

}

void UE::modifier_code(int code)
{
    d_code = code;
}

void UE::modifier_intitule(std::string intitule)
{
    d_intitule = intitule;
}

void UE::modifier_ects(int ects)
{
    d_ECTS = ects;
}

int UE::retourner_code()
{
    return d_code;
}

std::string UE::retourner_intitule()
{
    return d_intitule;
}

int UE::retourner_ects()
{
    return d_ECTS;
}






