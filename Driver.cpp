
#include "boutique.h"
#include "customer.h"
#include "staff.h"
#include "online.h"
#include "cart.h"
#include "outlet.h"
#include "gold.h"
#include "silver.h"
#include "platinum.h"
#include "payment.h"
#include "discount_compaign.h"
#include "product.h"
#include "loyalty_card.h"
#include "login_signup.h"
#include "inventory_manager.h"
#include "floor_manager.h"
#include "store_manager.h"
#include "sales_agent.h"
#include<iostream>
#include <string>



using namespace std;


int main()
{
	char input;
	string username;
	string password;
	cout << "===============================================================================================\n";
	cout << "\t\t\t\tWELCOME TO S&J BOUTIQUE\n";
	cout << "===============================================================================================\n\n";
	cout << "Enter C if you are a customer or S if you are a staff member\n";
	cin >> input;
	cout << "Your Choice: " << input << endl << endl;
	//customer
	if (input == 'c' || input == 'C')
	{
		cout << "Please enter a number from the list corresponding to your preference\n";
		cout << "1 I am a new customer\n";
		cout << "2 I am a recurring customer\n";
		cout << "3 I would like to browse anonymously\n";
		cin >> input;
		cout << "Your entered preference  " << input << endl << endl;
		if (input == '1')
		{
			// customer c;
			cout << "=========== SIGNING UP ===========\n";
			cout << "Please sign up by creating a new username and password\n";
			cout << "Enter your prefered username: ";
			cin >> username;
			cout << "Enter your prefered password: ";
			cin.ignore(1000, '\n');
			cin >> password;

			//add username password
		}
		else if (input == '2')
		{
			//crate recurring customer obj
			cout << "=========== SIGNING IN ===========\n";
			cout << "Welcome back! Please sign in\n";
			cout << "Enter your username: ";
			cin >> username;
			cout << "Enter your password: ";
			cin.ignore(1000, '\n');
			cin >> password;
			//add username password
		}

		else if (input == '3')
		{
			//crate anon customer obj
		}

		else
		{
			cout << "Incorrect input\n";
			return 0;
		}

	}

	//staff
	else if (input == 's' || input == 'S')
	{
		cout << "Enter the number from the list corresponding to your designation\n";
		cout << "1 Store Admin\n";
		cout << "2 Inventory Manager\n";
		cout << "3 Floor Manager\n";
		cout << "4 Store Manager\n";
		cout << "5 Sales Agent\n";
		cin >> input;
		cout << "Your entered preference  " << input << endl << endl;
		if (input == '1')
		{
			//	store_admin sa;
		}

		else if (input == '2')
		{
			//inventory_manager im;
		}

		else if (input == '3')
		{
			//Floor_Manager fm


		}

		else if (input == '4')
		{
			//store_manager sm
		}

		else if (input == '5')
		{
			//sales_agent sa
		}

		else
		{
			cout << "Error. Incorrect selection\n";
			return 0;
		}

		cout << "Enter username: ";
		cin >> username;
		cout << "Enter password: ";
		cin.ignore(1000, '\n');
		cin >> password;


	}

	else
	{
		cout << "Error. Incorrect selection";
		return 0;
	}

	return 0;
}