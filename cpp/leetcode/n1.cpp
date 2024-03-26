/*Barkamol Valiev 26- mart 2024 yil, leetcode testing, chat gpt yordamida test dastur yozildi, bu yerda men faqat twoSum functionni yozdim!!!*/
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
// mening yechimim
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (auto i = 0; i < nums.size(); i++)
        {
            for (auto j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// taqqsolash testing
bool compareVectors(const vector<int> &expected, const vector<int> &result)
{
    if (expected.size() != result.size())
        return false;
    for (size_t i = 0; i < expected.size(); ++i)
    {
        if (expected[i] != result[i])
            return false;
    }
    return true;
}

int main()
{
    Solution solution;

    // array hosil qilish
    cout << "arrayning elementlar soni: ";
    int n;
    cin >> n;
    vector<int> nums(n);
    cout << "elementlar: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    // targetni olish
    int target;
    cout << "targetni kiriting: ";
    cin >> target;

    // mening javob funksiyamni chaqirish
    vector<int> result = solution.twoSum(nums, target);

    // natija
    if (result.empty())
    {
        cout << "Mos qiymatlar topilmadi." << endl;
    }
    else
    {
        cout << "mos qiymatlar ushbu indeksda: " << result[0] << ", " << result[1] << endl;
    }

    return 0;
}
