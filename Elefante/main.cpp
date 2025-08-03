#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){
    int x;
    cin >> x;
    if(!(1 <= x && x <= 1000000)) return 1;

    (x % 5 == 0) ? (cout << (x / 5) << endl) : (cout << (x / 5 + 1) << endl);
    return 0;
}
