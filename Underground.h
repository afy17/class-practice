#pragma once
#include <string>

class Underground	  
{
	// member variables
	bool m_ticket;				
	std::string m_stationFrom;
	int m_stops;
	std::string m_stationTo;
	std::string m_line;

public:
	// constructors
	Underground();
	Underground(bool ticket, std::string stationFrom, int stops, std::string stationTo, std::string line);

	// destructor
	~Underground();

	// member functions
	void CheckTicket(bool m_ticket);
	void TubeCapacity();
	void AmountOfStops(int m_stops);
	void DisplayInfo(std::string m_stationFrom, std::string m_stationTo, std::string m_line);
};