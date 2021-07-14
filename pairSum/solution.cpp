#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;


vector<int> pairSum(vector<int> arr, int S)
{
    int i = 0;
    int j = arr.size() - 1;
    vector<int> result;
    std::sort(arr.begin(), arr.end());


    while (i < j)
    {
       double current = arr[i] + arr[j];

       if (current < S) {
           i++;
       } else if (current > S){
           j--;
       } else {
           result.push_back(arr[i]);
           result.push_back(arr[j]);
           break;
       }
    }

    return result;
    




}

int main() 
{
    vector<int> arr{10,5,2,3,-6,9,11};
    int S = 4;

    auto p = pairSum(arr, S);

    if (p.size() == 0){
        cout << "No Such Pair";
    } else {
        cout<<p[0]<<","<<p[1]<<endl;
    }

    return 0;

}