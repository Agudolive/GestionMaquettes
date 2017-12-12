#ifndef UE_SEULE_H
#define UE_SEULE_H

class UE_seule
{
public:
    UE_seule();
    ~UE_seule();
    void afficher_UE_seule()const override;
    /*
    TOUS LES SETTERS GETTERS
    */

private:
    int d_TD;
    int d_TP;
};

#endif
