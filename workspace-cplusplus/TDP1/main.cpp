#include "Sportif.h"
#include "SportifMenteur.h"
#include "outils.h"
#include <iostream>
using namespace std;

int main()
{
    void afficheAgeSportifParValeur(Sportif sportif);
    void afficheAgeSportifParReference(Sportif& sportif);
    void afficheAgeSportifParAdresse(Sportif* sportif);

    int anneeActuelle = Outils::anneeActuelle();
    cout << "Annee actuelle: " << anneeActuelle << endl;

    Sportif sportif1("sportif", "1", 2007);
    cout << "Sportif 1 - Date de naissance: " << sportif1.getAnneeNaissance() << ", Age declare: " << sportif1.getAge() << endl;

    SportifMenteur sportif2("sportif", "2", 2000, "tuteur1");
    cout << "Sportif 2 - Date de naissance: " << sportif2.getAnneeNaissance() << ", Age declare: " << sportif2.getAge() << endl;

    SportifMenteur sportif3("sportif", "3", 2010, "tuteur2");
    cout << "Sportif 3 - Date de naissance: " << sportif3.getAnneeNaissance() << ", Age declare: " << sportif3.getAge() << endl;
    
    afficheAgeSportifParValeur(sportif1);
    afficheAgeSportifParReference(sportif2);
    afficheAgeSportifParAdresse(&sportif3);
    return 0;
}

void afficheAgeSportifParValeur(Sportif sportif)
    {
        int anneeActuelle = Outils::anneeActuelle();
        cout << "Annee actuelle : " << anneeActuelle << endl;
        cout << "Date de naissance : " << sportif.getAnneeNaissance() << endl;
        cout << "Age declare : " << sportif.getAge() << endl;
    }

    void afficheAgeSportifParReference(Sportif& sportif)
    {
        int anneeActuelle = Outils::anneeActuelle();
        cout << "Annee actuelle : " << anneeActuelle << endl;
        cout << "Date de naissance : " << sportif.getAnneeNaissance() << endl;
        cout << "Age declare : " << sportif.getAge() << endl;
    }

    void afficheAgeSportifParAdresse(Sportif* sportif)
    {
        int anneeActuelle = Outils::anneeActuelle();
        cout << "Annee actuelle : " << anneeActuelle << endl;
        cout << "Date de naissance : " << sportif->getAnneeNaissance() << endl;
        cout << "Age declare : " << sportif->getAge() << endl;
    }