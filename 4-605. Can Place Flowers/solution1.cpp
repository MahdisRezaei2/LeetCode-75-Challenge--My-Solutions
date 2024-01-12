
#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{

    if (flowerbed.empty())
        return false;
    for (int i = 0; i < flowerbed.size(); ++i)
    {
        // If the current position is empty and its previous one isn't, then we can plant
        // a flower here.
        if ((i == 0 || flowerbed[i - 1] == 1) && flowerbed[i] == 0)
            --n;
        // If there are no more flowers to be planted, we can stop checking.
        if (n <= 0)
            return true;
    }
    return false;
}

int main()
{
    vector<int> flowerbed = {1, 0, 0, 0, 1};
        int n=1;
    //int n = 2;
    bool result = canPlaceFlowers(flowerbed, n);
    cout << result << endl;
    return 0;
}
