#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, capacity;
    cout << "Enter the number of items\n";
    cin >> n;
    vector<pair<int, int>> wp;
    cout << "Enter the capacity of knapsack\n";
    cin >> capacity;
    int dp[n + 1][capacity + 1];
    int weight, profit;
    cout << "Enter the weight and profit of each item\n";

    for (int i = 0; i < n; i++)
    {
        cin >> weight >> profit;
        wp.push_back(make_pair(weight, profit));
    }

    sort(wp.begin(), wp.end());

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (wp[i - 1].first <= j)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wp[i - 1].first] + wp[i - 1].second);
            }
            else
                dp[i][j] = 0;
        }
    }

    cout << "Maximun Profit\t" << dp[n][capacity]<<"\n";

    return 0;
}