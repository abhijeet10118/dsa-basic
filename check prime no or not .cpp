# include <iostream>
using namespace std;

int main(){
  cout<<"enter number to check prime or not"<<endl;
  int a;
  cin >>a;
  int i=2;
  int rem ;
  while (i<a){
    rem=a%i;
    if (rem==0){
        cout<<"not prime"<< endl;
        return(0);
    }
    i=i+1;
  }
  cout<<"primr no";

}