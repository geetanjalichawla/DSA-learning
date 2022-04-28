#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
vector<vector<int>> tripletSumbootforce(vector<int> &arr, int s)
{
    // Write your code here
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int l = j + 1; l < arr.size(); l++)
            {
                if (arr[i] + arr[j] + arr[l] == s)
                {
                    vector<int> triplet(3);
                    triplet[0] = arr[i];
                    triplet[1] = arr[j];
                    triplet[2] = arr[l];
                    ans.push_back(triplet);
                }
            }
        }
    }
    return ans;
}
void tripletSum(vector<int> &arr, int s)
{
    // Write your code here
    sort(arr.begin(), arr.end());

    int j = 1;
    int k = arr.size();

    for (int i = 0; i < arr.size(); i++)
    {
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] == s)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                j++;
            }
            else if (arr[i] + arr[j] + arr[k] > s)
            {
                k--;
            }
            else
                j++;
        }
    }
}
void pntVector(vector<vector<int>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<int> arr = {1,0, 3, 4, 4, 41, 40, 39, 38, 35, 33, -44, 5, 2, 3, 34, 34, 4, 532, 432, 341, 4141, 341, 5, 235, 4, 5, 5, 23, 23, 34, 34, 34, 32, 34, 4, 52, 423, 42, 4, 234, 23, 4, 23, 4, 5, 234, 23, 4, 23, 23, 42, 34, 2334, 2, 43, 234, 23, 432, 423, 4, 23, 423, 4, 32432, 4, 3, 4, 34, 3, 34, 34, 43, 43, 43, 34, 2, 34, 34, 3, 34, 2};
    tripletSum(arr,8);
    return 0;
}