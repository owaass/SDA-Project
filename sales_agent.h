#pragma once
#include <iostream>
#include "boutique.h"
using namespace std;

class sales_agent : public staff
{ 
	//association w floor manager
	//association w store manager
	bool check_in;
	bool check_out;

	sales_agent();
	void scan_finger();
};