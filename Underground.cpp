#include "Underground.h"  // <- include header file
#include <iostream>
using namespace std;

// constructors
Underground::Underground()
	: m_ticket(false)
	, m_stationFrom("Unspecified")
	, m_stops(0)
	, m_stationTo("Unspecified")
	, m_line("Unspecified")
{

}
Underground::Underground(bool ticket, std::string stationFrom, int stops, std::string stationTo, std::string line)
	: m_ticket(ticket)
	, m_stationFrom(stationFrom)
	, m_stops(stops)
	, m_stationTo(stationTo)
	, m_line(line)

{

}

// destructor
Underground::~Underground()
{

}

// member functions
void Underground::CheckTicket(bool m_ticket)
{
	if (m_ticket == true)
	{
		cout << "You can travel." << endl;
	}
	else
	{
		cout << "Sorry, you need to purchase a ticket." << endl;
	}
}
void Underground::TubeCapacity()
{
	cout << "Seating: 280 max" << endl;
}
void Underground::AmountOfStops(int m_stops)
{
	cout << "Amount of stops: " << m_stops << endl;
}
void Underground::DisplayInfo(std::string m_stationFrom, std::string m_stationTo, std::string m_line)
{
	cout << "Travelling from: " << m_stationFrom << endl;
	cout << "Travelling to: " << m_stationTo << endl;
	cout << "Via " << m_line << " line" << endl;
}