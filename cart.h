
#pragma once
#include <iostream>
#include "boutique.h"
#include"product.h"

class cart
{
	product prod;

	cart(product prod);
	cart();
	void add_to_cart();
};