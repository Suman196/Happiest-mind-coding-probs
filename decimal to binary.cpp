
#include<iostream>
using namespace std;
int main(){
    int a,b,c, i=1;
      int remainder,binary_num=0;
    cin>>a>>b;
    c=a+b;
    while (c != 0) {
    remainder = c % 2;
    c /= 2;
    binary_num += remainder * i;
    i *= 10;
}
cout<<"Binary num: "<<binary_num;
return 0;
}
