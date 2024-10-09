#ifndef SPORTIF_H
#define SPORTIF_H
#include "outils.h"
#include <string>
using namespace std;

class Sportif
{
private:
    string _nom;
    string _prenom;
    int _anneNaissance;

public:
    // CONSTRUCTEUR - DESTRUCTEUR
    Sportif(string, string, int);
    virtual ~Sportif();

    // ENCAPSUATION
    string getNom() const;
    string getPrenom() const;
    int getAnneeNaissance() const;
    void setNom(string);
    void setPrenom(string);
    void setAnneeNaissance(int);

    // METHODES USUELLES
    string toString();

    // METHODES SPECIFIQUES
    virtual int getAge();
};

#endif