class Solution {
public:
    int minimumRecolors(string b, int k) {
      int m=0, c=0;
        for(int i=0; i<k; i++)
          if(b[i]=='W')
            c++;

    m=c;
        for(int i=k; i<b.size(); i++){
            if(b[i]=='W')
            c++;
            if(b[i-k]=='W')
            c--;
            m=min(m,c);
        }
        return m;
    }
};
