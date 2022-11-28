#pragma once
#include <iostream>
#include<staff.h>
#include<customer.h>
#include "boutique.h"
using namespace std;

class login_signup
{
	staff staff;
	customer customer;
	login_signup(staff staff, customer customer);
	login_signup();
	void login();
	void signup();
};

s