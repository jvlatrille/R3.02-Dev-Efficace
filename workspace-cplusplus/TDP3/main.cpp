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
void listeSimple(); // But : Créer une liste et itérer dedans
// Q7 - liste de pair
void listePaires(); // But : Créer une liste de paires et itérer dedans
// Q11 - map
void leMap(); // But : Créer un map et itérer dedans

// BONUS
void leVector(); // But : Créer un vector et itérer dedans
void leDeque(); // But : Créer un deque et itérer dedans

int main()
{
    cout << "Appel liste simple." << endl;
    listeSimple();

    cout << endl
         << endl;

    cout << "Appel liste Paires." << endl;
    listePaires();

    cout << endl
         << endl;

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

    // Itérer et afficher chaque élément de la liste
    for (ListeS::iterator it = uneListeS.begin(); it != uneListeS.end(); ++it)
    {
        cout << *it << endl;
    }
}

void listePaires()
{
    cout << "Execution liste de paires :" << endl;
    // Créer la liste
    typedef pair<string, string> pairS;
    typedef list<pairS> ListeP;
    ListeP maListeP;

    // Remplir la liste avec des paires
    maListeP.push_back(make_pair("Pantxika", "06.01.01.01.01"));
    maListeP.push_back(make_pair("Yann", "06.02.02.02.02"));
    maListeP.push_back(make_pair("Philippe", "06.03.03.03.03"));
    maListeP.push_back(make_pair("Patrick", "06.04.04.04.04"));

    // Itérer et afficher chaque paire de la liste
    for (ListeP::iterator it = maListeP.begin(); it != maListeP.end(); ++it)
    {
        cout << it->first << " : " << it->second << endl;
    }
}

void leMap()
{
    cout << "Execution du map" << endl;
    // Créer le map
    typedef map<string, string> Annuaire;
    Annuaire unAnnuaire;

    // Insérer des paires dans le map
    unAnnuaire.insert(make_pair("Pantxika", "06.01.01.01.01"));
    unAnnuaire.insert(make_pair("Yann", "06.02.02.02.02"));
    unAnnuaire.insert(make_pair("Philippe", "06.03.03.03.03"));
    unAnnuaire.insert(make_pair("Patrick", "06.04.04.04.04"));

    // Parcourir le map et afficher chaque valeur
    for (Annuaire::iterator it = unAnnuaire.begin(); it != unAnnuaire.end(); ++it)
    {
        cout << it->first << " : " << it->second << endl;
    }

    // Rechercher "Philippe"
    Annuaire::iterator iterateurPhilippe = unAnnuaire.find("Philippe");
    if (iterateurPhilippe != unAnnuaire.end())
    {
        cout << "Element trouve : " << iterateurPhilippe->second << endl;
    }
    else
    {
        cout << "Element non trouve" << endl;
    }

    // Test insertion déjà existente
    string nom ="Patrick";
    string tel = "999999999999";
    auto resultat = unAnnuaire.insert(make_pair(nom, tel));

    if (resultat.second)
    {
        cout << "Nouvelle paire inseree : " << resultat.first->first << " : " << resultat.first->second << endl;
    }
    else
    {
        cout << "Impossible d'inserer la paire " << nom << " " << tel << " : " << resultat.first->second << ", car " << resultat.first->first << " existe deja avec le numero de telephone : " << resultat.first->second << endl;
    }
}

// BONUS
void leVector()
{
    cout << "Execution du vector :" << endl;
    // Créer le vector
    typedef vector<string> VectorS;
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
    typedef deque<string> DequeS;
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

/*
bool Produit::operator> (const Produit& unProduit) const {
    bool resultatat;
    resultatat = (this->prix > unProduit.prix);
    return resultatat;
};*/
