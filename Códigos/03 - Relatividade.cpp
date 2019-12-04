#include <iostream>
#include <cmath>

using namespace std;


void relatividade(){
	cout << "Relatividade" << endl;
	string variavel = "z";
	float E=0, m=0, c=0;
	
	while( ((variavel) != "E" ) && ((variavel) != "e") && ( (variavel) != "M" ) && ((variavel) != "m") && ((variavel) != "C") && ((variavel) != "c") ){
		cout << "Escolha uma variável para calcular. E, m ou c." << endl;
		cin >> variavel;
	}
	
	if( (variavel == "E") || (variavel == "e") ){
		cout << "Digite um valor para m: " ;
		cin >> m;
		cout << "Digite um valor para c: " ;
		cin >> c;
		
		E = m * c * c;
		
		cout << "O valor de E para\n m= " << m <<"e c= " << c << "eh \n E= " << E << endl;
		
	}else if( (variavel == "M") || (variavel == "m") ){
		cout << "Digite um valor para E: " ;
		cin >> E;
		cout << "Digite um valor para c: " ;
		cin >> c;
		
		m = E / c / c; 
		
		cout << "O valor de m para\n E= " << E <<"e c= " << c << "eh \n m= " << m << endl;
		
	}else{
		cout << "Digite um valor para E: " ;
		cin >> E;
		cout << "Digite um valor para m: " ;
		cin >> m;
		
		c = sqrt( E / m );
		
		cout << "O valor de c para\n E= " << E <<"e m= " << m << "eh \n c= " << c << endl;
	}
	
}
