#pragma once
#include <iostream>
#include "boutique.h"
using namespace std;

class inventory_manager : public staff
{
	inventory_manager();
	void manage_inventory_globally();
	void allocate_inventory_to_outlets();
	void define_stock_reservation_policy();
	void change_stock_reservation_policy();
	~inventory_manager();
};