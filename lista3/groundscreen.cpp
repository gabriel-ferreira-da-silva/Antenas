#include<iostream>
using namespace std;

int main(){
    int count=2;
    double lambda =1;
    double x1,y1,z1,x2,y2,z2;

    x1=-0.3;
    y1=z1=0;
    x2=y2=z2=0;
    for(double i=0; i < 6 ; i++){
        cout<<"GW "<< count++ <<" 9 "<< x1<<" "<< y1<<" "<< z1<<" "<< x1+0.1<<" "<< y2<<" "<< z2<<" .001\n";
        x1+=0.1;
        if(x1<0.1 && x1> -0.095 ){
            x1=.0;
        }
    }
}