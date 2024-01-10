#pragma once
#include <iostream>

//Este é o arquivo .h. É onde existem apenas as delcarações dos atributos e
//métodos da classe. Aqui não existem as definições , implementações das funções, 
//pois será feito no arquivo .cpp
//É a separação do O QUÊ (.h) você vai fazer do COMO(.cpp)

class Conta {

	//Indica que o acesso a estes membros abaixo de private:
	//só será permitido de dentro do código da classe
	private:
		std::string Banco;
		int Agencia;
		int NumConta;
		std::string Titular;
		double Saldo;

	//Indica que os membros abaixo podem ser acessados pelo 
	//objeto da classe Conta fora do código da classe conta

	public:
		bool Sacar(double Valor);
		void Depositar(double Valor);
		void Transferir(Conta Destino, double Valor);
		double ConsultarSaldo();
		std::string GetBanco();
		int GetAgencia();
		int GetNumConta();
		std::string GetTitular();
		void SetBanco(std::string Banco);
		void SetAgencia(std::string Agencia);
		void SetTitular(std::string Titular);

};




