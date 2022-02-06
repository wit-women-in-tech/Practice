int majorityElement(int a[], int size)
{
        
    // your code here
    int n = size;
    sort(a,a+n);
    int ans = -1;
    for(int i=0;i<n+1/2;i++){
        if(a[i] != a[i+n/2])
        continue;
        else{
            ans = a[i];
            break;
        }
    }
        return ans;
}
