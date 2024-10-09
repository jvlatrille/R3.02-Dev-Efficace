#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <utility>
using namespace std;
#include <map>

// BONUS
#include <deque>
#include <vector>

// Sous-programmes
// Q2 -liste de string
void listeSimple(); // But : Créer une iste et itérer dedans
// Q7 - liste de pair
void listePaires(); // But : Créer une liste de paires et itérer dedans
// Q11 - map
void leMap(); // But : Créer un map et itérer dedans

// BONUS
void leVector(); // But : Créer un vector et itérer dedans
void leDeque(); // But : Créer un deque et itérer dedans

int main()
{
    /*
        cout << "Appel liste simple." << endl;
        listeSimple();

        cout << endl
             << endl;

        cout << "Appel liste Paires." << endl;
        listePaires();

        cout << endl
             << endl;
    */
    cout << "Appel map." << endl;
    leMap();

    cout << endl
         << endl;

    cout << "BONUS" << endl;
    cout << "Appel vector." << endl;
    leVector();

    cout << endl
         << endl;

    cout << "Appel deque." << endl;
    leDeque();

    return 0;
}

void listeSimple()
{
    cout << "Execution liste simple : " << endl;
    // Création de la liste
    typedef list<string> ListeS;
    ListeS uneListeS;

    // Remplir la liste
    uneListeS.push_back("Pantxika");
    uneListeS.push_back("Yann");
    uneListeS.push_back("Philippe");
    uneListeS.push_back("Patrick");

    // Créer un itérateur
    ListeS::iterator iterateurListeS;

    // Initialiser l'itérateur au début de la liste
    iterateurListeS = uneListeS.begin();

    // Affiche chaque élément de la liste
    while (iterateurListeS != uneListeS.end())
    {
        cout << *iterateurListeS << endl;
        iterateurListeS++;
    }
}

void listePaires()
{
    cout << "Execution liste de paires :" << endl;
    // Créer la liste
    typedef pair<string, string> pairS;
    typedef list<pairS> ListeP;
    ListeP maListeP;

    // Créer et remplir les paires
    pair<string, string> unePaire1("Pantxika", "06.01.01.01.01");
    pair<string, string> unePaire2("Yann", "06.02.02.02.02");
    pair<string, string> unePaire3("Philippe", "06.03.03.03.03");
    pair<string, string> unePaire4("Patrick", "06.04.04.04.04");

    // Remplir la liste
    maListeP.push_back(unePaire1);
    maListeP.push_back(unePaire2);
    maListeP.push_back(unePaire3);
    maListeP.push_back(unePaire4);

    // Créer un itérateur
    ListeP::iterator iterateurListeP;

    // Itérer
    iterateurListeP = maListeP.begin();
    while (iterateurListeP != maListeP.end())
    {
        cout << iterateurListeP->first << " : " << iterateurListeP->second << endl;
        iterateurListeP++;
    }
}

void leMap()
{
    cout << "Execution du map" << endl;
    // Créer le map
    typedef map<string, string> Annuaire;
    Annuaire unAnnuaire;

    // Insérer des paires dans le map
    Annuaire::value_type pantxika("Pantxika", "06.01.01.01.01");
    Annuaire::value_type pantxika2("Pantxika", "06.01.01.01.01");
    Annuaire::value_type yann("Yann", "06.02.02.02.02");
    Annuaire::value_type philippe("Philippe", "06.03.03.03.03");
    Annuaire::value_type patrick("Patrick", "06.04.04.04.04");

    // Insérer les paires dans le map et récupérer le résultat de l'insertion
    auto resultatInsert = unAnnuaire.insert(pantxika);
    if (resultatInsert.second)
    {
        cout << "Insertion BIEN realisee" << endl;
    }
    else
    {
        cout << "Insertion MAL realisee" << endl;
    }

/*  Renvoie juste une erreur
    auto resultatInsert = unAnnuaire.insert(pantxika2);
    if (resultatInsert.second)
    {
        cout << "Insertion BIEN realisee" << endl;
    }
    else
    {
        cout << "Insertion MAL realisee" << endl;
    }*/

    resultatInsert = unAnnuaire.insert(yann);
    if (resultatInsert.second)
    {
        cout << "Insertion BIEN realisee" << endl;
    }
    else
    {
        cout << "Insertion MAL realisee" << endl;
    }

    resultatInsert = unAnnuaire.insert(philippe);
    if (resultatInsert.second)
    {
        cout << "Insertion BIEN realisee" << endl;
    }
    else
    {
        cout << "Insertion MAL realisee" << endl;
    }

    resultatInsert = unAnnuaire.insert(patrick);
    if (resultatInsert.second)
    {
        cout << "Insertion BIEN realisee" << endl;
    }
    else
    {
        cout << "Insertion MAL realisee" << endl;
    }

    // Créer un itérateur pour accéder aux éléments de unAnnuaire
    Annuaire::iterator iterateurAnnuaire = unAnnuaire.begin();

    // Parcourir le map en utilisant l'itérateur
    for (; iterateurAnnuaire != unAnnuaire.end(); ++iterateurAnnuaire)
    {
        cout << iterateurAnnuaire->second << endl;
    }

    // Rechercher l'itérateur sur l'élément de unAnnuaire ayant "Philippe" comme clé
    Annuaire::iterator iterateurPhilippe = unAnnuaire.find("Philippe");

    // Vérifier si l'élément a été trouvé
    if (iterateurPhilippe != unAnnuaire.end()) {
        cout << "Element trouve : " << iterateurPhilippe->second << endl;
    } else {
        cout << "Element non trouve" << endl;
    }
}

// BONUS
void leVector()
{
    cout << "Execution du vector :" << endl;
    // Créer le vector
    typedef std::vector<string> VectorS;
    VectorS Annulaire;

    // Ajouter des éléments au vector
    Annulaire.push_back("Pantxika");
    Annulaire.push_back("Yann");
    Annulaire.push_back("Philippe");
    Annulaire.push_back("Patrick");

    // Parcourir le vector
    for (const auto& element : Annulaire)
    {
        cout << element << endl;
    }
}

void leDeque()
{
    cout << "Execution du deque :" << endl;
    // Créer le deque
    typedef std::deque<string> DequeS;
    DequeS Annulaire;

    // Ajouter des éléments au deque
    Annulaire.push_back("Pantxika");
    Annulaire.push_back("Yann");
    Annulaire.push_back("Philippe");
    Annulaire.push_back("Patrick");

    // Parcourir le deque
    for (const auto& element : Annulaire)
    {
        cout << element << endl;
    }
}