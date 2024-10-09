#include "SportifMenteur.h"

SportifMenteur::SportifMenteur(string leNom, string lePrenom, int lAnneeNaissance, string leTuteur) : Sportif(leNom, lePrenom, lAnneeNaissance)
{
    setTuteur(leTuteur);
}

SportifMenteur::~SportifMenteur()
{
    // No need to delete 'this' pointer
}

string SportifMenteur::toString()
{
    return "Nom: " + getNom() + " Prenom: " + getPrenom() + " Annee de naissance: " + to_string(getAnneeNaissance()) + " Tuteur: " + getTuteur();
}

int SportifMenteur::getAge()
{
    int age = Outils::anneeActuelle() - getAnneeNaissance();
    if (age < 18) {
        return 18;
    }
    return age;
}

string SportifMenteur::getTuteur() const
{
    return _tuteur;
}

void SportifMenteur::setTuteur(string tuteur)
{
    _tuteur = tuteur;
}