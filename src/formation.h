#ifndef FORMATION_H
#define FORMATION_H

class formation
{
public:
    formation(maquette &maq);
    ~formation();
    void modifier_formation(maquette &maq);
    /*
    TOUS LES SETTERS GETTERS
    */

private:
    maquette d_maquette;
};

#endif
