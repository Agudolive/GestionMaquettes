#ifndef FORMATION_H
#define FORMATION_H

#include "maquette.h"

class formation
{
public:
    formation();
    formation(maquette &maq);
    ~formation();
    void modifier_maquette(maquette &maq);
    void supprimer_maquette();

private:
    maquette d_maquette;
};

#endif
