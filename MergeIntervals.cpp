 vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end());
        int idx=0;
        int i=1;
        while(i<intervals.size())
        {
            if(intervals[idx][1]>=intervals[i][0])
            {
                intervals[idx][1]=max(intervals[idx][1],intervals[i][1]);
                i++;
            }
            else
            {
                idx++;
                intervals[idx][0]=intervals[i][0];
                intervals[idx][1]=intervals[i][1];
                i++;
            }
                
        }
         intervals.erase(intervals.begin()+idx+1, intervals.end());
        return intervals;
    }