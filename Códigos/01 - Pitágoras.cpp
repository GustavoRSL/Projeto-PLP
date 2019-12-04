#include <iostream>
#include <cmath>

using namespace std;

void pitagoras(){
	string variavel = "z";
	double a, b, c;

	if(variavel == "a"){
		cout << "Digite um valor para b: ";
		cin >> b;
		cout << "Digite um valor para c: ";
		cin >> c;
		
		if(c < b){
			cout << "Para b= " << b << " e c= " << c << ". Nao existe valor real para a variavel a" << endl;
		}else {
			a = sqrt( pow(c , 2) - pow(b, 2) );
			cout << "O valor da variavel a eh: " << a << endl;
		}
	}else if(variavel == "b"){
		cout << "Digite um valor para a: ";
		cin >> a;
		cout << "Digite um valor para c: ";
		cin >> c;
		
		if(c < a){
			cout << "Para a= " << a << " e c= " << c << ". Nao existe valor real para a variavel b" << endl;
		}else {
			b = sqrt( pow(c , 2) - pow(a, 2) );
			cout << "O valor da variavel b eh: " << b << endl;
		}
		
	} else {
		cout << "Digite um valor para a: ";
		cin >> a;
		cout << "Digite um valor para b: ";
		cin >> b;
		
		c = sqrt( pow(a , 2) + pow(b, 2) );
		cout << "O valor da variavel b eh: " << b << endl;
	}
	
}
