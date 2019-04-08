#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution{
public:
    string countAndSay(int n) {
        vector<string> vs;
        string s0 = "1";
        string s1;
        int t0 = 1;
        vs.emplace_back("1");
        int j = 1;
        while (j <= n)
        {
            for (auto i = s0.begin(); i != s0.end(); i++)
            {
                if ((i + 1) == s0.end())
                {
                    s1 += to_string(t0);
                    s1 += *i;
                    vs.push_back(s1);
                }
                else if (*i == *(i + 1))
                {
                    t0++;
                    //t1 = 1;
                }
                else
                {
                    s1 += to_string(t0);
                    s1 += *i;
                    t0=1;
                }
                //cout<<t0<<ends;
            }
            j++;
            cout<<s0<<endl;
            s0=s1;
            s1.clear();
            t0=1;
        }

        return vs[n-1];
    }
};



int main()
{
    vector<string> vs;
    string s0 = "1";
    string s1;
    int t0 = 1;
    vs.emplace_back("1");
    int j = 1;
    while (j <= 4)
    {
        for (auto i = s0.begin(); i != s0.end(); i++)
        {
            if ((i + 1) == s0.end())
            {
                s1 += to_string(t0);
                s1 += *i;
                vs.push_back(s1);
            }
            else if (*i == *(i + 1))
            {
                t0++;
                //t1 = 1;
            }
            else
            {
                s1 += to_string(t0);
                s1 += *i;
                t0=1;
            }
            //cout<<t0<<ends;
        }
        j++;
        //cout<<s0<<endl;
        s0=s1;
        s1.clear();
        t0=1;
    }
    cout<<vs[4];
    return 0;
}

