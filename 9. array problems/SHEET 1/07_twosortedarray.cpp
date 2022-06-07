#include <iostream>
#include <vector>
using namespace std;
vector<int> findArrayIntersection(int arr1[], int arr2[], int n, int m)
{
    // Write your code here.
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
             ans.push_back(arr1[i]);
             i++;
             j++;
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        else if (arr1[i] > arr2[j])
        {
             j++;
        }
    }

    return ans;
}
vector<int> findArrayunion(int arr1[], int arr2[], int n, int m)
{
    // Write your code here.
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
             ans.push_back(arr1[i]);
             i++;
             j++;
        }

        else if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }

        else if (arr1[i] > arr2[j])
        { 
            ans.push_back(arr2[j]);
             j++;
        }
    }

    return ans;
}
 while(i < n)
        ans.push_back(a[i++]);
    
    while(j < m)
        ans.push_back(b[j++]);
        
    return ans;
void printarr(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {1, 277, 90, 100, 1123, 4443};
    int b[] = { 2, 4, 9, 12, 14, 42, 55, 66, 77, 90, 100, 1123, 4443};
    vector<int> anb = findArrayIntersection(a, b, 6, 13);
    vector<int> aub = findArrayunion(a, b, 6, 13);
    printarr(aub);
    return 0;
}
