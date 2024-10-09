#ifndef VOITURE_H
#define VOITURE_H

#include <iostream>

class Individu;
class Voiture
{
private:
    std::string marque;
    std::string plaque;
    Individu* monPilote;

public:
    Voiture();

    Voiture(const std::string& marque, const std::string& plaque);

    std::string getMarque() const;
    void setMarque(std::string& marque);

    std::string getPlaque() const;
    void setPlaque(std::string plaque);

    Individu* getMonPilote() const;
    void setMonPilote(Individu* monPilote);

    std::string toString();

    std::string toStringAndLink();

    void majPilote(Individu* monPilote);

    void supprimerLien();

    void setMonPilote(Individu* monPilote);
};

#endif // VOITURE_H
