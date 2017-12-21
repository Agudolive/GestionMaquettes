#include "ECUE.h"

ECUE::ECUE(int code, const std::string& intitule) :
    d_code{ code },
    d_intitule{ intitule }
{}

ECUE::~ECUE()
{}

void ECUE::afficher(std::ostream& ost)
{}

int ECUE::code() const
{ return d_code; }

std::string ECUE::intitule() const
{ return d_intitule; }

int ECUE::heures_CM() const
{ return d_heures_CM; }

int ECUE::heures_TD() const
{ return d_heures_TD; }

int ECUE::heures_TP() const
{ return d_heures_TP; }

void ECUE::modifier_heures(int heures_CM, int heures_TD, int heures_TP)
{
    d_heures_CM = heures_CM;
    d_heures_TD = heures_TD;
    d_heures_TP = heures_TP;
}

void ECUE::modifier_heures_CM(int heures)
{ modifier_heures(heures, d_heures_TD, d_heures_TP); }

void ECUE::modifier_heures_TD(int heures)
{ modifier_heures(d_heures_CM, heures, d_heures_TP); }

void ECUE::modifier_heures_TP(int heures)
{ modifier_heures(d_heures_CM, d_heures_TD, heures); }
