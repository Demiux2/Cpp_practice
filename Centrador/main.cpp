#include <iostream>
#include <cstring>

using namespace std;

int obtener_ancho_letra(int alto){
	if(alto == 3)
		return 2;
	else if(alto == 5)
		return 3;
	else
		return alto * 2/3;
}

int main(){

	int ancho, alto, ancho_esp, ancho_letra, cant_esp = 0;
	double esp_ocupado = 0.0f;
	string texto;

	cout << "Ingrese el texto a centrar: ";
	getline(cin, texto);
	cout << "Ingrese el ancho del renglón: ";
	cin >> ancho;
	cout << "Ingrese el alto del renglón: ";
	cin >> alto;
	cout << "Ingrese el ancho de los espacios: ";
	cin >> ancho_esp;

	ancho_letra = obtener_ancho_letra(alto);

	for(int i=0; i < texto.length(); i++){
		if(isalnum(texto[i]) != 0 && texto[i] != 'I' && texto[i] != 'i' && texto[i] != 'm')
			esp_ocupado += ancho_letra;
		else if(texto[i] == 'm')
			esp_ocupado += 3;
		else if(texto[i] == '(' || texto[i] == ')' || texto[i] == L'º' || texto[i] == '/')
			esp_ocupado += 1;
		else if(texto[i] == '.' || texto[i] == ':' || texto[i] == ',' || texto[i] == ';' || texto[i] == 'I' || texto[i] == 'i')
			continue;
		else if(texto[i] == ' '){
			esp_ocupado += ancho_esp;
			cant_esp++;
		}
		else{
			cout << "Advertencia: El carácter no soportado \"" << texto[i] << "\" será omitido.\n";
			continue;
		}
	}

	double esp_lateral = ((ancho - esp_ocupado) + (texto.length() - ancho_esp * cant_esp * 2)) / 2.0f;
	cout << "El espacio lateral es de " << esp_lateral << "mm.\n";

}
