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
	std::cout << std::setfill(' ') << std::setw(20) << quantity<<" "<<full_name << std::setw(15) << full_item_size << std::setw(15) << "$" << price << "\nSubtotal: $"<<subtotal;

}
