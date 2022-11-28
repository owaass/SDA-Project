#pragma once
#include <iostream>
#include "boutique.h"

using namespace std;




class outlet : public boutique //inhertance 
{
	string location;
	string status;
	int reviews;
	outlet(string location, string status, int reviews);
	outlet();
	~outlet();
};