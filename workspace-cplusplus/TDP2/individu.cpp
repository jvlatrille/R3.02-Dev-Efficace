#include "individu.h"

Individu::Individu(const std::string& nom, const std::string& prenom)
    : nom(nom)
    , prenom(prenom)
{
}

std::string Individu::getNom() const
{
    return nom;
}

void Individu::setNom(std::string& nom)
{
    this->nom = nom;
}

std::string Individu::getPrenom() const
{
    return prenom;
}

void Individu::setPrenom(std::string& prenom)
{
    this->prenom = prenom;
}

Voiture* Individu::getMaVoiture() const
{
    return maVoiture;
}

void Individu::setMaVoiture(Voiture* maVoiture)
{
    this->maVoiture = maVoiture;
}

std::string Individu::toString()
{
    return "Prenom : " + prenom + " nom : " + nom;
}

#include "voiture.h"

std::string Individu::toStringAndLink()
{
    if (maVoiture != nullptr)
    {
        return maVoiture->toString(); //monPilote->getMarque() + " " + monPilote->getPlaque();
    }
    else
    {
        return "Cet individu n'a pas de voiture";
    }
}

void Individu::majVoiture(Voiture* maVoiture)
{
    this->maVoiture = maVoiture;
}

void Individu::supprimerLien()
{
    delete maVoiture;
}

void Individu::setMaVoiture(Voiture* maVoiture)
{
    this->majVoiture(maVoiture);
    maVoiture->majPilote(this);
}