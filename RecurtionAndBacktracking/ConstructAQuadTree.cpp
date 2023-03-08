/**
 * @file ConstructAQuadTree.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-02-28
 *
 * @copyright Copyright (c) 2023
 *
 */
/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution
{
public:
    Node *construct(vector<vector<int>> &grid)
    {
        // Since size can be power of 2, so all subdivision will be squares only
        return _construct(grid, 0, 0, grid.size());
    }

private:
    Node *_construct(vector<vector<int>> &grid, int i, int j, int w)
    {
        // all values same -> make it leaf
        if (allSame(grid, i, j, w))
            return new Node(grid[i][j], true);

        // All values not same, divide into 4 equal parts and recurse
        Node *node = new Node(true, false);
        node->topLeft = _construct(grid, i, j, w / 2);
        node->topRight = _construct(grid, i, j + w / 2, w / 2);
        node->bottomLeft = _construct(grid, i + w / 2, j, w / 2);
        node->bottomRight = _construct(grid, i + w / 2, j + w / 2, w / 2);
        return node;
    }

    bool allSame(vector<vector<int>> &grid, int i, int j, int w)
    {
        for (int x = i; x < i + w; x++)
        {
            for (int y = j; y < j + w; y++)
            {
                if (grid[x][y] != grid[i][j])
                    return false;
            }
        }
        return true;
    }
};