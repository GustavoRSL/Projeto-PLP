#include <iostream>
#include <cmath>

using namespace std;

//07 Equação de Gauss
// (1/f) = (1/p1) + (1/p2)

void gauss(){
	cout << "Gauss" << endl;
	string variavel = "z";
	float f=0, p1=0, p2=0;
	
	while( ((variavel) != "F" ) && ((variavel) != "f") && ( (variavel) != "p1" ) && ((variavel) != "P1") && ((variavel) != "P2") && ((variavel) != "p2" ) ){
		cout << "Escolha uma variável para calcular. f, p1 ou p2." << endl;
		cin >> variavel;
	}
	
	if( (variavel == "F") || (variavel == "f") ){
		cout << "Digite um valor para p1: " ;
		cin >> p1;
		cout << "Digite um valor para p2: " ;
		cin >> p2;
		
		f = (p1 * p2) / (p1 + p2);
		
		cout << "O valor de f para\n p1= " << p1 <<" e p2= " << p2 << " eh \n f= " << f << endl;
	}else if( (variavel == "P1") || (variavel == "p1") ){
		cout << "Digite um valor para f: " ;
		cin >> f;
		cout << "Digite um valor para p2: " ;
		cin >> p2;
		
		p1 = (p2 * f) / (p2 - f);
		
		cout << "O valor de p1 para\n f= " << f <<" e p2= " << p2 << " eh \n p1= " << p1 << endl;
	}else{
		cout << "Digite um valor para p1: " ;
		cin >> p1;
		cout << "Digite um valor para f: " ;
		cin >> f;
		
		p2 = (p1 * f) / (p1 - f);
		
		cout << "O valor de p2 para\n p1= " << p1 <<" e f= " << f << " eh \n p2= " << p2 << endl;
	}
}
