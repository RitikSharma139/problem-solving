#include <bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
  int Leftsum = 0;
    int Rightsum = 0;
    for (int i = 0; i < str.size() / 2; i++) {
 
        Leftsum += int(str[i] - '0');
        Rightsum += int(str[str.size() - 1 - i]
                        - '0');
    }
 
    if (Leftsum == Rightsum)
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;
}