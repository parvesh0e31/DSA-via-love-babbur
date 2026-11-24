#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

int lengthoflongestsubstring(string s){


    int left = 0;
    int maxlength = 0;

    set<char> st;

    for (int right = 0; right < s.length();right++){


        while(st.find(s[right]) != st.end()){

            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);
        int length = right-left+1;
        maxlength = max(maxlength,length);}


        return maxlength;

    }
    int main(){
        string s;
        cout<<"enter string";
        getline(cin,s);
        int result = lengthoflongestsubstring(s);
        cout<<"substring max is :"<<result<<endl;
        return 0;
    }
