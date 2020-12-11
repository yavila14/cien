#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero;
	cout <<"Digite numero : ";
	cin>>numero;
	if(numero>100){
		cout <<"El numero es mayor que 100";	
	}
	else
	{
	cout <<"El numero es menor que 100";
	}
	return 0;
}
