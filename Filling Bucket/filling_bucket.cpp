public:
  int mod = 1e8;
    int fillingBucket(int N) {
        // code here
        if(N<=3) return N;
        int p1=1,p2=2;
        for(int i=1;i<=N-2;i++){
            int cur=(p1+p2)%mod;
            p1=p2;
            p2=cur;
        }
        return p2;
    }
