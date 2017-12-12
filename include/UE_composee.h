#ifndef UE_composee_H
#define UE_composee_H

class UE_composee : public UE
public:
    UE_composee();
    ~UE_composee();
    void afficher_UE_composee()const override;
    /*
    TOUS LES SETTERS GETTERS
    */

private:
    vector<ECUE*> d_ECUE;
};

#endif
