#include<iostream>
using namespace std;
int main(){
	string username,password;
	
	cout<<"input username : ";
	cin>>username;
	cout<<"input password : ";
    cin>>password;
    if(username =="alifa"){
        if(password=="123"){
        	 cout<<"selamat datang kenn";
        }else{ 
             cout<<"password salah kenn";
		}
    }else{
    	cout<<"karakter tidak dikenal";
	}
}
	
