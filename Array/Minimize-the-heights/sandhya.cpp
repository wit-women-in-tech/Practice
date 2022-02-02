int getMinDiff(int arr[], int n, int k) {
        
        vector<int>vis(n);// to chk in our window whther we have included any height of that tower or not
        vector<pair<int,int> >h;//vector to store all possible heights of each tower
        for(int i=0;i<n;i++)
        { int mod_h;//modified height
            if(arr[i]-k>=0)
            {   mod_h=arr[i]-k;
                h.push_back(make_pair(mod_h,i));
            }
            mod_h=arr[i]+k;
            h.push_back(make_pair(mod_h,i));
        }
        sort(h.begin(),h.end());// sorting all heights 
        //to find range in which all towers are present and to take that in which diff of max_height and min_height is min
       int ele=0;// to store exactly how many towers are in particular window
       int left=0;
       int right=0;
       
       while(right<h.size()&& ele<n)
       {
           if(vis[h[right].second]==0)
           ele++;
           vis[h[right].second]++;
           right++;
       }
       
       int ans=(h[right-1].first-h[left].first);
       while(right<h.size())
       {
           if(vis[h[left].second]==1)
           {
               ele--;
           }
           vis[h[left].second]--;
           left++;
           
           while(right<h.size()&& ele<n)
       {
           if(vis[h[right].second]==0)
           ele++;
           vis[h[right].second]++;
           right++;
       }
       if(ele==n)
       {
         ans=min(ans,(h[right-1].first-h[left].first));  
       }
       else{
           break;
       }
       }
       
       return ans;
    
    }
    