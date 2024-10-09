#ifndef SPORTIFMENTEUR_H
#define SPORTIFMENTEUR_H
#include "outils.h"
#include "sportif.h"
#include <iostream>
using namespace std;

class SportifMenteur : public Sportif
{
private:
    string _tuteur; // Use the fully qualified name for string

public:
    SportifMenteur(string, string, int, string); // Use the fully qualified name for string
    ~SportifMenteur();

    // ENCAPSULATION
    string getTuteur() const; // Use the fully qualified name for string
    void setTuteur(string); // Use the fully qualified name for string

    // METHODES USUELLES
    string toString(); // Use the fully qualified name for string

    // METHODES SPECIFIQUES
    int getAge();
};

#endif