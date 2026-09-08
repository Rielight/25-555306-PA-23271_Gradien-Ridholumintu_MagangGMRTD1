// Second Question

#include <bits/stdc++.h>
using namespace std;

int main(){
    // n is the number of tasks, C is the maximum energy capacity,
    // R is the number of energy units regained per charge, and K is the maximum number of charges allowed.
    int n, C, R, K;
    cin >> n >> C >> R >> K;

    int energy = C;
    int chargeNumber = 0;
    int done = 0;

    for(int i = 0; i < n; i++){
        int need;
        cin >> need;

        // chargeas quickly as possible while still allowed
        if (chargeNumber < K) {
            if (energy + R <= C) {
                energy += R;
                chargeNumber++;
            }
        }

        // check if there is enough energy to complete the task
        if(energy >= need){
            energy -= need;
            done++;
        } else {
            break;
        }
    }

    cout << done << '\n';
    return 0;
}