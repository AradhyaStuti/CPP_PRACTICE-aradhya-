#include<iostream>
using namespace std;
int main() {
int num1, num2, num3;
cout<<"enter three numbers:";
cin>>num1>>num2>>num3;
if(num1>=num2 && num1>=num3){
    cout<<"the greatest number is:"<<num1<<endl;
}
else if(num2>=num1 && num2>=num3){
    cout<<"the greatest number is:"<<num2<<endl;
}
else{
    cout<<"the greatest number is:"<<num3<<endl;
}
return 0;
} 

