# include <iostream>
using namespace std;

int main(){
  cout <<"if u want to convert Celsius to Fahrenheit enter 1"<<endl ;
  cout <<"if u want to convert Fahrenheit to celcius enter 2"<<endl ; 
  int a ;
  cin >> a ;
  if ( a==1){
    cout<< "enter celcius to convert in fahrenheit" << endl ;
    float c ;
    cin >> c;
    float d ;
    d=(c*1.8)+32;
    cout << "its  " <<d<<"  F"<<endl ;
  }    
  else if ( a==2){
    cout<< "enter fahrenheit to convert in celcius "<< endl ;
    float f ;
    cin >> f;
    float e ;
    e=((f-32)*5)/9 ;
    cout << "its  " <<e<<"  C"<<endl;
    }
  else {
    cout << "invalid option" ;
  }

}