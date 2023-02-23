#include <iostream>
using namespace std;
int main(){
    int num[] = {1, 4, 5, 5, 6, 7,13};
    int max = num[0];
    for(int i = 1; i < size(num); i++){
        if(max < num[i]){
            max = num[i];
        }
    }
    cout<<max;
    return 0;
}
