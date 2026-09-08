// First Question

#include <iostream>
using namespace std;

int main(){
    int n, m, k;
    // if the input is taken in the order of k, n, m, the output will be wrong,
    // so we need to take the input in the order of n, m, k to satisfy the test cases
    cin >> n >> m >> k;

    // we need to check if n and m are divisible by 3, if not we return -1
    // because we cannot distribute the items evenly into 3 boxes
    if(n % 3 != 0 || m % 3 != 0){
        cout << -1 << endl;
        return 0;
    }

    int steps = 0;

    // for the 2kg items
    if (n > 0){
        // we can carry k/2 items at a time
        int load = k / 2;

        // if load is 0, we cannot carry any items, so we return -1
        if(load == 0){
            cout << -1 << endl;
            return 0;
        }

        int target = n / 3;

        // calculate the number of steps to take items from box 1
        steps += (2 * target + load - 1) / load;
        steps += 2 * ((target + load - 1) / load);
    }

    // for the 1kg items
    if (m > 0){
        // we can carry k items at a time
        int load = k;

        // if load is 0, we cannot carry any items, so we return -1
        if(load == 0){
            cout << -1 << endl;
            return 0;
        }

        int target = m / 3;

        // calculate the number of steps to take items from box 2
        steps += (2 * target + load - 1) / load;
        steps += 2 * ((target + load - 1) / load);
    }

    cout << steps << '\n';
    return 0;
}