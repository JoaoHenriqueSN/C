#include <iostream>
#include <iomanip>
int main() 
{

	float Velocidades[]{ 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5,99.5,68.7 };
	float SomaVelocidades{ 0.0 };
	int TamArray{ 0 };
	for (auto Velocidade : Velocidades)
	{
		SomaVelocidades += Velocidade;
		TamArray++;
		//SomaVelocidades += Velocidade é o mesmo que:
		//SomaVelocidades = SomaVelocidades + Velocidade
	}

	std::cout << "A média de velocidade é " << std::defaultfloat << std::setprecision (4) << SomaVelocidades / TamArray << "km/h \n";

	return 0;
	system("PAUSE");
}