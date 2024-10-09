#include "individu.h"
#include "voiture.h"
#include <iostream>
using namespace std;

int main()
{
    Voiture voit1("RenaultClio", "123AB64");
    Voiture voit2("Peugeot106", "678CD96");
    Voiture voit3("CitroenPicasso", "456EF75");

    Individu ind1("Dupont", "Pierre");
    Individu ind2("Martin", "Louis");
    Individu ind3("Durant", "Marcel");

    cout << voit1.toString() << endl;
    cout << ind1.toString() << endl;
    cout << voit2.toString() << endl;
    cout << ind2.toString() << endl;
    cout << voit3.toString() << endl;
    cout << ind3.toString() << endl;

    voit3.setMonPilote(&ind3);
    ind3.setMaVoiture(&voit3);

    cout << endl
         << ind3.getMaVoiture()->getPlaque() << endl;

    voit3.setPlaque("77777NO22");
    cout << endl
         << ind3.getMaVoiture()->getPlaque() << endl;

    cout << "Voiture 3 (link) :" << endl;
    cout << voit3.toStringAndLink() << endl;
    cout << ind3.toStringAndLink() << endl;

    cout << "Voiture 2 (pas link) : " << endl;
    cout << voit2.toStringAndLink() << endl;
    cout << ind2.toStringAndLink() << endl;

    cout << "Voiture 2 (link mtn) : " << endl;
    voit2.setMonPilote(&ind2);
    cout << voit2.toStringAndLink() << endl;

    return 0;
}