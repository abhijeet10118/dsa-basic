# include <iostream>
using namespace std;

int main(){
   int sum = 0 ;
   int a ;
   cout <<"till which number u want to add" << endl ;
   cin >> a ;
   int i = 2 ;
   
   while(i<=a){
    sum=sum+i;
    i=i+2;
   }
   cout << sum ;
     
}     