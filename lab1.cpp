//Озеров Владимир. Группа М8О-207Б-19
//Создать класс Modulo для работы с целыми числами по модулю N. В классе должно быть два поля: число и N. Реализовать все арифметические операции. Реализовать операции сравнения.
#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b){
	return(a+b);
}

int vic(int a, int b){
	return(a-b);
}

int mul(int a,int b){
	return(a*b);
}

void div(int a, int b){
	if(b==0){
	cout<<"Деление на ноль! ошибка!";
		
	}
	else{
		cout<<a/b<<endl;
	}
	
}

void com(int a,int b){
	if(a>b){cout<<"Первое число больше второго"<<endl;}
	if(a<b){cout<<"Второе число больше первого"<<endl;}
	if(a==b){cout<<"Числа равны"<<endl;}
}
int mod(int n, int d)
{
	if (d==0){
		cout<<"Ошибка! Деление на ноль!"<<endl;
		return(-1);
	}
    int result = n-d*(n/d);
    if (n  < 0)
        result =n-(d*(n/d-1));
    if (d  < 0)
        result =n-(d*(n/d+1));
    return result;
}

class modulo {
	public:
		
     int number;
     int N;
     
     void calculation(){
     	number=mod(number, N);
	};	 
	 
};

int main()
{
	setlocale(LC_ALL, "Russian");
	modulo a,b;
	int option;
	option=-1;
	cout<<"Введите первое число: "<<endl;
	cin>>a.number;
	cout<<"Введите N для первого числа: "<<endl;
    cin>>a.N;
    a.calculation();
    cout<<"Введите второе число: "<<endl;
	cin>>b.number;
	cout<<"Введите N для второго числа: "<<endl;
    cin>>b.N;
    b.calculation();
    
    
   
    if((a.number!=-1) and (b.number!=-1)){
	cout<<"Выберите действие: "<<endl;
    while(option!=0){
    cout<<" "<<endl;
    cout<<"1.Сложить"<<endl<<"2.Вычесть из первого второе"<<endl<<"3.Перемножить"<<endl<<"4.Разделить нацело первое на второе"<<endl<<"5.сравнить"<<endl<<"0.Выход"<<endl;
	cin>>option;
    cout<<"Первое число по модулю: "<<a.number<<endl<<"Второе число по модулю: "<<b.number<<endl<<"Результат: ";
    if(option==1){cout<<sum(a.number,b.number)<<endl;}
    if(option==2){cout<<vic(a.number,b.number)<<endl;}
    if(option==3){cout<<mul(a.number,b.number)<<endl;}
    if(option==4){div(a.number,b.number);}
    if(option==5){com(a.number,b.number);}
    }
}
else{
	cout<<"Что-то пошло не так"<<endl;
}
    return 0;
}
