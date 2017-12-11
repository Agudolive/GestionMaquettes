#ifndef MAQUETTE_H
#define MAQUETTE_H

class maquette
{
public:
    maquette();
    ~maquette();
    void ajouter_UE(UE& ue);
    void supprimer_UE();
    void vider_UE();

private:
    vector<UE*> d_UE;
    vector<bool> d_UE_choix;
};

#endif
