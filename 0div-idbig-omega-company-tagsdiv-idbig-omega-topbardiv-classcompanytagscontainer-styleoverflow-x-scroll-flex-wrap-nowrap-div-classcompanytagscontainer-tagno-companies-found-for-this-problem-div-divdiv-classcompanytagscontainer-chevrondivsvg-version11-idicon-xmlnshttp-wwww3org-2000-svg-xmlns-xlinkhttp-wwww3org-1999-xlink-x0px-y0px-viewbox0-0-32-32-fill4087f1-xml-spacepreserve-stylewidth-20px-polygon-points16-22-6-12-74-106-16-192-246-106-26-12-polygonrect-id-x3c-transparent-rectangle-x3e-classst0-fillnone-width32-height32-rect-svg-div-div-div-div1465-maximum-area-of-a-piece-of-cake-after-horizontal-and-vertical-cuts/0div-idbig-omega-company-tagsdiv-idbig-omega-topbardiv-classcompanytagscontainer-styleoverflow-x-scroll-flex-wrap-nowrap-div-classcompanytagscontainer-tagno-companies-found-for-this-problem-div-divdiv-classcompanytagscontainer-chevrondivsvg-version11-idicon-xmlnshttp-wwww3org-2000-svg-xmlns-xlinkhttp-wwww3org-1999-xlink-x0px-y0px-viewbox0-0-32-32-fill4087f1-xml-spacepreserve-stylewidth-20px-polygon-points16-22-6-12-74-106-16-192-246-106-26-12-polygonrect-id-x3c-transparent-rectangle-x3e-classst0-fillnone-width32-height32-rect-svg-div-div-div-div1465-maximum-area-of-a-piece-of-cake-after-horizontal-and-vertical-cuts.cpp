class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        int maxheight = horizontalCuts[0];
        int maxwidth = verticalCuts[0];
        
        for(int i=1; i<horizontalCuts.size(); i++)
        {
            maxheight = max(maxheight, horizontalCuts[i] - horizontalCuts[i-1]);
        }
        
        
        
        for(int i=1; i<verticalCuts.size(); i++)
        {
            maxwidth = max(maxwidth, verticalCuts[i] - verticalCuts[i-1]);
        }
        
        
        return (1LL*maxheight*maxwidth) % 1000000007;
        
    }
};

