#ifndef UE_H
#define UE_H

class UE
{
public:
    UE();
    UE(int code,
       std::string intitule,
       int ects
    );
    ~UE();
    virtual void afficher_UE();
    void modifier_code(int code);
    void modifier_intitule(std::string intitule);
    void modifier_ects(int ects);

    int retourner_code();
    std::string retourner_intitule();
    int retourner_ects();

private:
    int d_code;
    std::string d_intitule;
    int d_ECTS;
};

#endif
