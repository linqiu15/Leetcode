#include <vector>
using namespace std;

class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int len = arr.size(), sum = 0;
        for (int i = 0; i < len; i++)
        {
            for (int j = i; j < len; j = j + 2)
            {
                for (int k = i; k <= j; k++)
                {
                    sum += arr[k];
                }
            }
        }
        return sum;
    }
};

// Runtime: 8 ms, faster than 41.53% of C++ online submissions for Sum of All Odd Length Subarrays.
// Memory Usage: 8.6 MB, less than 30.89% of C++ online submissions for Sum of All Odd Length Subarrays.