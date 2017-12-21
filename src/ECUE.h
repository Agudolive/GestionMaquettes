#ifndef ECUE_H
#define ECUE_H

#include <iostream>
#include <string>

class ECUE
{
public:
    /**
     * Construit une ECUE à l'aide de son code, ainsi
     * que de son intitulé.
     *
     * \params code Le code de l'ECUE
     * \params intitule Le nom de l'ECUE.
     */
    ECUE(int code, const std::string& intitule);

    ///Destructeur par défaut.
    ~ECUE();

    /**
     * Affiche une ECUE sur la sortie standard.
     *
     * \params ost Une sortie standard sur laquelle afficher l'ECUE.
     */
    void afficher(std::ostream& ost);

    /**
     * Retourne le code de l'ECUE.
     *
     * \returns le code de l'ECUE.
     */
    int code() const;

    /**
     * Retourne le nom de l'ECUE.
     *
     * \returns le nom de l'ECUE.
     */
    std::string intitule() const;
    
    /**
     * Retourne le nombre d'heure de cours magistraux.
     *
     * \returns le nombre d'heure de cours magistraux.
     */  
    int heures_CM() const;
   
    /**
     * Retourne le nombre d'heure de travaux dirigés.
     *
     * \returns le nombre d'heure de travaux dirigés.
     */
    int heures_TD() const;
    
    /**
     * Retourne le nombre d'heure de travaux pratiques.
     *
     * \returns le nombre d'heure de travaux pratiques.
     */
    int heures_TP() const;

    /**
     * Modifie le nombre d'heures de l'ECUE.
     *
     * \params heures_CM Le nombre d'heures de cours magistraux
     * \params heures_TD Le nombre d'heures de travaux dirigés
     * \params heures_TP Le nombre d'heures de travaux pratiques.
     */
    void modifier_heures(int heures_CM, int heures_TD, int heures_TP); 

    /**
     * Modifie le nombre d'heures de cours magistraux de l'ECUE.
     *
     * \params heures Le nombre d'heures à appliquer.
     */
    void modifier_heures_CM(int heures);

    /**
     * Modifie le nombre d'heures de travaux dirigés de l'ECUE.
     *
     * \params heures Le nombre d'heures à appliquer.
     */
    void modifier_heures_TD(int heures);

    /**
     * Modifie le nombre d'heures de travaux pratiques de l'ECUE.
     *
     * \params heures le nombre d'heures à appliquer.
     */
    void modifier_heures_TP(int heures);
private:
    int d_code;
    std::string d_intitule;
    
    int d_heures_CM;
    int d_heures_TD;
    int d_heures_TP;
};

#endif
