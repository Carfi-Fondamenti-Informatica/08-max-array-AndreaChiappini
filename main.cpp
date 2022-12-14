#include <iostream>
#include "lib.h"
using namespace std;

int main() {
        int a;
        cin >> a;
        float num[a];

        for (int i=0;i< a;i++){
            cin >> num[i];
        }
        cout << funzione(num, a) << endl;
        return 0;
    }
