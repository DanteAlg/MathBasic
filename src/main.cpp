#include <iostream>
#include "mbasic.h"

using namespace mbasic;
using std::cin;
using std::cout;
using std::endl;

int main()
{
int menu = 0, n1 = 0, n2 = 1;
while (menu != 5){
	std::cout << "||||||||||||||||||||||||Calculadora basica||||||||||||||||||||||||" << std::endl;
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "||||Para somar digite (1)|||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "||||Para subtrair digite (2)||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "||||Para multiplicar digite (3)|||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "||||Para dividir digite (4)|||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "||||Para sair digite (5)||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	cin >> menu;
	if (menu == 1)
	{
		std::cout << "Digite o primeiro valor" << std::endl;
		std::cin >> n1;
		std::cout << "Digite o segundo valor" << std::endl;
		std::cin >> n2;
		std::cout << "Resultado:" << MathBasic::Add(n1,n2) << std::endl;
	}
	if (menu == 2)
	{
		std::cout << "Digite o primeiro valor" << std::endl;
		std::cin >> n1;
		std::cout << "Digite o segundo valor" << std::endl;
		std::cin >> n2;
		std::cout << "Resultado:" << MathBasic::Dif(n1,n2) << std::endl;
	}
	if (menu == 3)
	{
		std::cout << "Digite o primeiro valor" << std::endl;
		std::cin >> n1;
		std::cout << "Digite o segundo valor" << std::endl;
		std::cin >> n2;
		std::cout << "Resultado:" << MathBasic::Mux(n1,n2) << std::endl;
	}
	if (menu == 4)
	{
		std::cout << "Digite o primeiro valor" << std::endl;
		std::cin >> n1;
		std::cout << "Digite o segundo valor" << std::endl;
		std::cin >> n2;
		if (n2 == 0)
		{
			std::cout << "Valor invalido! digite o segundo valor" << std::endl;
			std::cin >> n2;
		}
		std::cout << "Resultado:" << MathBasic::Div(n1,n2) << std::endl;
	}
}
	return 0;
}