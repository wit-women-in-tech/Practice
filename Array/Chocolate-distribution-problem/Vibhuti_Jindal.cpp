long long findMinDiff(vector<long long> a, long long n, long long m)
  {
 
    sort(a.begin(),a.end());
      
    long int diff, high=m-1,low=0,temp=(a[m-1]-a[0]);
    while(high< n)
    {
        diff=a[high] - a[low];
        temp=min(temp, diff);
        low++;
        high++;
    }
    return temp;
  }   
