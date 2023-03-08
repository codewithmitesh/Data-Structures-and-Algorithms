/**
 * @file InsertDeleteandGetRandom.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
class RandomizedSet
{
public:
    // map to track the element and its index
    unordered_map<int, int> ump;
    vector<int> v;
    RandomizedSet()
    {

        // Nothing Here :- :) hehehehehehehehe
    }

    bool insert(int val)
    {

        if (ump.find(val) != ump.end())
        {
            return false;
        }

        v.push_back(val);

        ump[val] = v.size() - 1;
        return true;
    }

    bool remove(int val)
    {

        if (ump.find(val) == ump.end())
            return false;

        int ind = ump[val];
        int last = v.back();
        ump[last] = ind;
        v[ind] = last;

        ump.erase(val);

        v.pop_back();
        return true;
    }

    int getRandom()
    {
        return v[rand() % v.size()];
    }
};

/**
 * @brief
 *
 */
*RandomizedSet *obj = new RandomizedSet();
*bool param_1 = obj->insert(val);
*bool param_2 = obj->remove(val);
*int param_3 = obj->getRandom();
* /