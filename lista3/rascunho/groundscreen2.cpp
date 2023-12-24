#include<iostream>
using namespace std;

int main(){
    
    double antsize=0.25, screenlength=0.6;

    int nwire= 3, count;

    int nseg= nwire*4;

    cin >> antsize >> screenlength >> nwire;
    nwire = nwire/2;
    nseg= nwire*4;
    count=2;
    for(int i = -nwire; i <= nwire ; i++){
        cout <<"GW  "<< count<<" "<<nseg<<" "<< -screenlength/2 <<" " << i*(screenlength/(2*nwire)) <<" 0 "<< screenlength/2 <<" "<< i*(screenlength/(2*nwire)) <<" 0 1.e-3\n";
        count++;
    }

    for(int i = -nwire; i <= nwire ; i++){
        cout <<"GW  "<< count<<" "<<nseg<<" "<<  i*(screenlength/(2*nwire)) <<" "<<-screenlength/2 <<" " <<" 0 "<< i*(screenlength/(2*nwire)) <<" " << screenlength/2 <<" "<<" 0 1.e-3\n";
        count++;
    }
    
}