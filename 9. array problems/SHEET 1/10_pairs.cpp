#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here
	sort(arr.begin(),arr.end());
	vector< vector<int> > ans;
	
	for(int i = 0 ; i < arr.size() ; i++){
		for(int j = i+1 ; j<arr.size(); j++)
		{
			if(arr[i] + arr[j] == s)
				{vector<int> pair(2);
                pair[0] = arr[i];
                pair[1] = arr[j];
                ans.push_back(pair);}

		}
	}
	return ans;
}
void pntVector(vector<vector <int>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
         cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
int main()
{
    vector<int> arr = {1,3,4,4,41,40,39,38,35,33,-44,5,2,3,34,34,4,532,432,341,4141,341,5,235,4,5,5,23,23,34,34,34,32,34,4,52,423,42,4,234,23,4,23,4,5,234,23,4,23,23,42,34,2334,2,43,234,23,432,423,4,23,423,4,32432,4,3,4,34,3,34,34,43,43,43,34,2,34,34,3,34,2};
    vector<vector <int>> ans = pairSum(arr,44);
    pntVector(ans);

return 0;
}