# include <iostream>
using namespace std;

int main(){
   int sum = 0 ;
   int a ;
   cout <<"till which number u want to add" << endl ;
   cin >> a ;
   int i = 1 ;
   
   while(i<=a){
    sum=sum+i;
    i=i+1;
   }
   cout << sum ;
     
}     