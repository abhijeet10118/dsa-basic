# include <iostream>
using namespace std;

int main(){
    cout << " give the value to check"  ;
    char ch ;
    cin >> ch;

    if ( ch>= 'a' && ch <='z' ) {
        cout<< "it's small case " ;
    }
    if (ch>='A' && ch<= 'Z') {
        cout << "it's capital " ;
    }
    if (ch>= '0' && ch <='999999') {
        cout << " it's a number ";
    }
     

}