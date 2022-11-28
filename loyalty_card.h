#pragma once
#include <iostream>
#include "boutique.h"
#include"customer.h"


class loyalty_card //association w customer
{
	int id;
	string expiry_date;
	int points;
	loyalty_card(int id, string expiry_date, int points);
	loyalty_card();
	int calculate_points();
};
