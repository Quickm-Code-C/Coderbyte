#include "MathCoinCount.h"
#include <iostream>
#include <vector>

using namespace std;

// Have the function CoinDeterminer(num) take the input, which will be an integer
// ranging from 1 to 250, and return an integer output that will specify the least 
// number of coins, that when added, equal the input integer.Coins are based on 
// a system as follows : there are coins representing the integers 1, 5, 7, 9, 
// and 11. 

// So for example : if num is 16, then the output should be 2 because you can 
// achieve the number 16 with the coins 9 and 7. If num is 25, then the output 
// should be 3 because you can achieve 25 with either 11, 9, and 5 coins or 
// with 9, 9, and 7 coins.

// Utilizes Dynamic Prorgamming design
int MathCoinCount::CoinDeterminer(int num)
{
    int count = INT_MAX;

    //  Coins
    vector<int> coins{1, 5, 7, 9, 11};
    int         coinLength = coins.size();

    // Minimum number of coins
    vector<int> table(num + 1, INT_MAX);
    table[0] = 0;


    // Compute minimum coins required for all
    // Iterate through table
    for (int i = 1; i <= num; i++)
    {
        // Iterate through coin values less than i
        for (int j = 0; j < coinLength; j++)
        {
            if (coins[j] <= i)
            {
                int sub_res = table[i - coins[j]];
                if (sub_res != INT_MAX && sub_res + 1 < table[i])
                {
                    table[i] = sub_res + 1;
                }
            }
        }
    }

    count = (table[num] != INT_MAX) ? table[num] : -1;

    return count;
}


