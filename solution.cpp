```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());
    std::vector<int> intersect;
    std::set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(intersect));
    return intersect;
}

int main() {
    std::vector<int> nums1 = {1, 2, 2, 1};
    std::vector<int> nums2 = {2, 2};
    std::vector<int> intersect = intersection(nums1, nums2);
    for (int i : intersect) {
        std::cout << i << " ";
    }
    return 0;
}
```