class Solution {
  public:
    bool isPrime(int n) {
        if(n == 0 || n == 1) return false; //edge case
        //if it divides other than 1 and itself its a composite number
        int i = 2;
        while(i * i <= n){
            if(n %i == 0) return false;
            i++;
        }
        return true;
    }
};
