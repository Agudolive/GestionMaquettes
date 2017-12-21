#ifndef UE_H
#define UE_H

class UE
{
public:
    UE();
    ~UE();
    void afficher_UE()const=0;
    /*
    TOUS LES SETTERS GETTERS
    */

private:
    int d_code;
    string d_intitule;
    int d_ECTS;
};

#endif
