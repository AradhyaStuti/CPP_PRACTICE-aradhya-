#include<iostream>
using namespace std;

int reverseDigits(int n) {
    int revNum = 0;
    while(n>0){
        int lastDigit=n%10;
        revNum = revNum*10+lastDigit;
        n=n/10;
        }     
        return revNum;
        }
        int main(){
            int num;;
            cout<<"enter an integer:";
            cin>>num;
            int reversedNum = reverseDigits(num);
            cout<<"Reversed Number:"<<reversedNum<<endl;
            return 0;
 }
