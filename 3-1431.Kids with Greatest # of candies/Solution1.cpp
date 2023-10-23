
#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
   
   int greatestNum;
   int maximum;
   vector<bool> result( candies.size(), true);

    
    for (int i=0; i < candies.size() ; i++){
         maximum= candies[i]+extraCandies ;
         
         for(int j=1; j < candies.size(); j++){
           
             if(maximum >= candies[j]){
                greatestNum= maximum;
             }
             else{
              greatestNum = candies[j];
              result[i]=false;
                
             } 
        
         }
       
       
    }
    return result;
}




int main()
{
   vector<int> candies = {12,1,12} ;
   int extraCandies =10;
   vector<bool> result = kidsWithCandies(candies , extraCandies);
   //cout<<result.size();
   for(int i=0; i < result.size();i ++){
    cout<<result[i]<<" ";
   }
    return 0;
}