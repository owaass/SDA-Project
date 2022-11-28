#pragma once
#include <iostream>

using namespace std;
class boutique
{
	string product_category;

	boutique();
	boutique(string product_category);
	float calculate_GST();
};