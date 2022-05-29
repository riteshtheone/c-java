#include <iostream>

using namespace std;

int hcf(int a, int b){

    if(a == 0) return b;
    return hcf(b%a, a);
}

int findHcf(int arr[], int n){

    int result = arr[0];

    for (int i = 1; i < n; i++){
        result = hcf(arr[i], result);
        if(result == 1) return result;
    }

    return result;
}

int main(){

    cout << "Hello c++" << endl;
    int a;
    cin >> a;

    int arr[] = {2,6,18,28};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Hcf is:- " << findHcf(arr, n) << endl;

    return 0;

}