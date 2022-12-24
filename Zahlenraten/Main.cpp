#include <iostream>
#include <random>

using namespace std;

int main() {

	cout << "In welchem Zahlenbereich moechtest du raten? ";

	int bereich, versuche, counter, range, num, tipp;

	cin >> bereich;

	while (bereich < 1) {
		cout << "Dein Zahlenbereich muss groesser sein als 0! Bitte versuche es nochmal: ";
		cin >> bereich;
		continue;
	}

	cout << "Bitte gebe die Anzahl an Versuchen an, die du benoetigst um die Zahl zu erraten: ";

	cin >> versuche;

	while (versuche < 1) {
		cout << "Die Anzahl an Versuchen muss groesser sein als 0! Bitte versuche es nochmal: ";
		cin >> versuche;
		continue;
	}

	counter = 1;

	range = (bereich - 1) + 1;

	num = rand() % range + 1;

	while (counter <= versuche) {

		cout << "Versuch Nummer "<<counter << endl;
		cout << "Bitte gebe deinen Tipp ab: "<< endl;

		cin >> tipp;

		if (tipp < 0 || tipp > bereich) {
			cout << endl;
			cout << "Du musst eine Zahl eingeben, die innerhalb von 0 und " << bereich << " liegt!" << endl;
			cout << endl;
			continue;
		}

		if (tipp == num) {
			cout << endl;
			cout << "Herzlichen Glueckwunsch du hast die richtige Zahl erraten! Die Zahl war " << num << endl;
			cout << endl;
			return 0;
		}
		cout << endl;
		if (tipp < num) {
			cout << "Die gesuchte Zahl ist groesser als " << tipp << "!" << endl;
		}
		else {
			cout << "Die gesuchte Zahl ist kleiner als " << tipp << "!" << endl;
		}
		
		counter++;
	}
	cout << "Du hast verloren! Die gesuchte Zahl war " << num << "!" << endl;
	return 0;

}
