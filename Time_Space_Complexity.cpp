 /*
 
 
                                          TIME COMPLEXITY


It is a total time taken by an algorithm to run as a function of length of the input.

 
 eg 1:       for (i = 1; i <= n;i++)
           for(j = 1; j <= i*2; j++)
            {
                cout<<"Chamka"
           }
  Time complexity = n(n+1)(2n+1)/6

eg 2:        for (i = 1;i <= n; i++ )
            for (j = 1; j <= m ; j++)
            { 
              cout<<"Chamka" 
               } 
   Time complexity = 0(nm)


eg 3:       for ( i = n/2; i <= n ; i ++) ----> n/2
            for ( j = 1 ; j<= n/2 ; j ++) ----> n/2
            for ( k = 1 ; k <= n ; k ++)  -----> n
            {
            cout<<"Chamka"
            }
    Time complexity = 0(n*3) i.e n/2 X n/2 X n = n*3

                            ORDER OF TIME COMPLEXITY FROM WORST TO BEST 

                                         O(N!) 
                                         O(2*N) 
                                         O(N*3)
                                         O(N*2)
                                         O(NLogn)
                                         0(N)
                                         O(under root N)
                                         0(logn)
                                         O(1)

 
                                                
                                                
                                        SPACE COMPLEXITY

It is the amount  of space taken  by an algorithm  as a function of length of input.

1: Auxillary Space ---> Auxillary space is basicallly that space which is come from output only 

2: Total space complexity ---> Total space complexity is that space which is sum of input space and output space.

eg: 1  for ( int i = 1; i < n; i++)
      {
      cout<<"i";
      }


      Here auxillary space is  1 = O(1)
      Here Total spcae complexity is O(n)
 */                                         




