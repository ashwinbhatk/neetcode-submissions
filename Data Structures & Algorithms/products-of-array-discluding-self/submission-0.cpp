class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int preProduct = 1;
        int detectZero = 0;
        for(int &num : nums) {
            if(num != 0) {
                preProduct *= num;
            }
            else{
                detectZero++;
            }
        }
        if(detectZero > 1) {
            for(int i = 0; i < nums.size(); i++) {
                res.push_back(0);
            }
            return res;
        }
        

        for(int &num : nums) {
            if(detectZero == 0) {
                res.push_back(preProduct / num);
            }
            else if(num != 0){
                res.push_back(0);
            }
            else {
                res.push_back(preProduct);
            }
        }
        return res;
    }
};
