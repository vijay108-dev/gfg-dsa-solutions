#include <iostream>
#include <vector>
using namespace std;
string sortString(string s)
{
    vector<int> alpha(26, 0);
    //Count frequency
    for(int i =0;i<s.size();i++)
    {
        alpha[s[i] -'a']++;
    }

    //Build answer string
    string ans = "";

    for(int i=0;i<26;i++)
    {
        char c='a' + i;

        while(alpha[i]>0)
        {
            ans+=c;
            alpha[i]--;
        }
    }
    return ans;
}

int main()
{
    string s = "ebcab";
    cout<< sortString(s)<<endl;

    return 0;
}
//TC = O(N)
//SC = O(1)
