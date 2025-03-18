#include <iostream>
#include <vector>
#include <map>

using namespace std;

class myClass
{
public:
    bool duplicateContained(vector<int> &nums)
    {
        map<int, int> mapCount;
        for (int k = 0; k < nums.size(); k++)
        {
            if (mapCount.count(nums[k])) // I Checked if element already exists in the map
            {
                return true;
            }
            mapCount[nums[k]]++;
        }
        return false;
    }
};

int main()
{
    // test
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 3, 4};

    myClass testDuplicate;

    cout << "Test 1 (No Duplicates): " << (testDuplicate.duplicateContained(nums1) ? "True" : "False") << endl;
    cout << "Test 2 (Duplicate Present): " << (testDuplicate.duplicateContained(nums2) ? "True" : "False") << endl;

    return 0;
}