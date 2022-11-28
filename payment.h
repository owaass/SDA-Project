#pragma once
#include <iostream>
#include "boutique.h"

using namespace std;

class payment //association
{
	string method;
	int* pay; 
	payment(string method, int* pay);
	payment();
	void make_payment();
	int calculate_total();
	void update_spending_brackets();
	~payment();
};