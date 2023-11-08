
#include <iostream>
#include <vector>
using namespace std;


///greates is who is greater than the greatest 
vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{   
    vector<bool> result;
    int maxNumberOfCandies=0;
    for(int i=0 ; i < candies.size(); i++){
        maxNumberOfCandies = max(maxNumberOfCandies, candies[i]);
    }
    //cout<<maxNumberOfCandies;

    for (int j=0; j < candies.size();j++){
        result.push_back(candies[j]+extraCandies >= maxNumberOfCandies);
        //cout<<result[j];
    }
    return result;
    
}

int main()
{
    vector<int> candies = {4,2,1,1,2};
    int extraCandies = 1;
    vector<bool> result = kidsWithCandies(candies, extraCandies);
    for(int i=0 ; i < candies.size(); i++){
        cout<<result[i];
    }
    return 0;
}