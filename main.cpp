#include <iostream>
#include <string>
#include <iomanip>

int main()

{
	std::string food_name = "";
	int quantity = 0;
	double unit_price = 0;
	char item_code = ' ';
	char member = ' ';
	std::cout << "Enter name of the food item:\n";
	std::cin >> food_name;
	std::cout << "Enter item code:\n";
	std::cin >> item_code;
	std::cout << "Enter the quantity of the item:\n";
	std::cin >> quantity;
	std::cout << "Enter the unit price:\n";
	std::cin >> unit_price;
	std::cout << "Are you a registered member? (y/n)\n";
	std::cin >> member;

	std::cout << std::left << std::setw(5) << "\nFood name: " << food_name;
	std::cout << std::left << std::setw(5) << "\nItem code: " << item_code;
	std::cout << std::left << std::setw(5) << "\nQuantity: " << quantity;
	std::cout << std::left << std::setw(5) << "\nUnit Price: " << unit_price;
	std::cout << std::left << std::setw(5) << "\nMember?: " << member;
	std::cout << std::setprecision(2) << std::fixed << "\nUnit Price Confirmation: " << unit_price;
	std::cout << std::setw(15) << "\nFood Name Confirmation: " << food_name << std::endl;


}
