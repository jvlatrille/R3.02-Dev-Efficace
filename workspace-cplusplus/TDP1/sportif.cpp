#include "sportif.h"
#include "outils.h"

Sportif::Sportif(string leNom, string LePrenom, int lAnneeNaissance)
{
    (*this).setNom(leNom);
    (*this)._prenom = LePrenom;
    this->setAnneeNaissance(lAnneeNaissance);
    // this->lAnneeNaissance = lAnneeNaissance;
}

Sportif::~Sportif()
{
    delete this;
}

int Sportif::getAge()
{
    return Outils::anneeActuelle() - _anneNaissance;
}

string Sportif::getNom() const
{
    return _nom;
}

string Sportif::getPrenom() const
{
    return _prenom;
}

int Sportif::getAnneeNaissance() const
{
    return _anneNaissance;
}

void Sportif::setNom(string nom)
{
    _nom = nom;
}

void Sportif::setPrenom(string prenom)
{
    _prenom = prenom;
}

void Sportif::setAnneeNaissance(int anneeNaissance)
{
    _anneNaissance = anneeNaissance;
}

string Sportif::toString()
{
    return "Nom: " + this->getNom() + " Prenom: " + this->_prenom + " Annee de naissance: " + std::to_string(this->getAnneeNaissance());
}
