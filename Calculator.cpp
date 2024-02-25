#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
template <typename T, typename Y>
T pluus(T a, Y b){
 	return a+b;
}
template <typename T, typename Y>
Y miinus(T a, Y b){
	return a-b;
}
template <typename T, typename Y>
Y multiply(T a, Y b){
	return a+b;
}
template <typename T, typename Y>
Y division(T a, Y b){
	return a/b;
}
int main(){
	restart:string x;
	cout<<"Quyidagilarga ko`ra amalni tanlang >>>"<<endl;
	cout<<"1 - ko`paytirish -> *"<<endl;
	cout<<"2 - qo`shish -> +"<<endl;
	cout<<"3 - bo`lish -> /"<<endl;
	cout<<"4 - ayirish -> -"<<endl;
	cout<<"5 - chiqish -> quit"<<endl;
    cout<<"Amalni kiriting >>> ";
	cin>>x;
	if(x=="quit"){
			
	}else{
		double a,b;
		cout << "1 - sonni kiriting >>> ";
		cin >> a;
		cout << "2 - sonni kiriting >>> ";
		cin >> b;
		if(x=="+"){
			cout << "Natija: " << pluus(a,b);
		}else if(x=="*"){
			cout << "Natija: " << multiply(a,b);
		}else if(x=="-"){
			cout << "Natija: " << miinus(a,b);
		}else{
			cout << "Natija: " << division(a,b);
		}
		cout<<endl;
		cout << "Davom ettirish uchun istalgan belgini kiriting >>> ";
		cin >> x;
    	system("cls");
		goto restart;
	}
}