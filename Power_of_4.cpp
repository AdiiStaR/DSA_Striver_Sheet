class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        
        while(n>1){
            if(n%4 != 0) return false;
            n /= 4;
        }
        return true;
    }
};

//Another Approach
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0) return false;
        for(int i=0;i<=31;i++){
            long power = pow(4,i);
            if(power==n){
                return true;
            }
            
        }
        return false;
    }
};
