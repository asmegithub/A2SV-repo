class Solution {
public:
    int areaOf(int h1,int h2,int w){
        int h=min(h1,h2);
        return (w*h);
    }
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,area=0;

        while(i<j){
            int currentArea=areaOf(height[i],height[j],(j-i));
            area=max(area,currentArea);
            if(height[i]<height[j])
                i++;
            else j--;
          
        }

        return area;
        
    }
};