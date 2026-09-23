#include <iostream>
#include <iostring>

#include <iomanip>

int main()

{
	string food_name = "";
		char item_code = "";
		int quantity = 0;
		double unit_price = 0;
		char member = "";
		std::cout << "Enter name of the food item";
		std::cin >> food_name;
		std::cout << "Enter name of the item code";
		std::cin >> item_code;
		std::cout << "Enter the quantity of the item";
		std::cin >> quantity;
		std::cout << "Enter the unit price";
		std::cin >> unit_price;
		std::cout << "Are you a registered member?";
		std::cin >> member;

		std::cout << setprecision(2) << fixed << unit_price;
		std::cont << left << setw(5) << food_name << item_code << quantity << unit_price << member;
		std::cout << right << setw(6) << 6.5;

}
