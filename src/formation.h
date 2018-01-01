#ifndef FORMATION_H
#define FORMATION_H

class formation
{
public:
    formation();
    formation(maquette &maq);
    ~formation();
    void modifier_formation(maquette &maq);
    void ajouter_maquette(maquette &maq);
    void supprimer_maquette();

private:
    maquette d_maquette;
};

#endif
