/**
 * @file TheCelebrityProblemsMMIM.cpp
 * @author Mitesh tank
 * @brief
 * @version 0.1
 * @date 2022-06-25
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
private:
bool knows(vector<vector<int>> &M, int n, int a, int b)
{

    if (M[a][b] == 1)
        return true;

    return false;
}

public:
// Function to find if there is a celebrity in the party or not.
int celebrity(vector<vector<int>> &M, int n)
{

    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

    while (st.size() != 1)
    {

        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if (knows(M, n, a, b))
        {
            st.push(b);
        }
        else
        {
            st.push(a);
        }
    }
    int candidate = st.top();
    bool rowCheck = false;
    for (int i = 0; i < n; i++)
    {
        if (M[candidate][i] == 1)
        {
            rowCheck = true;
        }
    }
    if (rowCheck == true)
    {
        return -1;
    }

    bool ColumnCheck = false;
    for (int i = 0; i < n; i++)
    {
        if (candidate != i && M[i][candidate] == 0)
        {
            ColumnCheck = true;
        }
    }
    if (ColumnCheck == true)
    {
        return -1;
    }

    return candidate;
}
*/
