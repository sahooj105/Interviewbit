# Interviewbit
solutions Array
Add One To Number
    
		
    vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    int i=0;
    int count=0;
    if(A[0]==0 && n==1)
    {
        A.erase(A.begin());
        A.push_back(1);
        return A;
    }
    while(A[i++]==0)
    {
        count++;
    }
    A.erase(A.begin(),A.begin()+count);
    n=A.size();
    A[n-1]+=1;
    int carry=A[n-1]/10;
    A[n-1]=A[n-1]%10;
    //int i;
    if(carry==0)
    {
        return A;
        //exit();
    }
    for(i=n-2;i>=0;i--)
    {
        if(carry==1)
        {
            A[i]+=1;
            carry=A[i]/10;
            A[i]=A[i]%10;
        }
    }
    if(carry==1)
    {
      // A[0]=10+A[0];
      A.insert(A.begin(),1);
    }
    return A;
    }
