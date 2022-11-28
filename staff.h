#pragma once
#include <iostream>
#include "boutique.h"

using namespace std;

class staff //association w login signup 
{
	int id;
	string name;
	string phone_number;
	staff(int id, string name, string phone_number);
	staff();
};