#include <iostream>
#include <cmath>

using namespace std;

//06 Equação de Torricelli
// v^2 = v0^2 + 2 * a * s

void torricelli(){
	cout << "Torricelli" << endl;
	string variavel = "z";
	float v0=0, v=0, a=0, s=0;
	
	while( ((variavel) != "V0" ) && ((variavel) != "v0") && ( (variavel) != "V" ) && ((variavel) != "v") && ((variavel) != "A") && ((variavel) != "a" ) && ((variavel) != "S") && ( (variavel) != "s" ) ){
		cout << "Escolha uma variável para calcular. v, v0 , a ou s." << endl;
		cin >> variavel;
	}
	
	if( (variavel == "V") || (variavel == "v") ){
		cout << "Digite um valor para v0: " ;
		cin >> v0;
		cout << "Digite um valor para a: " ;
		cin >> a;
		cout << "Digite um valor para s: " ;
		cin >> s;
		
		v = sqrt( pow(v0, 2) + 2 * a * s);
		
		cout << "O valor de v para\n v0= " << v0 <<", a= " << a <<" e s= " << s << " eh \n v= " << v << endl;
		
	}else if( (variavel == "V0") || (variavel == "v0") ){
		cout << "Digite um valor para v: " ;
		cin >> v;
		cout << "Digite um valor para a: " ;
		cin >> a;
		cout << "Digite um valor para s: " ;
		cin >> s;
		
		v0 = sqrt( pow(v, 2) - 2 * a * s);
		
		cout << "O valor de v0 para\n v= " << v <<", a= " << a <<" e s= " << s << " eh \n v0= " << v0 << endl;
		
	}else if( (variavel == "A") || (variavel == "a") ){
		cout << "Digite um valor para v0: " ;
		cin >> v0;
		cout << "Digite um valor para v: " ;
		cin >> v;
		cout << "Digite um valor para s: " ;
		cin >> s;
		
		a = ( pow(v, 2) - pow(v0, 2) ) / (2 * s);
		
		
		cout << "O valor de a para\n v0= " << v0 <<", v= " << v <<" e s= " << s << " eh \n a= " << a << endl;
		
	}else {
		cout << "Digite um valor para v0: " ;
		cin >> v0;
		cout << "Digite um valor para a: " ;
		cin >> a;
		cout << "Digite um valor para v: " ;
		cin >> v;
		
		s = ( pow(v, 2) - pow(v0, 2) ) / (2 * a);
		
		cout << "O valor de s para\n v0= " << v0 <<", a= " << a <<" e v= " << v << " eh \n s= " << s << endl;
		
	}
}
