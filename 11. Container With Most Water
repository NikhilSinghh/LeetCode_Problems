class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxArea = 0;
        int left = 0;
        int right = h.size() - 1;
        
        while (left < right) {
            int minHeight = min(h[left], h[right]);
            int width = right - left;
            int area = minHeight * width;
            
            maxArea = max(maxArea, area);
            
            if (h[left] < h[right])
                left++;
            else
                right--;
        }
        
        return maxArea;
    }
};

_____________________________________________________________________________________________________________________

//Optimized 
class Solution {
public:
    int maxArea(vector<int>& h) {
       int maxArea=0;
       int i=0, j=h.size()-1;

        while(i<j)
        {
            int width=j-i;
            int minHeight=min(h[i],h[j]);
            int area=minHeight*width;
            maxArea = max(maxArea, area);
            if(h[i]<h[j])
            i++;
            else j--;
        }
        return maxArea;
    }
};

________________________________________________________________________________________________________________
//Brute Force
class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxArea = 0;
        for (int i = h.size() - 1; i >= 0; i--) {
            for (int j = 0; j < h.size(); j++) {
                int d = i - j;
                int minHeight = min(h[i], h[j]);
                int area = d * minHeight;
                if (maxArea < area) {
                    maxArea = area;
                }
            }
        }
        return maxArea;
    }
};
