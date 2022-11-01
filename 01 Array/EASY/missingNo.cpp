int ans = 0;

     for(int i=0; i<N-1; i++){

         ans = ans^A[i];

     }

     

     for(int i=1; i<=N; i++){

         ans = ans^i;

     }

    return ans;

     