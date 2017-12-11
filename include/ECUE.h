#ifndef ECUE_H
#define ECUE_H

class ECUE : public UE_composee
{
public:
    ECUE();
    ~ECUE();
    void afficher;

private:
    int d_code;
    string d_intitule;
    int d_TP;
    int d_TD;
};

#endif
