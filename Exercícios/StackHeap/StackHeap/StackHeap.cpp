#include <iostream>

void funcao01();
void funcao02();
void funcao03();
void funcao04();

int VarGlobal{ 10 };

int main()
{

	int VarMain{ 0 };
	funcao01();

	system("PAUSE");
	return 0;
}

void funcao01()
{
	int Var01{ 01 };
	static int VarEstatica{ 20 };
	std::cout << "Chamando funcao 01...\n";
	std::cout << "\nEndereco Var01: " << & Var01 << "\n";
	VarEstatica++;
	std::cout << "\n Valor da VarEstatica: " << VarEstatica << std::endl;
	funcao02();
}

void funcao02()
{
	int Var02{ 02 };
	std::cout << "Chamando funcao 02...\n";
	std::cout << "\nEndereco Var0: " << &Var02 << "\n";
	funcao03();
}

void funcao03()
{
	int Var03{ 03 };
	std::cout << "Chamando funcao 03...\n";
	std::cout << "\nEndereco Var03: " << &Var03 << "\n";
	funcao04();
}

void funcao04()
{
	int Var04{ 04 };
	std::cout << "Chamando funcao 04...\n";
	std::cout << "\nEndereco Var04: " << &Var04 << "\n";
}
