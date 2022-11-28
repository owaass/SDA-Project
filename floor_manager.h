#include <iostream>
#include "boutique.h"
using namespace std;

class floor_manager : public staff
{
	floor_manager();
	void track_attendance();
	void run_sales_reports();
	void process_item_return();
	void define_work_shift();
	void change_work_shift();
	~floor_manager();
};