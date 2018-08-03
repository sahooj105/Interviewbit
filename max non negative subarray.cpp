vector<int> Solution::maxset(vector<int> &A) {
   long long int start=0, end=0, ansStart=0, length=0, ansLength=0, ansEnd=-1, sumTillNow = INT_MIN, maxTillNow=INT_MIN;
   int i=0;
   
   while(i<A.size()){
       if(A[i]>=0){
            start = i;
            sumTillNow =0;
            length =0;
            
            while(A[i]>=0 && i<A.size()){
                sumTillNow +=A[i];
                i++;   
            }
            end = i-1;
            
           if( ( sumTillNow>maxTillNow ) || ( sumTillNow==maxTillNow && end - start +1 < ansLength ) ){
               ansStart = start;
               ansEnd = end;
               ansLength = start + end -1 ;
               maxTillNow = sumTillNow;
            }
       }
       i++;
       
    }
       vector <int> ans;
       for(int i=ansStart; i<=ansEnd;i++){
           ans.push_back(A[i]);
       }
       
       return ans;
}

//new solution
vector<int> Solution::maxset(vector<int> &A) {
    vector<int> sol;
    int count=0;
    double max=0,sum=0,diff=0,prev=-1;
    int n=A.size();
    for(int i=0;i<A.size();i++)
    {
        //cout<<i<<"\n";
        int k=i;
        while(A[i]>=0 && i<n)
        {
            sum=sum+A[i];
            i++;
            //sol.push_back(A[i]);
            //sol.push_back(A[i]);
        }
        int j=i;
        //cout<<max<<"\n";
        if(((max<=sum || max==0) || (j-k)>diff) ) //|| (max=sum && (j-k)>diff))
        {
            max=sum;
           // prev=max;//&& prev!=max
            sol.clear();
            for(int x=k;x<j;x++)
            {
                sol.push_back(A[x]);
            }
            diff=j-k;
        }
        sum=0;
    }
    return sol;
}

