/**
 * @brief
 *
 * @param pos
 * @param mid
 * @param balls
 * @return true
 * @return false
 */

bool isPossible(vector<int> &pos, int mid, int balls)
{
    int currBalls = 1;
    int pahli = pos[0];
    for (int i = 1; i < pos.size(); i++)
    {
        if (abs(pahli - pos[i]) >= mid)
        {
            currBalls++;
            pahli = pos[i];
        }
    }
    return (currBalls >= balls);
}
int maxDistance(vector<int> &position, int m)
{
    int s = 0;
    int e = 1E9;
    int ans = -1;
    sort(position.begin(), position.end());
    while (s <= e)
    {
        int mid = (s + e) / 2;
        bool ok = isPossible(position, mid, m);
        if (ok)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}