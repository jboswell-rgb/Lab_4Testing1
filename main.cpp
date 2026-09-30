#include <iostream>
#include <string>
#include <iomanip>

int main()

{
	//variables
	int quantity = 0;
	char food_name = ' ';
	char item_size = ' ';
	int price = 0;
	char member = ' ';
	double subtotal = 0;
	std::string full_name = " ";
	std::string full_item_size = " ";
	//menu
	std::cout << std::setfill(' ') << std::setw(20) << "Drink" << std::setw(15) << "Small (S)" << std::setw(15) << "Medium (M)" << std::setw(15) << "Large (L)" << std::endl;
	std::cout << std::setfill(' ') << std::setw(20) << "a. Hot Chocolate" << std::setw(15) << "$1.50" << std::setw(15) << "$2.50" << std::setw(15) << "$3.50" << std::endl;
	std::cout << std::setfill(' ') << std::setw(20) << "b. Coffee" << std::setw(15) << "$2.00" << std::setw(15) << "$4.00" << std::setw(15) << "$6.00" << std::endl;
	std::cout << std::setfill(' ') << std::setw(20) << "c. Crossaint" << std::setw(15) << "$1.00" << std::setw(15) << "$2.00" << std::setw(15) << "$3.00" << std::endl;
	std::cout << std::setfill(' ') << std::setw(20) << "d. Cinnamon Rolls" << std::setw(15) << "$3.00" << std::setw(15) << "$4.00" << std::setw(15) << "$5.00" << std::endl;
	std::cout << "\n\nEnter the letter next to the menu item you want: ";
	//which one
	std::cin >> food_name;
	std::cout << "\nEnter the size of the menu item(s, m, or l): ";
	std::cin >> item_size;
	//Specific item
	switch (food_name) {
	case 'a': full_name = "Hot Chocolate";
		if (item_size == 's') {
			full_item_size = "small";
			price = 1.50;
		}
		else if (item_size == 'm') {
			full_item_size = "medium";
			price = 2.50;
		}
		else if (item_size == 'l') {
			full_item_size = "large";
			price = 3.50;
		}
		else
			std::cout << "You did not follow the instructions!";
		break;
	case 'b': full_name = "Coffee";
		if (item_size == 's') {
			full_item_size = "small";
			price = 2.00;
		}
		else if (item_size == 'm') {
			full_item_size = "medium";
			price = 4.00;
		}
		else if (item_size == 'l') {
			full_item_size = "large";
			price = 6.00;
		}
		else
			std::cout << "You did not follow the instructions!";
		break;
	case 'c': full_name = "Croissant";
		if (item_size == 's') {
			full_item_size = "small";
			price = 1.00;
		}
		else if (item_size == 'm') {
			full_item_size = "medium";
			price = 2.00;
		}
		else if (item_size == 'l') {
			full_item_size = "large";
			price = 3.00;
		}
		else
			std::cout << "You did not follow the instructions!";
		break;
	case 'd': full_name = "Cinnamon Rolls";
		if (item_size == 's') {
			full_item_size = "small";
			price = 3.00;
		}
		else if (item_size == 'm') {
			full_item_size = "medium";
			price = 4.00;
		}
		else if (item_size == 'l') {
			full_item_size = "large";
			price = 5.00;
		}
		else
			std::cout << "You did not follow the instructions!";
		break;
	default: std::cout << "You didn't follow the instructions!";
	}

	//asks for quantity
	std::cout << "\nHow many would you like?: ";
	std::cin >> quantity;

	//asks if they are a member
	std::cout << "Are you a registered member? (y/n)\n";
	std::cin >> member;

	subtotal = quantity * price;
	//displays what they said
	std::cout << "\nYou entered:\n";
	std::cout << std::setfill(' ') << std::setw(20) << quantity << " " << full_name << std::setw(15) << full_item_size << std::setw(15) << "$" << price << "\nSubtotal: $" << subtotal;

	std::cout << std::setfill(' ') << std::setw(1) << "\nSales Taxes" << std::endl;
	std::cout << std::setfill(' ') << std::setw(20) << "Arkansas State Tax: 6.5%" << std::endl;
	std::cout << std::setfill(' ') << std::setw(20) << "Faulkner County Tax: 0.5%" << std::endl;
	std::cout << std::setfill(' ') << std::setw(20) << "Conway Municipal Tax: 2.125%" << std::endl;

	double salesTax = 0.065 + 0.005 + 0.02125;
	std::cout << std::setfill(' ') << std::setw(20) << "Tax Total: " << "$" << salesTax << std::endl;

	char choice;

	std::cout << std::setfill(' ') << std::setw(1) << "Tip Selection" << std::setw(10) << "Amount" << std::endl;
	std::cout << std::setfill(' ') << std::setw(1) << "A. 15%" << std::setw(16) << "$1.50" << std::endl;
	std::cout << std::setfill(' ') << std::setw(1) << "B. 20%" << std::setw(16) << "$2.00" << std::endl;
	std::cout << std::setfill(' ') << std::setw(1) << "C. 25%" << std::setw(16) << "$2.50" << std::endl;
	std::cout << std::setfill(' ') << std::setw(1) << "D. Other Amount" << std::endl;

	std::cout << "What tip do you choose?: ";

	std::cin >> choice;

	double tip = 0;

	switch (choice) {

	case 'A':  std::cout << "Added 15% tip." << std::endl;

		std::cout << "Thank you for your donation!" << std::endl;
		tip = 1.50;

			break;

	case 'B':  std::cout << "Added 20% tip." << std::endl;

		std::cout << "Thank you for your donation!" << std::endl;
		tip = 2.00;

		break;

	case 'C':  std::cout << "Added 25% tip." << std::endl;

		std::cout << "Thank you for your donation!" << std::endl;
		tip = 2.50;

		break;

	case 'D':  std::cout << "Added 0% tip." << std::endl;

		std::cout << "Thank you for your donation!" << std::endl;
		tip = 0.00;

		break;

	default:  std::cout << "You didn't follow instructions!" << std::endl;

		std::cout << "You must choose a valid tip." << std::endl;

		break;    // optional -- there is nothing to fall into afterwards.

	}
	double total = subtotal - salesTax + tip;
	std::cout << "\nTotal: $" << total;
	return 0;

}
