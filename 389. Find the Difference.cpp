class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> mp;
       for(int i=0; i<s.size(); i++){
           mp[s[i]]++;
       }
        for(int i=0; i<t.size(); i++){
           mp[t[i]]--;
           if(mp[t[i]]<0)
            return t[i];
       }
       return 'z';
    }
};



//  int a[26];
//         for(int i=0; i<s.size(); i++){
//             int temp=s[i]-'a';
//             a[temp]++;
//         }

//           for(int i=0; i<t.size(); i++){
//             int temp=t[i]-'a';
//             a[temp]--;
//         }

//         for(int i=0; i<t.size(); i++){
//             if(a[i]<0){
//                 char x=a[i]+'a';
//                 return x;
//             }
//         }

//         return 'a';
        


        // while(i < t.size() && i < s.size())
        // {
        //     if(s[i]!=t[i]){
        //         if(s[i]==t[i+1])
        //         return t[i];
        //         else return s[i];
        //     }

        //     i++;
        // }
        // if(t.size()>s.size())
        // return t[t.size()-1];
        //  return s[s.size()-1];
