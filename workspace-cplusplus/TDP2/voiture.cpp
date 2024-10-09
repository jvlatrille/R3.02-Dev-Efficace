#include "voiture.h"

Voiture::Voiture()
    : marque("")
    , plaque("")
{
}

Voiture::Voiture(const std::string& marque, const std::string& plaque)
    : marque(marque)
    , plaque(plaque)
{
}

std::string Voiture::getMarque() const
{
    return marque;
}

void Voiture::setMarque(std::string& marque)
{
    this->marque = marque;
}

std::string Voiture::getPlaque() const
{
    return plaque;
}

void Voiture::setPlaque(std::string plaque)
{
    this->plaque = plaque;
}

Individu* Voiture::getMonPilote() const
{
    return monPilote;
}

void Voiture::setMonPilote(Individu* monPilote)
{
    this->monPilote = monPilote;
}

std::string Voiture::toString()
{
    return "Voiture " + getMarque() + " immatriculee " + getPlaque();
}

#include "individu.h"

std::string Voiture::toStringAndLink()
{
    if (monPilote != nullptr)
    {
        return monPilote->toString();
    }
    return "Cet individu n'a pas de voiture";
}

void Voiture::majPilote(Individu* monPilote)
{
    this->monPilote = monPilote;
}

void Voiture::supprimerLien()
{
    delete monPilote;
}

void Voiture::setMonPilote(Individu* monPilote)
{
    this->majPilote(monPilote);
    monPilote->majVoiture(this);
}