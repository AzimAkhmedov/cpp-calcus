#include <iostream>
using namespace std; 

int main(){
     int num1 = 0;
     int num2 = 0;
     char operation = ' ';
     cout<<"Enter your firts number  \n";
     cin>>num1;
     cout<<"Enter your second number  \n";
     cin>>num2;
     cout<<"Enter your operation, * / + -   \n";
     cin>>operation;

     switch(operation){
        case '+':
        cout<< num1+num2<<endl;
        break;

         case '*':
        cout<< num1*num2<<endl;
        break;
         case '-':
        cout<< num1-num2<<endl;
        break;
         case '/':
        cout<< num1/num2<<endl;
        break;
        default:
        cout<<"You did something wrong \n";
        
     }
    return 0 ;
}