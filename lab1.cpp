//������ ��������. ������ �8�-207�-19
//������� ����� Modulo ��� ������ � ������ ������� �� ������ N. � ������ ������ ���� ��� ����: ����� � N. ����������� ��� �������������� ��������. ����������� �������� ���������.
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
	cout<<"������� �� ����! ������!";
		
	}
	else{
		cout<<a/b<<endl;
	}
	
}

void com(int a,int b){
	if(a>b){cout<<"������ ����� ������ �������"<<endl;}
	if(a<b){cout<<"������ ����� ������ �������"<<endl;}
	if(a==b){cout<<"����� �����"<<endl;}
}
int mod(int n, int d)
{
	if (d==0){
		cout<<"������! ������� �� ����!"<<endl;
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
	cout<<"������� ������ �����: "<<endl;
	cin>>a.number;
	cout<<"������� N ��� ������� �����: "<<endl;
    cin>>a.N;
    a.calculation();
    cout<<"������� ������ �����: "<<endl;
	cin>>b.number;
	cout<<"������� N ��� ������� �����: "<<endl;
    cin>>b.N;
    b.calculation();
    
    
   
    if((a.number!=-1) and (b.number!=-1)){
	cout<<"�������� ��������: "<<endl;
    while(option!=0){
    cout<<" "<<endl;
    cout<<"1.�������"<<endl<<"2.������� �� ������� ������"<<endl<<"3.�����������"<<endl<<"4.��������� ������ ������ �� ������"<<endl<<"5.��������"<<endl<<"0.�����"<<endl;
	cin>>option;
    cout<<"������ ����� �� ������: "<<a.number<<endl<<"������ ����� �� ������: "<<b.number<<endl<<"���������: ";
    if(option==1){cout<<sum(a.number,b.number)<<endl;}
    if(option==2){cout<<vic(a.number,b.number)<<endl;}
    if(option==3){cout<<mul(a.number,b.number)<<endl;}
    if(option==4){div(a.number,b.number);}
    if(option==5){com(a.number,b.number);}
    }
}
else{
	cout<<"���-�� ����� �� ���"<<endl;
}
    return 0;
}
