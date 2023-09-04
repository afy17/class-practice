#include <iostream>
#include "Underground.h"
using namespace std;

int main()
{
	// tube object from pointer Underground class + assign new class
	Underground* tube1 = new Underground();
	Underground* tube2 = new Underground();
	Underground* tube3 = new Underground();

	// member functions
	tube1->CheckTicket(true);
	tube1->TubeCapacity();
	tube1->DisplayInfo("Bond Street", "Westminster", "Jubilee");
	tube1->AmountOfStops(1);

	cout << endl;
	tube2->CheckTicket(false);

	cout << endl;
	tube3->CheckTicket(true);
	tube3->TubeCapacity();
	tube3->DisplayInfo("Paddington", "Piccadilly Circus", "Bakerloo");
	tube3->AmountOfStops(6);

	// delete pointers
	delete tube1;
	tube1 = nullptr;

	delete tube2;
	tube2 = nullptr;

	delete tube3;
	tube3 = nullptr;

	system("pause>0");
}

