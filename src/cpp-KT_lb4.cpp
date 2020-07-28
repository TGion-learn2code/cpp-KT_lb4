//============================================================================
// Name        : cpp-KT_lb4.cpp
// Author      : Tobias Gion
// Version     :
// Copyright   : 
// Description : Karriere Tutor Übungsblatt LB4 - Operatoren
//============================================================================

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

	cout << "//==============================================================================" << endl;
	cout << "// Aufgabe 1" << endl;
	cout << "//==============================================================================" << endl;

	// 1.1
	int x = 12, y = 15;

	// 1.2
	x = x * 23;

	// 1.3
	y = y / 5;

	// 1.4
	x = x + 10;

	// 1.5
	y--;	// Same as y = y - 1;	Difference to --y; ???

	// 1.6
	cout << "Rest der Division (Modulo %) von "
		 << x
		 << " / "
		 << y
		 << " = "
		 << x % y
		 << endl;

	// 1.7
	string t1 = "Hallo ";
	string t2 = "Welt!\n";

	// 1.8
	string t3 = t1 + t2;

	// 1.9
	cout << "Verknüpfung von t1 + t2 \n t1: "
		 << t1
		 << " \n t2: "
		 << t2
		 << " t3: "
		 << t3;


	cout << "//==============================================================================" << endl;
	cout << "// Aufgabe 2" << endl;
	cout << "//==============================================================================" << endl;

	// 2.1
	double a = 2.0;
	double b = 0.0;
	cout.precision(1);

	// 2.2
	a += 2.0;

	// 2.3
	a *= 3.0;

	// 2.4
	b++;

	// 2.5
	a--, a--;

	// 2.6
	cout << "double a = "
		 << fixed
		 << a
		 << "\n"
		 << "double b = "
		 << b
		 << endl;


	cout << "//==============================================================================" << endl;
	cout << "// Aufgabe 3" << endl;
	cout << "//==============================================================================" << endl;

	int k;
	int sum = 0;

	// 3.1a
	// rand() always delivers same random numbers
	// should be seeded (starting number to use for rand) with srand(number)
	cout << "rand() OHNE seed srand(number)"
		 << endl;

	for (k = 0; k <= 4; k++) {
		cout << "Zufallszahl #"
			 << k+1
			 << ": "
			 << rand()
			 << endl;
	}

	// 3.1b
	// calling srand(time) to seed rand() with random number
	cout << "\n"
		 << "rand() MIT seed srand(time(0))"
		 << endl;

	srand(time(0));
	for (k = 0; k <= 4; k++) {
		cout << "Zufallszahl #"
			 << k+1
			 << ": "
			 << rand()
			 << endl;
	}

	// 3.2
	cout << "\n"
		 << "rand() MIT seed srand(time(0))"
		 << endl;

	for (k = 0; k <= 10; k++) {

		// FALSE == 0 / TRUE != 0
		// k % 2 (modulo) return the rest of the division of k / 2
		// that means: if we want every number which can be divided by 2, modulo returns FALSE (0) for that number
		// because the division has no rest value
		// that means we have to use NOT (!) in the if clause
		if (!(k % 2)) cout << "Zufallszahl #"
						<< k
						<< ": "
						<< rand()
						<< endl;
	}

	// 3.3
	for (k = 0; k <= 100; k++) {
			if (!(k % 3)) sum = sum + k;
		}
	cout << endl
		 << "Die Summe aller Zahlen von 0 bis 100, falls durch 3 teilbar: "
		 << sum
		 << endl;


	// 3.4
	sum = 0;

	for (k = -100; k <= 100; k++) {
			if ((k*k < 256)) sum = sum + abs(k);
			// else cout << "too big: " << k << endl;
		}
	cout << endl
		 << "Die Summe aller absoluten Zahlen von -100 bis 100, Quadrat < 256: "
		 << sum;


	return 0;
}
