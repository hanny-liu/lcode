#include <iostream>
#include<map>
#include <string>
#include <vector>
using namespace std;

/*class Solution {
public:
    string countAndSay(int n)
    {
        map<int,string> nums;
        int i=1;
        string s1 = "1", s2;
        nums.insert(make_pair(i, s1));
        while(i<=30)
        {
            for (auto j = 0; j != s1.size(); j++)
            {
                auto k = s1.find_first_not_of(s1[j]);
                s2.push_back(char(k - j));
                s2.push_back(s1[j]);
            }
            s1=s2;
            s2.clear();
            i++;
            nums.insert(make_pair(i,s1));
        }
        return nums[n];
    }
};*/

int main() {
    /*Solution A;
    int i=1;
    cout<<A.countAndSay(1);
    while(i<=30)
    {
        cout<<A.countAndSay(i)<<endl;
        i++;
    }*/
    map<int,string> nums;
    int i=1;
    string s1("211") ;

    nums.insert(make_pair(i, s1));
    //while(i<=5)
    {
        string s2;

        for (auto j = s1.begin() ;j != s1.end(); j++)
        {
            auto k = s1.find_first_not_of(*j);
            if(k==string::npos)
                k=s1.end()-j;
            cout<<k<<endl;
            //cout<<k<<endl;
            s2+=to_string(k);
            s2.push_back(*j);
            //cout<<s2<<endl;
            for(int n=0;n!=k;n++)
                s1.erase(j);
            //cout<<s1<<endl;
        }
        //cout<<s2<<endl;
        s1=s2;
        //cout<<s2<<endl;
        s2.clear();
        i++;
        nums.insert(make_pair(i,s1));
    }

    //return nums[n];



    return 0;



}