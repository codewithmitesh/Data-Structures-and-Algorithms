/**
 * @file TaskSchedular.cpp
 * @author  Mitesh Tanks (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-05-07
 *
 * @copyright Copyright (c) 2022
 *
 */
/**
int leastInterval(vector<char> &tasks, int n)
{

    // Create a frequency vector
    vector<int> f(26, 0);

    // Store the frequency of the letters appearing in tasks
    for (char task : tasks)
    {
        f[task - 'A']++;
    }

    // Sort the vector to get the greatest element
    sort(f.begin(), f.end());

    // The greatest element will represent the chunk (gap between the two processes)
    int chunk = f[25] - 1;

    // IdleSpot represents the total no.of chunks in which letters can be placed
    int idleSpots = chunk * n;

    // Getting the right number of idlespots to fit in the rest of the processes
    for (int i = 24; i >= 0; i--)
    {
        idleSpots -= min(chunk, f[i]);
    }
    // Returning idleSpots + size of tasks = least number of units of times that the CPU will take to finish all the given tasks.
    return idleSpots < 0 ? tasks.size() : idleSpots + tasks.size();
}
*/