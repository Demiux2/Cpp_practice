#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){
    int a, b;
    cin >> a >> b;
    if(!(0 <= a && a <= 1000 && 0 <= b && b <= 1000)) return 1;
    cout << a+b << endl;
    return 0;
}
