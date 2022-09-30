#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "enter the value of n"<<endl;
    cin>> n;
    switch(n){
        case 0: 
        for(int i=0;i<=10;i++){
            cout<< i;
        }
        break ;
         case 1: 
        for(int i=1;i<=10;i++){
            cout<< i;
        } break ;
         case 2: 
        for(int i=2;i<=10;i++){
            cout<< i;
        } break ;
         case 3: 
        for(int i=3;i<=10;i++){
            cout<< i;
        } break ;
         case 4: 
        for(int i=4;i<=10;i++){
            cout<< i;
        } break ;
         case 5: 
        for(int i=5;i<=10;i++){
            cout<< i;
        } break ;
         case 6: 
        for(int i=6;i<=10;i++){
            cout<< i;
        } break ;
         case 7: 
        for(int i=7;i<=10;i++){
            cout<< i;
        } break ;
         case 8: 
        for(int i=8;i<=10;i++){
            cout<< i;
        } break ;
         case 9: 
        for(int i=9;i<=10;i++){
            cout<< i;
        } break ;
         case 10: 
        for(int i=10;i<=10;i++){
            cout<< i;
        } break ;
        default:
        cout<<"number is greater than 10";
    }
    return 0;
}
