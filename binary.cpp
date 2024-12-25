// binary exponeatiation
//   *NOTE : ELEMENTS SHOULD BE SORTED*
#include <iostream>
#include <vector>
using namespace std;
int binary_expo(int target, vector<int> nums)
{
    int n = nums.size();
    int start = 0, end = n - 1, mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
};

int main()
{
    vector<int> nums = {2, 3, 4, 6, 8, 9, 10, 22, 33, 45, 67, 89};
    int target = 67;
    int index = binary_expo(target, nums);
    cout << "the target is at " << index << " index" << endl;

    return 0;
}

