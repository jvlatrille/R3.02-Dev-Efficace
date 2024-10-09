#ifndef INDIVIDU_H
#define INDIVIDU_H

#include <iostream>

class Voiture;
class Individu
{
private:
    std::string nom;
    std::string prenom;
    Voiture* maVoiture;

public:
    Individu(const std::string& nom, const std::string& prenom);

    std::string getNom() const;
    void setNom(std::string& nom);

    std::string getPrenom() const;
    void setPrenom(std::string& prenom);

    Voiture* getMaVoiture() const;
    void setMaVoiture(Voiture* maVoiture);

    std::string toString();

    std::string toStringAndLink();

    void majVoiture(Voiture* maVoiture);

    void supprimerLien();

    void setMaVoiture(Voiture* maVoiture);
};

#endif // INDIVIDU_H