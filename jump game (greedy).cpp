      int i;
      int end=0;
      int maxreach=0;
      int count=0;
      for(i=0;i<n-1;i++)
      {maxreach= max(maxreach,i+arr[i]);
          if(i==end)
          {count++;end=maxreach;
          }
       }
      if(end<n-1)
       return -1;
      else
       return count;
