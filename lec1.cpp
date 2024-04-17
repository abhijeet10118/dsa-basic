#include<iostream>
using namespace std;
int main() {
    


    int a ;
    int b;
    cout << "give value of a and b respectively " << endl ;
    cin >> a ;
    cin >> b ;
    cout << "value of a and b is " << endl << a << endl << b << endl ;

    if ( a > b){
        cout << " a is greather than b " ;
    }

    else if ( b >a ){
        cout << " b is greather than a" ;
    }
    else {
        cout << " a = b";
     }

    
} 