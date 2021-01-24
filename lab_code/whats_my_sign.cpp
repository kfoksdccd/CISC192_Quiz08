//
//
#include "apex_code.h"

int main(int argc, char** argv)
{
	int myMonth;
	if(argc == 2)
	{
		myMonth = stoi(argv[1]);
	}
	else
	{
		cout << "Please provide the month of your birth in number format." << endl;
		return -1;
	}

	Zodiac zodiac;
	zodiac.Populate();

	ZodiacSign mySign = zodiac.GetMySign(static_cast<ZodiacSign::Months>(myMonth));

	mySign.Print();

	return 0;
}
