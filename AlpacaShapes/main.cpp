#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv){
    int s, r;
    cin >> s >> r;
    if(!(1 <= s && s <= 10000 && 1 <= r && r <= 10000)) return 1;

    if(s*s > r*r*3.14){
         cout << "SQUARE" << endl;
	 return 0;
    }
    else{
        cout << "CIRCLE" << endl;
        return 0;
    }
}
