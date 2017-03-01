//****************************************************
// Chapter 10 Assignment
// Weight On Different Planets
// Christopher M. Anderson
// CIS 1610 12.01.2007
//****************************************************

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// Declare Planets
enum	Planet{MERCURY, VENUS, EARTH, MOON, MARS, JUPITER, SATURN, URANUS, NEPTUNE, PLUTO};

// Declare Functions
void	getWeight(float &);

// Declare Variables
float	calcWeight(Planet,float);
string	getPlanet(Planet &);

int main()
{
	// Declare Variables
	Planet	planet;
	float	weight;
	string	planetDesc;
	float	convertedWeight;
	char	option;

	// Call Weight Function
	getWeight(weight);
	
	// Call Planet Function
	option = 'Y';
	do {
		planetDesc = getPlanet(planet);
		convertedWeight = calcWeight(planet, weight);
		cout << "Would You Like To Try Another Planet? (Y or N): ";
		cin >> option;
		option = toupper(option);
	}
	while (option == 'Y');

	cin.get();
	cin.get();
	return 0;
}

// Request Weight Function
void getWeight(float & weight)
{	
	cout << "Please Enter A Weight In Pounds: ";
	cin >> weight;

	return;
}

// Request Planet Function
string getPlanet (Planet& planet)
{
	// Declare Variables
	string planetName;
	int ipos,len;
	bool inputOk;
	inputOk = true;

	do {

		cout << endl << "Please Enter The Name Of A Planet: ";
		cin >> planetName; 
		
		// Convert Planet Name To Uppercase
		len = planetName.length();
	
		// Convert Planet Name To Uppercase
		for (ipos = 0; ipos <= len-1 ; ipos++)
			planetName[ipos] = toupper (planetName[ipos]);

		// Determine Planet Name From List
		if (planetName == "MERCURY")
		{
			planet = MERCURY;
			inputOk = true;
		}
		else if(planetName == "VENUS")
		{
			planet = VENUS;
			inputOk = true;
		}
		else if(planetName == "EARTH")
		{
			planet = EARTH;
			inputOk = true;
		}
		else if (planetName == "MOON")
		{
			planet = MOON;
			inputOk = true;
		}
		else if (planetName == "MARS")
		{
			planet = MARS;
			inputOk = true;
		}
		else if(planetName == "JUPITER")
		{
			planet = JUPITER;
			inputOk = true;
		}
		else if(planetName == "SATURN")
		{
			planet = SATURN;
			inputOk = true;
		}
		else if(planetName == "URANUS")
		{
			planet = URANUS;
			inputOk = true;
		}
		else if(planetName == "NEPTUNE" )
		{
			planet = NEPTUNE;
			inputOk = true;
		}
		else if(planetName == "PLUTO")
		{
			planet = PLUTO;
			inputOk = true;
		}
		else
		{
			cout <<"Invalid planet name. Please try again." << endl;
			inputOk = false;
		}
	}
		while (!inputOk);
		return planetName;
	}

// Calculate Planet Weight
float calcWeight (Planet planet, float weight)
{
	float newWeight;

	cout << endl << "Response:" << endl << "============================================================" << endl;
	switch (planet)
	{
		case MERCURY:
			newWeight = weight * 0.4155;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on Mercury." << endl;
			break;
		case VENUS:
			newWeight = weight * 0.8975;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on Venus." << endl;
			break;
		case EARTH :
			newWeight = weight * 1.0;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on Earth." << endl;
			break;
		case MOON :
			newWeight = weight * 0.166;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on the Moon." << endl;
			break;
		case MARS:
			newWeight = weight * 0.3507;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on Mars." << endl;
			break;
		case JUPITER:
			newWeight = weight * 2.5374;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on Jupiter." << endl;
			break;
		case SATURN :
			newWeight = weight * 1.0677;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on Saturn." << endl;
			break;
		case URANUS :
			newWeight = weight * 0.8947;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on Uranus." << endl;
			break;
		case NEPTUNE:
			newWeight = weight * 1.1794;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on Neptune." << endl;
			break;
		case PLUTO:
			newWeight = weight * 0.0899;
			cout << weight << " pounds on Earth is equal to " << newWeight << " pounds on Pluto." << endl;
			break;
	}

	cout << "============================================================" << endl << endl;
		
	return newWeight ;
}