#include <iostream>
#include "boutique.h"
using namespace std;

class store_manager : public staff
{
	string bestselling_item;

	store_manager();
	void modify_rules();
	void run_monthly_reports();
	void run_annual_reports();
	void record_user_category();
	void performance();
	~store_manager();
};