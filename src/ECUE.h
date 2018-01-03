#ifndef ECUE_H
#define ECUE_H
#include <string>

class ECUE
{
public:
    ECUE();
    ECUE(int code,
         std::string intitule,
         int heure_td,
         int heure_tp,
         int heure_cm
    );
    ~ECUE();
    void afficher_ECUE();

    void modifier_code(int code);
    void modifier_intitule(std::string intitule);
    void modifier_heure_td(int heure_td);
    void modifier_heure_tp(int heure_tp);
    void modifier_heure_cm(int heure_cm);

    int retourner_code();
    std::string retourner_intitule();
    int retourner_heure_td();
    int retourner_heure_tp();
    int retourner_heure_cm();

private:
    int d_code;
    std::string d_intitule;
    int d_heure_TD,
        d_heure_TP,
        d_heure_CM;
};

#endif
