#pragma once
#include <iostream>

//Este � o arquivo .h. � onde existem apenas as delcara��es dos atributos e
//m�todos da classe. Aqui n�o existem as defini��es , implementa��es das fun��es, 
//pois ser� feito no arquivo .cpp
//� a separa��o do O QU� (.h) voc� vai fazer do COMO(.cpp)

class Conta {

	//Indica que o acesso a estes membros abaixo de private:
	//s� ser� permitido de dentro do c�digo da classe
	private:
		std::string Banco;
		int Agencia;
		int NumConta;
		std::string Titular;
		double Saldo;

	//Indica que os membros abaixo podem ser acessados pelo 
	//objeto da classe Conta fora do c�digo da classe conta

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




