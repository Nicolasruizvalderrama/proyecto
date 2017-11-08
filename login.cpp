#include <iostream>
using namespace std;
int contrasena=78082;
	void LLenarMostrar(){
			int VectorA[7],num;
				int VectorB[7],aux;
					for(int i=0;i<7;i++){
						cout<<"ingrese el valor de la posicion:"<<i+1<<endl;
						cin>>num;
						if(num>=20&&num<=40&&num%2==0){
							VectorA[i]=num;
						}
					else{
						VectorA[i]=0;
					}
					}
			cout<<"los valores que guardaste en cada posicion del arreglo A son:\n"<<endl;
					for(int i=0;i<7;i++){
					cout<<i+1<<"->"<<VectorA[i]<<endl;
						
					}
					
					 int p=6;//esta lleva la cuenta de las posiciones
					
					for(int i=0;i<7;i++){
						VectorB[i]=VectorA[p];
						p--;
						}
						
						
				
					cout<<"Los valores guardados en cada posicion del arreglo B son"<<endl;	
				
			for(int i=0;i<7;i++){
					cout<<i+1<<"->"<<VectorB[i]<<endl;
			
			}
	
		}
	
	


int main(){
	int claveusuario;
	int opc;


	do{
		cout<<"ingrese su contrasena:"<<endl;
		cin>>claveusuario;
		if(claveusuario==contrasena ){
			break;
		
		}
		else{
			cout<<"contresena incorrecta"<<endl;
		}
	}while(claveusuario!=contrasena);

cout<<"bienvenid@"<<endl;
	
	do{
		cout<<"1.Resta de vectores"<<endl;
		cout<<"2.Numeros primos"<<endl;
		cout<<"3.Suma de vectores"<<endl;
		cout<<"4.ordenar un vector"<<endl;
		cout<<"5.Manejo de cadenas"<<endl;
		cout<<"6.Salir"<<endl;
		cin>>opc;
		switch(opc){
			case 1:{
				LLenarMostrar();
			
				break;
			}
		}
	}while(opc!=6); 
	
}
	
