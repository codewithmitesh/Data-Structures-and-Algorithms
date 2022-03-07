/**
 * @file checkIfTreeareIsoMorphic.cpp
 * @author Mitesh Tank
 * @brief
 * @version 0.1
 * @date 2022-03-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
bool isIsomorphic(Node *root1, Node *root2)
{

    if (root1 == NULL && root2 == NULL)
        return true;

    if (root1 == NULL || root2 == NULL)
        return false;

    if (root1->data != root2->data)
    {
        return false;
    }

    if ((isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left)) || (isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right)))
    {
        return true;
    }
    else
        return false;
}
*/