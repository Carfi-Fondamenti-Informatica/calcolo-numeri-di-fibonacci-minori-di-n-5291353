#include <iostream>
using namespace std;

int main() {
    int n=0,a=0, b=1,c=0;
    cout<<"Inserire numero:"<<endl;
    cin>> n;
        if(n>=1){
        cout<<"1"<<endl;
        }
            for (int i = 1; i>0; i++) {
                c = a + b;
                if(c<=n) {
                    cout << c << endl;
                }else{
                    return 0;
                }
                a = b;
                b = c;
            }

    return 0;
}
