#pragma once
#include <iostream>
#include "boutique.h"




class customer //asocciation w login signup
{
	int id;
	string password;
	string name;
	string phone_number;
	string address;
	int spending_brackets;
	customer(int id, string password, string name, string phone_number, string address, int spending_brackets);
		customer();
		void AddToCart();
		void CheckOut();
		~customer();
};
