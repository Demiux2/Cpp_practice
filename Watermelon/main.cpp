#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){
    int w;
    cin >> w;
    if(!(1 <= w && w <= 100)) return 1;
    if(w % 2 == 0 && w > 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
