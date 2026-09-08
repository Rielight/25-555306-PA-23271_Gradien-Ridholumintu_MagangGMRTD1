#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;


    int insideRoom = 0;
    bool valid = true;

    // check if the robot is inside the room or not
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            insideRoom++;
        } else {
            insideRoom--;
        }

        // robot cannot exit if its not inside the room
        if(insideRoom < 0){
            valid = false;
            break;
        }
    }

    // return to initial state after all commands
    if(insideRoom != 0){
        valid = false;
    }

    if(valid){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}