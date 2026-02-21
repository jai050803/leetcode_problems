#include <iostream>
#include <vector>
using namespace std;


    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;
        int j = 2;
        for(int i=2; i<n; i++){
            if(nums[i] != nums[j-2]){
                nums[j++] = nums[i];
            }
        }
        return j;
    }



int main(){

    vector<int> arr = {1,1,2,2,3,3,3,4,4,4};
    int ans = removeDuplicates(arr);
    cout << ans << endl;
    return 0;
}
