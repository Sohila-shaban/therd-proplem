#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);

   
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '\\') {
            break; 
        }
        cout << S[i];  
    }

    cout << endl; 
    return 0;
}