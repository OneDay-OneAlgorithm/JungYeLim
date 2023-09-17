#include <iostream>

using namespace std;

int alphabet[26], cnt = 0;
string input;

int main() {
    cin >> input;

    for(int i=0; i < input.length(); i++) {
        if(input[i] < 97) alphabet[input[i] - 65]++; 
        else alphabet[input[i] - 97]++; 
    }

    int max = 0, max_indx=0;

    for(int i = 0; i < 26;i++) {
        if(max < alphabet[i]) {
            max = alphabet[i];
            max_indx = i;
        }
    }
    
    for(int i = 0;i < 26;i++) {
        if(max==alphabet[i]) cnt++;
    }

  
    if(cnt > 1) cout << "?";
    else cout << (char)(max_indx + 65);
}