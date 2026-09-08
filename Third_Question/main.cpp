// Third Question

#include <bits/stdc++.h>
using namespace std;

int takeKey(int locker,
            int a1, int a2, int a3, int a4,
            int a5, int a6, int a7, int a8) {
    if (locker == 1) return a1;
    else if (locker == 2) return a2;
    else if (locker == 3) return a3;
    else if (locker == 4) return a4;
    else if (locker == 5) return a5;
    else if (locker == 6) return a6;
    else if (locker == 7) return a7;
    else return a8;
}

int main(){
    int a1, a2, a3, a4, a5, a6, a7, a8;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8;

    bool possible = false;

    // master key, can be used to open one of the 8 initial lockers
    for (int initial = 1; initial <= 8; initial++) {
        string opened = "00000000"; // string for tracking locker states (0 = closed, 1 = opened)
        int current = initial;
        int openedCount = 0;

        while (current != 0) {
            // if this locker has already been opened, the chain stops
            if (opened[current - 1] == '1') {
                break;
            }

            // mark the locker as opened and increment the count
            opened[current - 1] = '1';
            openedCount++;

            // open the next locker using the key from the current locker
            current = takeKey(current,
                              a1, a2, a3, a4,
                              a5, a6, a7, a8);
        }

        if (openedCount == 8) {
            possible = true;
            break;
        }
    } 

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}