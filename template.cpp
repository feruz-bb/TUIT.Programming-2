#include <iostream>

using namespace std;
/*
template <typename T>
T funksiya_nomi(T x1, Tx2){
	//funksiya_tanasi
}
*/

/*
template <typename T>
T qushish(T x, T y){
	return x + y;
}

int main(){
	int a = 5, b = 25;
	cout << qushish(a,b);
}
*/

////////////////
/*
template <typename T, typename Y>
void tekshir_juft(T x, Y y){
	if(x % 2 == 0){
		cout << "Juft son";
	}else{
		cout << "Toq son";
	}
}

int main(){
	int a = 9;
	bool b = true;
	tekshir_juft(a, b);
}
*/
////////////////
/*
template <typename T, typename Y>
T massiv_max(T a[],Y n){
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}

int main(){
	int n = 5;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << "\t";
	}
	
	cout << "Massivning maksimumi : " << massiv_max(a, n);

}
*/
////////////////

template <class T, class S, typename Y>
class Inson{
	public:
		T name;
		S surname;
		Y year;
		Inson(T name, S surname, Y year){
			this -> name = name;
			this -> surname = surname;
			this -> year = year;
		}
		void print(){
			cout << name << " " << surname << " " << year;
		}
};

int main(){
	Inson<string, string, int> shaxs("Feruz", "Baqoyev", 2005);
	shaxs.print();
}



