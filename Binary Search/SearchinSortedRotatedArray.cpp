/**
 * @brief 
 * 
 * @param nums 
 * @param target 
 * @return int 
 */

/** Solution :-
int search(vector<int> &nums, int target)
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n = nums.size();

    int l, h;
    l = 0;
    h = n - 1;

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[l] <= nums[mid])
        {

            if (target >= nums[l] && target < nums[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        else
        {
            if (target <= nums[h] && target > nums[mid])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}

*/