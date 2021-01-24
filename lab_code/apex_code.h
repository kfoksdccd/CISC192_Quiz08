//
// Don't modify code in this file.
//
#ifndef APEXLAB_APEX_CODE_H
#define APEXLAB_APEX_CODE_H
#include <iostream>
#include <vector>

using namespace std;

class ZodiacSign
{
public:
	enum Months
	{
		INVALID_MONTH,
		JANUARY,
		FEBRUARY,
		MARCH,
		APRIL,
		MAY,
		JUNE,
		JULY,
		AUGUST,
		SEPTEMBER,
		OCTOBER,
		NOVEMBER,
		DECEMBER,
		NUM_MONTHS
	};

	string Months_Strings[NUM_MONTHS] = {"INVALID", "January", "February", 
		"March", "April", "May", "June", "July", "August", "September",
	       	"October", "November", "December"};

	enum Elements
	{
		INVALID_ELEMENT,
		FIRE,
		WATER,
		EARTH,
		AIR,
		NUM_ELEMENTS
	};

	string Elements_Strings[NUM_ELEMENTS] = {"INVALID", "FIRE", "WATER",
	       	"EARTH", "AIR"};

	//
	// Add constructor
	//

	//
	// Add getters
	//

	void Print();
private:
	ZodiacSign();

	string Name;
	Months Month;
	Elements Element;
	string Description;
};

//
// Add Zodiac declartion
//

#endif //APEXLAB_APEX_CODE_H
