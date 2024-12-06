#include<iostream>
using namespace std;

int factorial(int n) {
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main() {
    int num;
    cout<<"enter number:";
    cin>>num;
    if(num<0){
        cout<<"factorial is not defined:"<<endl;
    }else{
        cout<<"factorial of"<<num<<"is"<<factorial(num)<<endl;
    }
    return 0;
    }
