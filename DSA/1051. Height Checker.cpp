int heightChecker(vector<int>& heights) {
        int c=0;
        vector<int>a(heights.begin(),heights.end());
        sort(a.begin(),a.end());
        for(int i=0;i<heights.size();i++){
           if(a[i]!=heights[i])c++;
        }
        return c;
    }
