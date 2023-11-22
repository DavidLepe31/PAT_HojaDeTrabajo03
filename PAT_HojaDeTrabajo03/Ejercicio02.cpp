#include "Ejercicio02.h"
#include<unordered_map>
#include<algorithm>


vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    
    std::unordered_map<string, vector<string>> mp;

    for (auto it : strings)
    {
        string s = it;
        sort(s.begin(), s.end());
        mp[s].push_back(it);
    }

    vector<vector<string>> v;
    vector<vector<string>>* vf=&v;
    for (auto i : mp)
        vf->push_back(i.second);
    
    
    return vf;
}
