int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    vector<int> a(n,0);
    for(int j=0;j<n;j++)
    {
        if(a[A[j]]==0)
            a[A[j]]=1;
        else
            return A[j];
    }
    return -1;
}

int Solution::repeatedNumber(const vector<int> &A) {
    vector <bool> v(A.size());
    fill(v.begin(), v.end(), true);

    for(int i=0;i<A.size();i++){
        if(v[A[i]]){
            v[A[i]]=false;
        }
        
        else
            return A[i];
    }
}
