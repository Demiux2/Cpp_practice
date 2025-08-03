#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){
    int h, b;
    cin >> h >> b;
    if(!(1 <= h && h <= 1000 && 1 <= b && b <= 1000)) return 1;
    cout << (float)((h*b)/2.0) << endl;
    return 0;
}
