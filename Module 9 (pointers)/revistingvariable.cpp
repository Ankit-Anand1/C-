#include <iostream>
using namespace std;

    int main(){

        cout<< sizeof(int) << " byte" <<endl;
        cout<< sizeof(bool)<<" byte"<<endl;
        cout<< sizeof(char)<<" byte"<<endl;
        cout<< sizeof(double)<<" byte"<<endl;
        cout<< sizeof(short)<<" byte"<<endl;
        cout<< sizeof(long)<<" byte"<<endl;
        cout<< sizeof(double long)<<" byte"<<endl;

        int x=9;
        cout<<&x << endl;

        char y = 's';
        cout<<&y;
}