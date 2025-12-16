#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution{
    public:
    vector<int> prime_fact(int n){
        vector<int> result;
        int i = 2;
        while(i * i <= n){ //handle from smallest prime  2 than 3 than 4 than 5 
            while(n % i == 0){
                result.push_back(i);
                n /= i;
            }
            i++;
        }
        if(n > 1) result.push_back(n);
        return result;
    }
};