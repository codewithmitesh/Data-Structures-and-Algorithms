class Solution
{
public:
    int findTheCity(int n, vector<vector<int>> &edges, int distanceThreshold)
    {
        int v = edges.size();
        // create the matrix to store the cost matrix
        vector<vector<int>> matrix(n, vector<int>(n, INT_MAX));
        for (int i = 0; i < n; i++)
        {
            matrix[i][i] = 0;
        }
        // update the const matrix by adding the initial cost
        for (int i = 0; i < v; i++)
        {
            matrix[edges[i][0]][edges[i][1]] = edges[i][2];
            matrix[edges[i][1]][edges[i][0]] = edges[i][2];
        }
        // use floyed warsells algorithn to update the minmum consts
        // via - 0 to n
        for (int k = 0; k < n; k++)
        {
            // traver the whole matrix
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    // if the any distance is infinty then continue
                    if (matrix[i][k] == INT_MAX || matrix[k][j] == INT_MAX)
                        continue;
                    // else update th the distance to min of ()i->j , i->k + k->j)
                    matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                }
            }
        }

        int mn = INT_MAX;
        int ans;
        // now we need to find the distance who are less than thresold and whose occurence are minimum
        // traverse the matrix again but for each row find the count of repeating cost
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            // find the count of cost which are less than thresolc
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] <= distanceThreshold)
                    count++;
            }
            // if the count is minimum then update the ans to i
            if (count == mn)
            {
                ans = i;
            } // else update the mn to count (minimum value)
            else if (mn > count)
            {
                mn = count;
                ans = i; // also update the ans
            }
        }
        return ans;
    }
};