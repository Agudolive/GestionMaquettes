#ifndef UE_composee_H
#define UE_composee_H

class UE_composee : public UE
{
public:
    UE_composee();
    UE_composee(int code,
                std::string intitule,
                int ects,
                vector<ECUE*> ECUE
    );
    ~UE_composee();
    void afficher_UE() override;
    void modifier_ECUEs(vector<ECUE*> ecues);
    void ajouter_ECUE(ECUE* ecue);
    void supprimer_dernier_ECUE();

private:
    vector<ECUE*> d_ECUE;
};

#endif
