class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int initialPoint=0;
        int highestAlt=0;
        for(int i=0;i<gain.size();i++){
            initialPoint=initialPoint+gain[i];
            if(initialPoint>highestAlt)
            highestAlt=initialPoint;
        }
           return highestAlt;
      }
};