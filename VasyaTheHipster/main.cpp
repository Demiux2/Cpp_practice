#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){
    int a, b;
    cin >> a >> b;
    if(!(1 <= a && a <= 100 && 1 <= b && b <= 100)) return 1;

    int x = (a > b) ? b : a;
    int y = abs(a - b) / 2;
    cout << x << " " << y << endl;
    return 0;
}
