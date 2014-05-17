#include <iostream>

int main(){
	int x, y;
	y = 100;

	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
	}

	while (y > 0)
	{

		std::cout << "HP" << y << std::endl;
		std::cin >> x;
		y = y - x;
		if (y < 1){
			std::cout << "game over" << std::endl;

		}
	}
	while (1){}
	return 0;

}
