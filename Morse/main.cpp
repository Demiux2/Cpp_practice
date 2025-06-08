#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
	string texto = "";
	cout << "Ingrese el texto a convertir: ";
	cin >> texto;

	for(int i=0; i < texto.length(); i++){
		if(isalpha(texto[i]) == 0){
			cerr << "Ingrese solo letras en minúscula\n";
			return 1;
		}
	}

	for(int j=0; j < texto.length(); j++){
		if(texto[j] == 'a')
			cout << ".-";
		if(texto[j] == 'b')
                        cout << "-...";
		if(texto[j] == 'c')
                        cout << "-.-.";
		if(texto[j] == 'd')
                        cout << "-..";
		if(texto[j] == 'e')
                        cout << ".";
		if(texto[j] == 'f')
                        cout << "..-.";
		if(texto[j] == 'g')
                        cout << "--.";
		if(texto[j] == 'h')
                        cout << "....";
		if(texto[j] == 'i')
                        cout << "..";
		if(texto[j] == 'j')
                        cout << ".---";
		if(texto[j] == 'k')
                        cout << "-.-";
		if(texto[j] == 'l')
                        cout << ".-..";
		if(texto[j] == 'm')
                        cout << "--";
		if(texto[j] == 'n')
                        cout << "-.";
		if(texto[j] == 'o')
                        cout << "---";
		if(texto[j] == 'p')
                        cout << ".--.";
		if(texto[j] == 'q')
                        cout << "--.-";
		if(texto[j] == 'r')
                        cout << ".-.";
		if(texto[j] == 's')
                        cout << "...";
		if(texto[j] == 't')
                        cout << "-";
		if(texto[j] == 'u')
                        cout << "..-";
		if(texto[j] == 'v')
                        cout << "...-";
		if(texto[j] == 'w')
                        cout << ".--";
		if(texto[j] == 'x')
                        cout << "-..-";
		if(texto[j] == 'y')
                        cout << "-.--";
		if(texto[j] == 'z')
                        cout << "--..";
		cout << "/";
	}
	cout << endl;
	return 0;

}
