#include<iostream>
using namespace std;
//Seçilen firmanýn kodlarýný veren program.

int main(){
	
	
int firma;

cout<<"1-Turk Demir Dokum"<<endl;
cout<<"2-Baymak"<<endl;
cout<<"3-Termo Teknik"<<endl;
cout<<"4-Emas"<<endl;
cout<<"-----------------"<<endl;
cout<<"Lutfen kodlarini bulmak istediginiz firmayi seciniz: ";
cin>>firma;

switch(firma){
	case 1:
	cout<<"473.0052.32"<<endl;
	cout<<"473.0055.32"<<endl;
	cout<<"473.0097.11"<<endl;
	cout<<"473.0052.35"<<endl;
	cout<<"473.0055.33"<<endl;
	cout<<"473.0054.32"<<endl;
	cout<<"473.0052.34"<<endl;
	
	break;
	
	case 2:
	cout<<"473.0001.02"<<endl;
	cout<<"473.0010.02"<<endl;
	break;
	
	case 3:
	cout<<"473.0001.05";
	break;
	
	case 4:
	cout<<"473.0008.12"<<endl;
	cout<<"473.0008.13"<<endl;
	
	

}

return 0;
	
	
	
	
	
	
	
	
}
